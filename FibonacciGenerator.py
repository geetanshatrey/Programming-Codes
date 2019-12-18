def gen_fibon(n):
    a=0
    b=1
    for i in range(n):
        yield a
        a,b=b,a+b

for x in gen_fibon(10):
    print(x)
print('\n')
g=gen_fibon(5)
print(g)
print(next(g))
print(next(g)) 
#Generators remembers the previous thing and returns the next one.
s='hello'
print('\n')
s_iter=iter(s)
for letter in s:
    print(next(s_iter))
