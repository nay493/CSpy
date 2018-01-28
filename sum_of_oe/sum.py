#!/usr/bin/python

n=int(input("n="))
sum_o=0
sum_e=0
#n=n+1
#for i in range(0,n+1)
#for i in range(n+1)
for i in range(n+1):
  if(i%2==0):
    sum_e += i
  else:
    sum_o += i

print "sum_e=" +str(sum_e)
print "sum_o=" +str(sum_o)
