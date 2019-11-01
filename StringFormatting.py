_author_='Geetansh'

age=19
print("Python 2 has string formatting :")
print("My age is "+str(age)+" years")
print("My age is {0} years".format(age))
print("First Five Months: {0}, {1}, {2}, {3}, {4} ".format("January","February","March","April","May"))
print("My age is %d years" % age)
print("My age is %d %s and %d %s" %(age,"years",7,"months"))

for i in range(1,5):
	print("No: %2d and Squared: %4d and Cubed: %8d" %(i,i**2,i**3))

print("Pi is : %6f" %(22/7))

for i in range(1,5):
	print("No: {0:2} and Squared: {1:<4} and Cubed: {2:<4}" .format(i,i**2,i**3))

print("January:{1}, February:{0}, March:{1}, April:{2}".format(28,30,31))

for i in range(1,5):
	print("No: {} and Squared: {} and Cubed: {}" .format(i,i**2,i**3))
