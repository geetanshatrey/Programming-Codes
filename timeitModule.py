import timeit

print(timeit.timeit('"-".join(str(n) for n in range(100))', number=10000))
#%timeit "-".join(str(n) for n in range(100))

#For Loop run 10000 times.
