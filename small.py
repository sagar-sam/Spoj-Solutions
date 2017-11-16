
def GCD(a,b):
	if b==0:
		return a
	else:
		return GCD(b,a%b)


t=input()
i=0;
while i<t:
	n=input()
	mul=1
	for j in range(1,n+1):
		mul=(mul*j)/GCD(mul,j)
	mul=mul%1000000007
	print(mul)
	i=i+1
