declare -a f[50]

#initialize complete array with 0
for (( i=0; i < 50; i++ ))
do
    f[$i]=0
done

# Loop to ask user for file allocation
while true
do
    echo "Enter how many blocks already allocated:"
    read p
    echo "Enter blocks already allocated:"

    for (( i=0; i < p; i++ ))
    do
        read a
        f[$a]=1
    done

    echo "Enter index starting block and length:"
    read st
    read len

    k=len
    #if [ ${f[$st]} == 0 ]
    #then
    #x=$(($st + $k))
    for (( j=$st; j < $(($st+$k)); j++ ))
    do
        #checking if the block is not allocated
        if [ ${f[$j]} == 0 ]
        then
            #allocating the block
            f[$j]=1
            echo "$j -----> ${f[$j]}"
        else
            #to print the block that is already allocated
            echo "$j Block is already allocated"
            k=$((k+1))
        fi
    done

    #else
    #echo "Starting block is already allocated"
    #fi

    # Whether you want to continue to allocate more block
    echo "Do you want to enter more file yes-1/ No-0 :"
    read c
    if [ $c == 0 ]
    then
        break
    fi
done	#end of while loop