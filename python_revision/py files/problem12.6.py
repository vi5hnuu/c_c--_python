lst=list('vishnu')
print(lst)
print('-'.join(lst))
print('-'.join('vishnu'))

words={'tub':1,'tuthbrush':2,'towel':3,'nailcutter':4}
d={''.join(alpha for alpha in k if alpha not in 'aAeEiIoOuU'):v for (k,v) in words.items()}
print(d)