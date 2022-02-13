#! /bin/bash

hit=0
miss=0

echo "Enter no of frames : "
read f

echo "Enter no of pages : "
read p

declare -a count[$f]
declare -a pages[p]
declare -a frame[$f]

#Making empty frame and counts with 0
#Assuming -1 means empty
for(( i=0; i<$f ; i++ ))
do
    frame[$i]=-1;
    count[$i]=0
done

#initilizing Pages by asking user
for (( i=0;i<$p;i++ ))
do
    echo "Enter page ref $(($i+1)) : "
    read pages[$i]
done

echo "-------------------------------------------------"

#start filling in all pages
for (( i=0;i<$p;i++ ))
do
    echo ""
    echo "frame : ${frame[*]} <--- ${pages[i]}"
    echo "count : ${count[*]}"

    for (( j=0;j<$f;j++))
    do
        #if same element in then put and incress count and incress hit
        if (( ${frame[j]} == ${pages[i]} ))
        then
            count[j]=$((${count[$j]}+1))
            hit=$(($hit+1))
            continue 2
        fi
    done

    #if empty fill and initiall fill
    if (( $i<$f ))
    then
        frame[i]=${pages[i]}
        count[i]=$((${count[$i]}+1))
        miss=$(($miss+1))
        continue
    fi

    # if new number and find last count and replace
    temp_least=$p
    place_least=0

    for (( j=0;j<$f;j++ ))
    do
        #as hit will always be greter then count
        if (( ${count[j]} < $temp_least ))
        then
            temp_least=${count[j]}
            place_least=$j
            #found least count deleat it which is old
        fi
    done

    #Deleate first element in least place and make count 0
    frame[$place_least]=-1
    count[$place_least]=0

    #now move the frame and count array
    for (( k=$place_least;k<$f;k++ ))
    do
        if (( $k>=$(($f-1)) ))
        then
            #new element in last place
            frame[-1]=${pages[$i]}
            count[-1]=1
            miss=$(($miss+1))
            break
        else
            frame[k]=${frame[$(($k+1))]}
            count[k]=${count[$(($k+1))]}
        fi
    done
done

echo ''
echo "final frame : ${frame[*]}"
echo "final count : ${count[*]}"
echo ""
echo "No of hits: $hit"
echo "No of miss: $miss"
echo "Hit ratio: "
div=`echo "scale=2; $hit / $p" | bc`
echo $div