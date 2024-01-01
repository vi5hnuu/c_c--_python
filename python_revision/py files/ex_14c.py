z=0
def vowels(s,i=0):
    global z
    # print(id(z))
    if i<len(s):
        if s[i] in 'aeiou':
            z+=1
        i += 1
        vowels(s,i)
    return z

print(vowels('vishnu'))
