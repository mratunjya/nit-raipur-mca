#Wap of FCFS in implement CPU scheduling algorithms.
#!/bin/bash
echo "Enter Number of Process:"
read n
echo "Enter burst TIme:"
for (( i=0; i<n; i++ ))
do
    read b[$i]
done
echo "Enter Arrival Time:"
for (( i=0; i<n; i++ ))
do
    read a[$i]
done
#Completion time will start at 0.
c[0]=0
for (( i=0; i<n; i++ ))
do
    #in first step 1st Completion time=1st burst time + 1st arrival time
    if [ $i -eq 0 ]
    then
        c[i]=$(( a[i] + b[i] ))
    else
        #next completion time=previous completion time + next burst time
        c[i]=$(( c[i-1] + b[i] ))
    fi
done
for (( i=0; i<n; i++ ))
do
    #Turn around time=Completion time - Arrival time.
    t[i]=$(( c[i] - a[i] ))
    #Waiting time =Completion time - burst time.
    w[i]=$(( t[i] - b[i] ))
done
#print all completion time of all process.
echo "completion time"
for (( i=0; i<n; i++ ))
do
    echo "${c[$i]}"
done
#print all Waiting time of all process.
echo "Waiting time:"
for (( i=0; i<n; i++ ))
do
    echo "${w[$i]}"
done
#print all Turnaround time of all process.
echo "Turnaround time:"
for ((i=0; i<n; i++))
do
    echo "${t[$i]}"
done
echo "Avg of Turn around time-"
for (( i=0; i<n; i++ ))
do
    sum=$(( $sum + t[i] ))
done
# scale=2 is uesd because i want two digit after decimal where bc is basic calculator
echo "scale=2; $sum / $n" | bc
echo "Avg of Waiting time-"
for (( i=0; i<n; i++ ))
do
    wt=$(( $wt + w[i] ))
done
echo "scale=2; $wt / $n" | bc