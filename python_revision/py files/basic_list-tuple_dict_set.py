lst=[10,20,30,40,"vishnu",60]
lst[4]="vishnu kumar"
tpl=(10,20,30,40,50,"vihsnu")
#tpl[5]="vihsnu kumar"
set={50,10,20,20,30,"vishnu","vishnu"} #check the order so index access not possible
dct={"name":"vishnu"}
print(lst[0],lst[4])
print(tpl[0],tpl[4])
print(set)
print(list(set))
print(tuple(set))
print(dct['name'])