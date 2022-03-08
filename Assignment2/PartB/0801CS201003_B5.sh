#!/bin/bash
echo "enter three no.s"
read a b c
if [ $a -ge $b -a $a -ge $c ]
then
  echo $a
elif [ $b -ge $a -a $b -ge $c ]
then
  echo $b
else
  echo $c
fi