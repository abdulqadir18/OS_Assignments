#!/bin/sh
echo "no. of elements:"
read n
sum=0
i=1
while [ $i -le $n ]
do
  read num
  sum=$((sum+num))
  i=$((i+1))
done
avg=$((sum/n))
echo $avg