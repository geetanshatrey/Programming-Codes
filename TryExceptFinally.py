try:
    f= open('testfile','r')
    f.write("Write a test file")
except TypeError:
    print("There was a type error!")
except OSError:
    print("OS Error!!")
except:
    print("All other errors!")
finally:
    print("I always run")
