#!/bin/bash

read -p "n=" n
sum_o=0
sum_e=0

for((i=0;i<=$n;i++))
do 
((i%2))&&((sum_e += i))||((sum_o += i))
done
echo "sum_e=${sum_e}"
echo "sum_o=${sum_o}"
