def factor(n):
	if n in [1,2,3]:
		return [1]
	ans = list()
	for i in range(1, n + 1):
		if n%i == 0:
			ans.append(i)
	return ans[:len(ans)-1]

ans = 0
for i in range(2,10001):
	pair = reduce(lambda a,b: a+b, factor(i))
	if reduce(lambda a,b: a+b, factor(pair)) == i and i != pair:
		print (i,pair)
		ans+=i
print ans	
