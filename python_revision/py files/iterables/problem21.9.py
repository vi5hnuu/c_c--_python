d={'rahul':{67,76,39},'sameer':{58,86,78},'rakesh':{59,70,81}}
lst=[(k,*v) for k,v in d.items()]
print(lst)

lst=[(k,*v) for k,v in sorted(d.items())]
print(lst)

for row in zip(*lst):
    print(row)
for row in zip(*lst):
    print(*row,sep='\t')
for row in zip(*((k,*v) for k,v in sorted(d.items()))):
    print(*row,sep='\t')


