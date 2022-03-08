# !bin/bash
echo "enter percentage"
read p

if [ $p -gt 90 ]
then
  echo "A"
elif [ $p -gt 80 ]
then
  echo "B"
elif [ $p -gt 70 ]
then
  echo "C"
elif [ $p -gt 60 ]
then
  echo "D"
else
  echo "E"
fi