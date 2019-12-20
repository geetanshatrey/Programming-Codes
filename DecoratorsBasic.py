def hello(name='Jose'):
    print('The hello() has been executed.')

    def greet():
        return '\t This is the greet() func inside hello!'
    print(greet())

    def welcome():
        return '\t This is welcome() inside hello '
    print(welcome())

    if name=='Jose':
        return greet
    else:
        return welcome
hello()
print('End of hello()')
my_new_func=hello('Jose')
print(my_new_func)