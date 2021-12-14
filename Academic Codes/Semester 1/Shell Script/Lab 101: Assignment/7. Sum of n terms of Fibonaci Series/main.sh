# !/bin/sh

echo "Enter the number of terms till where you want to calculate the sum of Fibonacci series"
read n

result=0

i=2
a=0
b=1
sum=0
echo "The Fibonacci series is"
echo $a
echo $b
while((i<n))
do
    c=`expr $a + $b`
    echo $c
    sum=`expr $sum + $c`
    a=$b
    b=$c
    i=`expr $i + 1`
done

echo "The sum till $n terms in fibonacci series is: `expr $sum + 1`"