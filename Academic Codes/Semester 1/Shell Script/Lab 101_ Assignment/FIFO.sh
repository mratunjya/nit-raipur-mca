#!/bin/bash

echo "Enter number of frames in main memory"
read n_frames

declare -a frames
#initializing all farme to -1
for((i=0;i<$n_frames;i++))
do
    frames[ $i ]=-1
done
#variables to keep count of page_hit and page_fault frequency
page_hit=0
page_fault=0
#variable to keep track of which frame to replace from
current_frame=0
while [ 1 -eq 1 ]
do
    #Taking requested page as input
    echo ""
    echo "Enter page requested by CPU"
    read page_no
    #flag variable to check if page is alredy present in memory or not
    flag=0
    #checking if page is already present in memory or not
    for((k=0;k<$n_frames;k++))
    do
        present=${frames[$k]}
        if [ $present -eq -1 ]
        then
            break
        elif [ $present -eq $page_no ]
        then
            #updating flag variable if page is already present
            flag=1
            echo""
            echo "Page Found in Main Memory"
            #increamenting page hit variable by 1
            page_hit=$((page_hit + 1))
            break
        fi
    done
    #if page not found
    if [ $flag -eq 0 ]
    then
        echo ""
        echo "Page Fault Occured"
        #increamenting page_fault variable by 1
        page_fault=$((page_fault + 1))
        #Extracting value of current_frame in which requested page will be placed
        value=${frames[$current_frame]}
        #if frame is empty allocate page to frame else replace page previously
        # at current_frame with page requested by cpu
        if [ $value -eq -1 ]
        then
            echo ""
            echo "Page $page_no allocated to frame $current_frame"
            frames[$current_frame]=$page_no
        else
            echo ""
            echo "Replacing page $value with page $page_no"
            frames[$current_frame]=$page_no
        fi
        #updating current_frame variable
        current_frame=$((current_frame + 1))
        current_frame=`expr $current_frame % $n_frames`
    fi
    echo""
    echo "If no more page is requested please press 1 else press any other number to continue"
    read nxt
    if [ $nxt -eq 1 ]
    then
        break
    fi
done
#Printing Final data of system
echo""
echo "Our final status of memory-> [ ${frames[@]} ]"
echo ""
echo "Page Hit frequency $page_hit"
echo ""
echo "Page Miss Frequency $page_fault"
page_hit_ratio=`echo "scale=2; ( $page_hit / ( $page_hit + $page_fault ) )" | bc`
page_miss_ratio=`echo "scale=2; ( $page_fault / ( $page_hit + $page_fault ) )" | bc`
echo""
echo "Page Miss Ratio $page_miss_ratio"
echo""
echo "Page Hit Ratio $page_hit_ratio"