def ispangram(s):
    alpha=set('abcdefghijklmnopqrstuvwxyz')
    return set(s.lower()).issuperset(alpha)

print(ispangram('the quick brown fox jumps over the lazy dog'))
print(ispangram('crazy fredrick bought many very exquisite opaljewls'))
print(ispangram('crazy'))