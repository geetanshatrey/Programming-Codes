class Dog():

    def __init__(self,name):
        self.name=name
    def speak(self):
        print("I am a dog and I bark !")

class Cat():

    def __init__(self,name):
        self.name=name
    def speak(self):
        print("I am a cat and I meow !")

def speakPet(pet):
    pet.speak()
myDog=Dog("Felix")
myCat=Cat("Chow")
for pet in [myDog,myCat]:
    print(type(pet))
    print(type(pet.speak()))
    pet.speak()
print("Using Polymorphism !")
speakPet(myDog)
speakPet(myCat)

