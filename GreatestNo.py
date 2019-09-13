print "Enter 3 numbers :"
a=int(input())
b=int(input())
c=int(input())
if a>b:
        if a>c:
            print "Greatest No : a : ",a
        elif a==c:
            print "Greatest No : a&c are equal : ",a
        else:
            print "Greatest No : c : ",c
    
elif b>a:
        if b>c:
            print "Greatest No : b : ",b
        elif b==c:
            print "Greatest No : b&c are equal : ",b
        else:
            print "Greatest No : c : ",c
else:
        if b>c:
            print "Greatest No : a&b are equal : ",a
        elif b==c:
            print "Greatest No : a&b&c are equal : ",b
        else:
            print "Greatest No : c : ",c
 
