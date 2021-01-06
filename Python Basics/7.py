total = 0
x = input("\nEnter the marks 1 : ")
total += int(x)
x = input("\nEnter the marks 2 : ")
total += int(x)
x = input("\nEnter the marks 3 : ")
total += int(x)
x = input("\nEnter the marks 4 : ")
total += int(x)
x = input("\nEnter the marks 5 : ")
total += int(x)
avg = total / 5
per = (total / 500) * 100
print("\nAverage Marks : " + str(avg))
print("\nPercentage : " + str(per))