#!/bin/bash
if [ $# = 0 ] 
then
	wc -l
else 
	cut -d ';' -f 3 |  grep -i $1 | wc -l
fi
