# your code goes here
def solve(tfun,price,fun,n):
	memo=[[0 for x in range(tfun+1)] for x in range(n+1)]
	for i in range(n+1):
		for j in range(tfun+1):
			if i==0 or j==0:
				memo[i][j]=0;
			elif price[i-1]<=j:
				memo[i][j]=max(fun[i-1]+memo[i-1][j-price[i-1]],memo[i-1][j])
			else:
				memo[i][j]=memo[i-1][j]

	ans1=memo[n][tfun]
	#print(ans1)
	ans=0;
	for i in range(tfun+1):
		if memo[n][i]==memo[n][tfun]:
			ans=i
			break
	return (ans,ans1)
		
while True:
	try:
		mn,n=map(int,input().split())
	except:
		#print()
		mn,n=map(int,input().split())
	if mn==0 and n==0:
		break
	price=list()
	fun=list()
	for _ in range(n):
		tmp1,tmp2=map(int,input().split())
		price.append(tmp1)
		fun.append(tmp2)
	ans=solve(mn,price,fun,len(fun))
	print(ans[0],ans[1])