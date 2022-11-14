import sys
import math
import bisect
from sys import stdin,stdout
from math import gcd,floor,sqrt,log
from collections import defaultdict as dd
from bisect import bisect_left as bl,bisect_right as br

sys.setrecursionlimit(100000000)

inp    =lambda: int(input())
strng  =lambda: input().strip()
jn     =lambda x,l: x.join(map(str,l))
strl   =lambda: list(input().strip())
mul    =lambda: map(int,input().strip().split())
mulf   =lambda: map(float,input().strip().split())
seq    =lambda: list(map(int,input().strip().split()))

ceil   =lambda x: int(x) if(x==int(x)) else int(x)+1
ceildiv=lambda x,d: x//d if(x%d==0) else x//d+1

flush  =lambda: stdout.flush()
stdstr =lambda: stdin.readline()
stdint =lambda: int(stdin.readline())
stdpr  =lambda x: stdout.write(str(x))



#---------------------- USER DEFINED INPUT FUNCTIONS ----------------------#
def inp():
    return(int(input()))
def inlt():
    return(list(map(int,input().split())))
def insr():
    return(input().strip())
def invr():
    return(map(int,input().split()))

def solve():    
    # eof input int b,p,m
    while True:
        try:
            b= inp()
            p=inp()
            m=inp()
            print(b**p%m)
        except:
            break
        







            
if __name__=="__main__":
    solve()



# R = int(input("Enter the number of rows:"))
# C = int(input("Enter the number of columns:"))
  
# # Initialize matrix
# matrix = []
# print("Enter the entries rowwise:")
  
# # For user input
# for i in range(R):          # A for loop for row entries
#     a =[]
#     for j in range(C):      # A for loop for column entries
#          a.append(int(input()))
#     matrix.append(a)
  
# # For printing the matrix
# for i in range(R):
#     for j in range(C):
#         print(matrix[i][j], end = " ")
#     print()


""" one-liner logic to take input for rows and columns
mat = [[int(input()) for x in range (C)] for y in range(R)]

matrix = [[0 for j in range(n)] for i in range(m)]

matrix = [x[:] for x in [[0]*n]*m] """

# 2d input with numpy
# import numpy as np
  
# R = int(input("Enter the number of rows:"))
# C = int(input("Enter the number of columns:"))
  
  
# print("Enter the entries in a single line (separated by space): ")
  
# # User input of entries in a 
# # single line separated by space
# entries = list(map(int, input().split()))
  
# # For printing the matrix
# matrix = np.array(entries).reshape(R, C)
# print(matrix)


# matrix = []
# for i in range(0,m):
#     matrix.append([])
#     for j in range(0,n):
#         matrix[i].append(0)