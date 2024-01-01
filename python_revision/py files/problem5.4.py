ms=input('Enter martial status :')
s=input('Enter sex :')
age=int(input('Enter age :'))
if((ms=='m') or (ms=='u' and s=='m' and age>30) or (ms=='u' and s=='f') and age>25):
    print('insured')
else :
    print('Not insured')