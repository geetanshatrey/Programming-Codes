class Animal():
    def __init__(self):
        print("Animal Created !")
    def whoAmI(self):
        print("I am an animal !")
    def eat(self):
        print("I am eating !")

class Dog(Animal):
    def __init__(self):
        Animal.__init__(self)
        print("Dog Created !")
    def bark(self):
        print("I am a dog and I bark !")
    def whoAmI(self):
        print("I am a dog !")

myDog=Dog()
myDog.eat()
myDog.bark()
myDog.whoAmI() #Overriding in the derived class. 
