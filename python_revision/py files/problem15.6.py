d={'x':500,'y':5874,'z':560}

# key_max=max(d.keys())
# key_max=max(d.keys(),key=(lambda k:d[k]))
key_max=min(d.keys(),key=(lambda k:d[k]))
print(key_max)
print(d[key_max])