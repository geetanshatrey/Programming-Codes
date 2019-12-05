class Circle():
    pi=3.14
    def __init__(self,radius=1):
        self.radius=radius
    def getCircumference(self):
        return self.radius*self.pi*2 
        #Here pi variable can also be called as Circle.pi as it is a class variable.

myCircle=Circle()
print("Circumference is : {} and Radius is: {}".format(myCircle.getCircumference(),myCircle.radius))
myNewCircle=Circle(5)
print("Circumference  of new circle is : {0:.2f} and Radius is: {1}".format(myNewCircle.getCircumference(),myNewCircle.radius))
