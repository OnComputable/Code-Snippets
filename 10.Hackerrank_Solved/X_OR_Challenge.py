#https://www.hackerearth.com/practice/basic-programming/bit-manipulation/basics-of-bit-manipulation/practice-problems/algorithm/xor-challenge-2420f189/

#Write this program in C as Well.

import math

#Taking C as input
C = int(input())
#Here P is the highest power of 2 it can achieve that is below C
p = int(math.log(C,2))

#A is one less than the highest power of 2 that could be achieved through  c
A = int(pow(2,p)) - 1

#Getting B by XORing A with C :>
B = A^C

#printing A*B
print(A*B)
