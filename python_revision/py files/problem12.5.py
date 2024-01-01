s1='dreams may change, but friends are forever'
s2=[''.join(w.capitalize() for w in s1.split(' '))]
s3=s2[0]
print(s3)
print(s2)
print(*s2)