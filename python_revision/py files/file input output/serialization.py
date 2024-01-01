import json

# f=open('serialiize.txt','w+')
# lst=[10,20,30,40,50]
# json.dump(lst,f)
# f.seek(0)
# g=json.load(f)
# print(g)
# f.close()

# f=open('serialiize.txt','w+')
# lst=(10,20,30,40,50)
# json.dump(lst,f)
# f.seek(0)
# g=json.load(f)
# print(tuple(g))
# f.close()

f=open('serialiize.txt','w+')
lst={10:11,20:21,30:31,40:41,50:51}
json.dump(lst,f)
f.seek(0)
g=json.load(f)
print(g)
f.close()