# !/bin/sh

echo "Enter a Integer: "
read n
# first we count the occurence of each digit in the array
# and length of the integer
count=(0 0 0 0 0 0 0 0 0 0 0);
len=0
while ((n > 0))
do
    ((len = len + 1))
    digit=$((n%10))
    ((count[digit] = count[digit] + 1))
    n=$((n/10))
done
# Total total number of integer possible using digits
# Formula : (a + b + c + .. )! / a! * b! * c!....

#preComputation of factorial of integer in range [1,9]
fact=(1 1 1 1 1 1 1 1 1 1)
prod=1
for ((i = 1; i<=9; i++))
do
    ((prod *= i))
    ((fact[i]=prod))
done

# we need to find factorial of length also which is maybe >=9
TotalLengthFactorial=1
for ((i=1; i<=len; i++))
do
    ((TotalLengthFactorial *= i))
done

echo "Total possible integer possible : "
for ((i=0; i<=9; i++))
do
    ((TotalLengthFactorial /= fact[count[i]]))
done

echo "$TotalLengthFactorial"

#To print unique integers using digits of given n
# LOGIC:
#      The minimum integer possible : 10 ^ (total unique - 1)
#      The maximum integer possible : 10 ^ (total unique) - 1
# IDEA:
#      we traverse from minimum to maximum and check whether that
#      integer is possible or not

minimumDigit=0
TotalUniqueDigit=0
ok=0

for ((i=0; i<=9; i++))
do
    if ((count[i] >= 1))
    then
        (( TotalUniqueDigit += 1 ))
        if ((ok == 0))
        then
            (( minimumDigit = i ))
            (( ok = 1))
        fi
    fi
done

(( maxIntegerPossible = (10 ** TotalUniqueDigit) - 1 ))
(( minIntegerPossible = 10 ** (TotalUniqueDigit - 1) ))

echo "Printing each intger Possible having Unique digits : "

for ((i=minIntegerPossible; i<=maxIntegerPossible; i++))
do
    temp=(0 0 0 0 0 0 0 0 0 0)
    (( val = i ))
    good=0
    while ((val > 0))
    do
        digit=$((val%10))
        ((temp[digit] = temp[digit] + 1))
        if ((temp[digit] > 1 || (temp[digit] == 1 && count[digit]==0) ))
        then
            good=1;
            break
        fi
        val=$((val/10))
    done
    if ((good == 0))
    then
        echo "$i"
    fi
done
