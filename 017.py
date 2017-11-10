def cent(n):
	if n == 1000:
		return "onethousand"
	if n < 20:
		return ["","one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"][n]
	if n < 100:
		return ["twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"][n/10 - 2] + cent(n%10)
	ans = cent(n/100) + "hundred"
	if n % 100 != 0:
		ans +="and" + cent(n%100)
	return ans
