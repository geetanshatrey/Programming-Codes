def askForInt():
   while True: 
        try:
            result=int(input("Please provide number :"))
        except:
            print("Not a number !")
            continue
        else:
            print("Yes! Thanks !")
            break
        finally:
            print("End of try/except.finally")
            print("Will always run !")

askForInt()
