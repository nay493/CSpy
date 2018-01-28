#!/bin/bash

read -p "n=" n
#(( ${n}%2?echo "even":echo "odd" ))

#((${n}%2))&&echo "odd"||echo "even"
((n%2))&&echo "odd"||echo "even"
#$((n%2))&&echo "odd"||echo "even" --> ???

##No ternary operator in bash as in c; 

