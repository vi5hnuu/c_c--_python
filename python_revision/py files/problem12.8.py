emp={
'A101':{'name':'ashish','age':30,'salary':21000},
'B102':{'name':'dinesh','age':25,'salary':1200},
'A103':{'name':'ramesh','age':28,'salary':11000},
'AD104':{'name':'akheel','age':30,'salary':18000},
'A105':{'name':'akash','age':32,'salary':20000},
}
d1={k:v for (k,v) in emp.items() if k.startswith('A')}
d2={k:v['name'] for (k,v) in emp.items()}
d3={k:v['age'] for (k,v) in emp.items()}
d4={k:v['age'] for (k,v) in emp.items() if v['age']>30}
d5={k:v['name'] for (k,v) in emp.items() if v['name'].startswith('a')}
d6={k:v['salary'] for (k,v) in emp.items() if v['salary']>1300 and v['salary']<20000}
print(d1)
print(d2)
print(d3)
print(d4)
print(d5)
print(d6)

