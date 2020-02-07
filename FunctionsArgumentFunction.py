def hello():
    return 'Hi Jose !'
def other(some_def_func):
    print('Other code runs here !')
    print(some_def_func())

print(hello())
other(hello)
