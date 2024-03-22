import os.path 
import sys 

if os.path.exists('input1.txt'):
	sys.stdin = open('input1.txt','r') 
	sys.stdout = open('output1.txt','w') 




def sol():
	n = int(input()) 
	arr = list(map(int,input().split()))
	arr.sort()
	m = ((n+1)//2) -1
	value = arr[m] 
	cnt = 0
	for i in range(m,n):
		if value+1>arr[i]:
			cnt = cnt+1
	print(cnt)
	
	
	

for _ in range(int(input())):
	sol()