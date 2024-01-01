def length(s):
    if s:
        return 1+length(s[1:])
    else :
        return 0

print(length('vishnu kumar'))