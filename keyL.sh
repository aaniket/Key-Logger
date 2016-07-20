#!/bin/bash   
while true
do
	echo "In while"	
	showkey > /home/aniket/Desktop/keyLogger/logs.txt
	python /home/aniket/Desktop/keyLogger/parse.py 
done
