#!/bin/bash

read -p "Enter the first operand : " op1
read -p "Enter the second operand : " op2
read -p "Enter the operation : " operation

case $operation in
"+")
	echo $op1 + $op2 = $[op1 + op2];;
"-")
	echo $op1 - $op2 = $[op1 - op2];;
"*")
	echo $op1 x $op2 = $[op1 * op2];;
"/")
	echo $op1 / $op2 = $[op1 / op2];;
esac

exit 0

