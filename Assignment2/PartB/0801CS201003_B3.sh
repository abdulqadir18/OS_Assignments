#!/bin/sh
echo "enter a"
read a
echo "enter b"
read b
echo "enter c"
read c

d=`expr $a + $b`
d=`expr $d + $c`
e=`expr $a - $b`
e=`expr $e + $c`
f=`expr $a * $b`
f=`expr $f / $c`

echo "d : $d , e : $e , f : $f"