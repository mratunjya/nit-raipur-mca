#I am considering 0th index of array as bottom of queue
#and last element as Top
#so whenever I push element in queue I will insert at the end of array
#and wheneve I pop element from queue I will remove 0th index element


#-----taking Input from the user----------
echo "Total Number of Pages "
read n
echo "Enter $n reference string values :"
str=()
for (( i=0;i<$n;i++ ))
do
    read str[$i]
done
echo "Enter Total Number of frames :"
read f
#-----------End of Input----------------

#---------------------------------------
#----START SIMULATING LRU ALGORITHM-----
#---------------------------------------

#creating array to store pages
p=()

#Looping through the reference string
for (( i=0;i<$n;i++ ))
do
    #taking flag variable to see if the current page is algready available in the array
    flag=0

    #push page into queue
    p[${#p[@]}]=${str[i]}

    #check if it exist in queue
    for (( j=0;j<${#p[@]}-1;j++ ))
    do
        if [ ${str[i]} -eq ${p[j]} ]
        then
            flag=1
            #if page already exist in the array we will remove it
            unset p[$j]
            #After removing element again initializing array with its previous
            #elements so indexing won't be affected
            p=("${p[@]}")
            break
        fi
    done

    #if page was not in the array then we will increase page fault
    if [ $flag -eq 0 ]
    then
        ((fault++))
    fi

    #if there is overflow then we will remove last element
    if [ ${#p[@]} -gt $f ]
    then
        unset p[0]

        #After removing element again initializing array with its previous
        #elements so indexing won't be affected
        p=("${p[@]}")
    fi

    #printing array after the above operations
    echo ${p[@]}
done
echo "Total Number of Page Faults : $fault"