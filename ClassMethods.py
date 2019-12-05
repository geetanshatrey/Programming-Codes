class Dog():
    species= 'Mammal'
    
    #__init__ gets called automatically.
    def __init__(self,breed,name,spots):
        self.breed=breed
        self.name=name
        self.spots=spots
    
    #Method inside of a class.
    def printall(self):
        print 'Species:',self.species 
        print "Breed:",self.breed,'\nName:',self.name,'\nSpots:',self.spots

#Object created.
my_dog=Dog(breed='Lab',name='Tommy',spots=True)
my_dog.printall()
