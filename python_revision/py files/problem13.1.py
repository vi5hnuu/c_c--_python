def cal_sum_prod(x,y,z):
    ss=x+y+z;
    pp=x*y*z
    return (ss,pp)

a,b,c=[int(x) for x in input('Enter three numbers a b c :').split(' ')]
s,p=cal_sum_prod(a,b,c)
print(s,p)