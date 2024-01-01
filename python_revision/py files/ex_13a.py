def count_lower_upper(s):
    dlu={'lower':0,'upper':0}
    for ch in s:
        if ch.islower():
            dlu['lower']+=1
        elif ch.isupper():
            dlu['upper']+=1
        else:
            pass
    return dlu

d=count_lower_upper('Jams bond')
print(d)