echo "   SHORTEST JOB FIRST   "
echo "input total number of process with details"
read P
avgtat=0
avgwt=0
c=1
for ((i=0;i<P;i++))
do
    echo "    enter process P$(($i+1)) details    "
    prs[$i]="P$(($i+1))"
    echo "enter P$(($i+1)) arrival time : "; read arr[$i]
    echo "enter P$(($i+1)) burst time: "; read burst[$i]
done
echo " S_no.  process   arrival_time   burst_time     waiting_time     turn_aroun_time"
for((i=0;i<P;i++))
do
    j=`expr $i + $c`
    for((j=i+1;j<P;j++))
    do
        if [ ${arr[i]} -gt ${arr[j]} ]
        then
            a=${arr[i]}
            arr[i]=${arr[j]}
            arr[j]=$a
            a=${burst[i]}
            burst[i]=${burst[j]}
            burst[j]=$a
            a=${prs[i]}
            prs[i]=${prs[j]}
            prs[j]=$a
        fi
    done
done
time=${arr[0]}
for((i=0;i<P;i++))
do
    c=99999
    for((j=0;j<P;j++))
    do
        if [ ${arr[j]} -le $time ]
        then
            if [ ${burst[j]} -lt $c ]
            then
                x=${arr[j]}
                y=${prs[j]}
                c=${burst[j]}
                n=$j
            fi
        fi
    done
    wt=`expr $time - $x`
    tat=`expr $wt + $c`
    time=`expr $time + $c`
    echo " $i        $y             $x                   $c                $wt                 $tat"
    avgtat=`expr $avgtat + $tat`
    avgwt=`expr $avgwt + $wt`
    burst[n]=99999
done
avt=`echo "scale=2;$avgtat / $P" | bc`
avw=`echo "scale=2;$avgwt / $P" | bc`
echo "average turnaround time: $avt"
echo "average waiting time: $avw"