fm=open('master.txt','r')
mdata=fm.readline()

ft=open('tranc.txt','r')
while True:
    trec=ft.readline()
    if trec=='':
        break
    tfields=trec.split()

    if len(tfields)==2:
        count=0
        for record in mdata:
            mfields=record.split()
            if tfields[0]==mfields[0]:
                break
            count+=1
        del(mdata[count])
    if len(tfields)==3:
        mdata.append(tfields[0]+' '+tfields[1]+'\n')
sdata=sorted(mdata)
fp=open('processed.txt','w')
for item in sdata:
    print(item)
    item=item.split()
    rec=item[0]+' '+item[1]+'\n'
    fp.write(rec)

fm.close()
ft.close()
fp.close()

