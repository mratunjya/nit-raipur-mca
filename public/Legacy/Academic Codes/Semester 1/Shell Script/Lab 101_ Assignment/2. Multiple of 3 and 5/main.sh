# !/bin/sh

echo "Enter the number"
read n

t=$n
sum=0
c=0
while((t!=0))
do
    c=`expr $t % 10`
    sum=`expr $sum + $c`
    t=`expr $t / 10`
done

last_digit=`expr $n % 10`
if(( $last_digit == 0 || $last_digit == 5 ))
then
    if((sum%3==0))
    then
        echo "Number is divisible by both 3 and 5"
    else
        echo "Number is not divisible by both 3 and 5"
    fi
else
    echo "Number is not divisible by both 3 and 5"
fi