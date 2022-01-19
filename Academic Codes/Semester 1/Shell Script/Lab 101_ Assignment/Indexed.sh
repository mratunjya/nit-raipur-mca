echo "FILE SIZE : "     #Enter the file size
read a
file={$a}          #file variable to store the size of file entered by user
indexblock={$a}    #index block variable to store the block

main()             #this is the main functio
{
    for (( i=0; i<a; i++ ))
    do
        file[$i]=0
    done
    recurse1   #calling the recurse1 function
}
recurse1()         #this is recurse1 function
{
    echo "Enter the index block : "
    read indblock
    if (( ${file[$indblock]} != 1 ))
    then
        echo "Enter the number of blocks and number of files needed for the $indblock on the disk : "
        read n
    else
        echo "$indblock is already allocted"
        recurse1
    fi

    recurse2
}
recurse2()          #this is recurse2 function
{
    flag=0
    for (( i=0; i<$n; i++ ))
    do
        read indexblock[$i]
        if (( ${file[${indexblock[i]}]} == 0 ))
        then
            flag=$(($flag+1))
        fi
    done
    if (( $flag == $n ))
    then
        for (( j=0; j<$n; j++ ))
        do
            file[${indexblock[j]}]=1
        done
        echo -e "allocated\n"
        echo -e "file indexed\n"
        for (( k=0; k<$n; k++ ))
        do
            echo "$indblock------->${indexblock[$k]} : ${file[ ${indexblock[k]}]}"
        done
    else
        echo -e "File in the index is alredy allocated\n"
        echo -e "Enter another indexed file\n"
        recurse2
    fi
    echo -e "Do you Want to enter more files ?\n"
    echo -e "Enter 1 for Yes,Enter 0 for No : "
    read ch
    if (( $ch == 1 ))
    then
        recurse1   #calling recurse1 function
    else
        exit 0
    fi
}
main                       #calling main function
recurse1                   #calling recurse1 function
recurse2                   #calling recurse2 function