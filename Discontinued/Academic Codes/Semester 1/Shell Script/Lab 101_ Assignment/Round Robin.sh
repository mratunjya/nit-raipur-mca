echo -n "Enter total number of processes: "
read P
for ((i=0;i<P;i++))
do
    echo "------ Enter Process - P$(($i+1)) details ------"
    processes[$i]="P$(($i+1))"
    echo -n "Enter P$(($i+1)) Arrival Time: "; read arrival_time[$i]
    echo -n "Enter P$(($i+1)) Burst Time: "; read burst_time[$i]
    RT[$i]=0; flag[$i]=0; executed[$i]=0

    echo
done

echo -n "Enter Quantum Time --> "; read time_slice
echo "------- ROUND ROBIN SCHEDULING -------"
#processes=("p1" "p2" "p3" "p4") #array to store processes names
#arrival_time=(0 2 1 4) #array of arrival time
#burst_time=(5 4 2 1) #array of burst time
#RT=(0 0 0 0) #response time
#flag=(0 0 0 0)
#executed=(0 0 0 0)
#time_slice=2 #time quantum
n_processes=${#processes[@]}
n_running_pro=$n_processes
TOTAL_TAT=0 #total turnaround time
TOTAL_WT=0 #total wait time
TOTAL_RT=0 #total response time

#function to initialize remaining time of all processes
for ((i=0; i<$n_processes; i++))
do
    remaining_time[$i]=${burst_time[$i]}
done

echo -e "PN\tAT\tBT\tCT\tTAT\tWT\tRT"
complete=0
_time=0

declare -a queue
h=0
t=0

push_queue () {
    queue[$t]=$1
    t=$(($t+1))
}

pop_queue () {
    ele="${queue[$h]}"
    h=$(($h+1))
    return $ele
}

update_queue () {
    if [ $_time -gt 0 ]
    then
        last_time=$(($_time - $time_slice))
    else
        last_time=0
    fi
    while [ $last_time -le $_time ]
    do
        j=0
        while [ $j -lt $n_processes ]
        do
            if [ "${arrival_time[$j]}" -eq $last_time -a "${flag[$j]}" -eq 0 ]
            then
                push_queue $j
                flag[$j]=1
            fi
            j=$(($j+1))
        done
        last_time=$(($last_time+1))
    done
}

update_queue

while [ $n_running_pro -ne 0 ]
do
    pop_queue
    i=$?

    #execute to compute response time of each processes
    if [ "${executed[$i]}" -eq 0 ]
    then
        RT[$i]=`expr $_time - ${arrival_time[$i]}`
        executed[$i]=1
    fi

    #processes execution
    if [ "${remaining_time[$i]}" -le "$time_slice" ]
    then
        _time=`expr $_time + ${remaining_time[i]}`
        remaining_time[$i]=0
        complete=1
        update_queue
    elif [ "${remaining_time[i]}" -gt "$time_slice" ]
    then
        _time=`expr $_time + $time_slice`
        remaining_time[$i]=`expr ${remaining_time[$i]} - $time_slice`
        update_queue
        push_queue $i
    fi

    #execute if the process has completed execution
    if [ "${remaining_time[i]}" -eq 0 -a "$complete" -eq 1 ]
    then
        n_running_pro=$(($n_running_pro - 1))
        CT[$i]=$_time
        TAT[$i]=`expr ${CT[$i]} - ${arrival_time[$i]}`
        WT[$i]=`expr ${TAT[$i]} - ${burst_time[$i]}`
        TOTAL_TAT=`expr $TOTAL_TAT + ${TAT[$i]}`
        TOTAL_WT=`expr $TOTAL_WT + ${WT[$i]}`
        TOTAL_RT=`expr $TOTAL_RT + ${RT[$i]}`
        complete=0
        echo -e "${processes[i]} \t${arrival_time[i]} \t${burst_time[i]} \t${CT[i]} \t${TAT[i]} \t${WT[i]} \t${RT[$i]}"
    fi
done

avg_TAT=`echo "scale=2;$TOTAL_TAT / $n_processes" | bc`
avg_WT=`echo "scale=2;$TOTAL_WT / $n_processes" | bc`
avg_RT=`echo "scale=2;$TOTAL_RT / $n_processes" | bc`

echo "Average turnaround time: $avg_TAT"
echo "Average waiting time: $avg_WT"
echo "Average response time: $avg_RT"