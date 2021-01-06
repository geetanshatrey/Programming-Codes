x = input("\nEnter the side 1 for the triangle : ")
a = float(x)
x = input("\nEnter the side 2 for the triangle : ")
b = float(x)
x = input("\nEnter the side 3 for the triangle : ")
c = float(x)
p = (a + b + c) / 2
z = (p * ( p - a ) * ( p - b ) * ( p - c )) ** 0.5
print("\nArea of Triangle : ", z)