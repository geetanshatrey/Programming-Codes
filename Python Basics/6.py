x = input("\nEnter the kilometer distance : ")
a = int(x)
b = int(a / 1000)
c = (float(a / 1000) - b) * 1000
c = int(c)
print("\nDistance is : " + str(b) + " Km and " + str(c) + " cmeter") 