def count_alphabest_digits(s):
    d={'digits':0,'alphabets':0}
    for ch in s:
        if ch.isalpha():
            d['alphabets']+=1
        if ch.isdigit():
            d['digits']+=1
        else:
            pass
    return d

print(count_alphabest_digits('vishnu kumar got 100 is gate exam'))