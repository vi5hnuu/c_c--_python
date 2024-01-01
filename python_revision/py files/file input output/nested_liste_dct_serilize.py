import json
# lofl=[10,[10,20,30],[50,60,70],80,90]
# f=open('nested.txt','w+')
# json.dump(lofl,f)
# f.seek(0)
# inlofl=json.load(f)
# print(inlofl)
# f.close()

info={'vishnu': {'age':18,'salary':0},'krishan':{'age':18,'salary':1500}}
f=open('dict_serilize.txt','w+')
json.dump(info,f)
f.seek(0)
e=json.load(f)
print(e)
