start,end,step=[int(x) for x in input('Enter the value for start end step :').split(' ')]
for n in range(start,end,step):
    print(f'{n:>5}{n**2:>7}{n**3:>8}')
print()
for n in range(start,end,step):
    print(f'{n:<5}{n**2:<7}{n**3:<8}')

for n in range(start,end,step):
    print('{0:<5}{1:<7}{2:<8}'.format(n,n**2,n**3))
