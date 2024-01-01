def freq(s):
    freq={}
    for words in s.split():
        freq[words]=freq.get(words,0)+1
    return  freq

sentence='it is true for all that that that'\
         'that that that refeere to is not the same that'\
         'that that that refere to'
d=freq(sentence)
print(d)
print(sorted(d))

for w in sorted(d):
    print('%s:%d'%(w,d[w]))