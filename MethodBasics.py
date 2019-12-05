class Dog():
    name='Tom'
    def bark(self,number):
        print("The dog's name is {} and the number is {} !".format(self.name,number))
        #Here the number is a variable of the method. Thus self.number is not wriiten.

my_dog=Dog()
my_dog.bark(5)
