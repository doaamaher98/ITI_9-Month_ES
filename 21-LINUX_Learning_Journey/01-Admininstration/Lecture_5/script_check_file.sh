#!/bin/bash

echo "This script Checks an existance of a file"

echo "Checking ..."

if [ -f dodo.txt ]
then
	echo "File Exists!"
else
	echo "File doesn't exist"
fi

echo "Thank you"

exit 0
