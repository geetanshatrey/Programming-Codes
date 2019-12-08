class Animal():
    def __init__(self,name):
        self.name=name
    def speak(self):
        raise NotImplementedError("Subclass must implement this abstract method")
        #Makes this class Abstract.

class Dog(Animal):
    def speak(self):
        return self.name + " says woof! "

class Cat(Animal):
    def speak(self):
        return self.name + " says meow! " 
mydog=Dog('Roger')
mycat=Cat('Susan')
print(mydog.speak())
print(mycat.speak())
