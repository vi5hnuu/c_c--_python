prince={'bottles':30,'tiffin':100,'bag':400,'bicycle':2000}
stock={'bottles':10,'tiffin':8,'bag':1,'bicycle':5}
total=0

for key in prince:
    value=prince[key]*stock[key]
    total+=value
print(total)