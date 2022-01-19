declare -a f[20]

#Initialize complete array with 0 and 1 by using RANDOM shell variable
for ((i=0;i<20;i++))
do
    f[$i]=$(( RANDOM%2 ));
done
#Loop to ask user for file allocation
while true
do
    echo ${f[@]} # Display present status of disk space(array)
    count=0
    echo "Enter starting block and length of files: "
    read st
    read len

    #calculate the last block of file
    x=$(( st+len ))

    #Check whether all blocks (starting from st to x) are empty
    for ((k=$st;k<$x;k++))
    do
        if [ ${f[$k]} == 1 ]
        then
            break #if block is not empty
        fi
        (( count++ )) # if block is empty
    done #end of for loop

    #Allocate them if all blocks are empty
    if [ $len == $count ]
    then
        echo "File allocation is as follows:"
        for ((j=$st;j<$x;j++))
        do
            #Re-initialize array (allocated blocks)
            f[$j]=1
            echo "$j  ${f[$j]}"
        done #end of for loop

        if [ $j != $(( st+len-1 )) ]
        then
            echo "The file is allocated to disk"
        fi
    else
        echo "The file is not allocated "
    fi

    echo "Press 0 to stop and any other key to continue"
    read c

    if [ $c == 0 ]
    then
        break
    fi
done #end of while