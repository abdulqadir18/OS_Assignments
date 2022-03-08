#!bin/bash
echo "enter string"
read s
len=`expr length "$s"`
if [ $len -lt 9 ]
then
  echo "less than 10"
else
  echo "greater than equal to 10"
fi