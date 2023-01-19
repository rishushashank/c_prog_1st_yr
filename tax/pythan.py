import re

fname = input('Enter File name :')

handle = open(fname)

sum=0

count = 0

for line in handle:

	f = re.findall('[0-9]+',line)

	for num in f:

		if num >= [0]:

			count = count + 1
			sum = sum + int(num)

print ('There are',count,'values with a sum =',sum)
