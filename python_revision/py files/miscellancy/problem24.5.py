sm=45
assert sm!=0,'Oops,salary multiplier is 0'

class sample:
    pass

class newsample:
    pass

p=sample()
q=newsample()

# assert type(p)==type(q),'type mismatch'

num=45
lst=[10,20,30,40,50]
# assert num in lst,'num is missing in lst'

s1='A successful marriage requires falling in marriage many times...'
s2='Always with the same person.'
s=s1+s2
# assert len(s)<=45,'string  s is too long'

gs=30000+20000*15/100+20000*12/100
assert gs>=30000 and gs<=45000,'gross salery out of range.'