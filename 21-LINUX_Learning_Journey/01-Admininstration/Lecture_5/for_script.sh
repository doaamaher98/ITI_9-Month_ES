#!/bin/bash

files=`echo -n $(ls /home/doaa/Github/ITI_9-Month_ES/21-LINUX_Learning_Journey/01-Admininstration/Lecture_5/For_Example/*.txt)`

#set -x

for i in $files
do
	cp "$i" "$i".c
done

echo "Copying is successfully done!"

echo ""

echo "New files : `echo -n $(ls /home/doaa/Github/ITI_9-Month_ES/21-LINUX_Learning_Journey/01-Admininstration/Lecture_5/For_Example/*.c)`"

echo ""
exit 0
