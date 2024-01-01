d1={'mango':30,'guvava':20}
d2={'apple':7,'pinapple':50}
d3={'kiwi':90,'banana':35}
d4={}
for d in (d1,d2,d3):
    d4.update(d)
print(d4)

d5={**d1,**d2,**d3}
print(d5)