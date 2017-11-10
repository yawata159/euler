def memoize(f):
	cache = {}
	def decorated_function(*args):
		if args in cache:
			return cache[args]
		else:
			cache[args] = f(*args)
		return cache[args]
	return decorated_function

def is_leap(y):
	return (y%400 == 0) or (y%4 == 0 and y%100 != 0)

# 0 - Monday
# 1 - Tuesday
# 2 - Wednesday
# 3 - Thursday
# 4 - Friday
# 5 - Saturday
# 6 - Sunday

@memoize
def first_day(y):
	return 0 if y == 1900 else ( (first_day(y-1) + 365 + is_leap(y-1)*1) % 7)

def first_sundays_in_year(y):
	ans = 0
	curr_first_day_month = first_day(y)
	for i in [0, 31, 28 + is_leap(y)*1, 31, 30, 31, 30, 31, 31, 30 ,31, 30]:
		curr_first_day_month += i
		curr_first_day_month %= 7
		if curr_first_day_month == 6:
			ans += 1
	return ans

print first_sundays_in_year(1914)
print reduce(lambda a,b: a+b, map(first_sundays_in_year, range(1901,2001)))

'''
ans = 0
cur_first = 0
for y in range(1901,2001):
	for i in [0, 31, 28 + is_leap(y)*1, 31, 30, 31, 30, 31, 31, 30, 31, 30]:
		cur_first = (cur_first + i) % 7
		if cur_first == 6:
			ans += 1
	cur_first = (cur_first + 31) % 7
print ans
'''
