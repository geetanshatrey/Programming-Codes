from collections import Counter
from collections import defaultdict
from collections import OrderedDict
l=[1,1,1,1,1,2,2,2,4,4,4,6,6,7,7,7,7,7]
print(Counter(l))
s='agdsdgsfgrgdgdg'
print(Counter(s))
s='Hi how many in words are are there in this sentence.'
word=s.split()
print(Counter(word))
c=Counter(word)
print(c.most_common(2))
print("\n")

d=defaultdict(lambda : 0)
print(d['one'])
d['two']=2
for item in d:
    print(item)
print(d['two'])
print("\n")

d1=OrderedDict()
d1['a']='A'
d1['b']='B'
d2=OrderedDict()
d2['b']='B'
d2['a']='A'
print(d1==d2)
