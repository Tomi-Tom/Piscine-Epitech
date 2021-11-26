#!/bin/bash
cut -d ' ' -f 2 |  cut -d ':' -f 1 | sed -z 's/-/a/g' | grep ^$1 | wc -l | bc 
