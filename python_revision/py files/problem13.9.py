def create_sent1(sub,ver,obj):
    lst=[]
    for x in range(len(sub)):
        for y in range(len(ver)):
            for z in range(len(obj)):
                sent=sub[x]+' '+ver[y]+' '+obj[z]
                lst.append(sent)
    return lst

def create_sent2(sub,ver,obj):
    return [(s+' '+v+' '+o) for s in sub for v in ver for o in obj]

subj=['he','she']
ver=['loves','hates']
obj=['tv serials','netflix']

lst1=create_sent1(subj,ver ,obj)
for l in lst1:
    print(l)
print('-'*50)
lst2=create_sent2(subj,ver,obj)
for k in lst2:
    print(k)