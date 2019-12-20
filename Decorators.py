def new_decorator(original_func):

    def wrap_func():
        print('Some extra code, before the original')
        original_func()
        print('Some extra code, after the original')

    return wrap_func

@new_decorator #Keyword.
def func_needs_decorator():
    print("I need decorator!")

#decorated_func=new_decorator(func_needs_decorator) --> Another way of doing this.
#decorated_func()
func_needs_decorator()
