#!/bin/bash

read -p "Enter the user name " user_name
read -p "Enter the password "  user_passwd

flag=0

if [ $user_name == "Doaa" ] && [ $user_passwd == "dodo@" ]  
	then
	echo "Welcome back Doaa!"


elif [ $user_name == "Sarah"  ] && [ $user_passwd == "sara@" ]
	then
	echo "Welcome back Sarah!"


else
	echo "Wrong User Name"
	flag=1
fi


if [ $flag == 1 ]
	then
	echo "Login FAILED"
else
	echo "Login Successfully!"
fi


exit 0
