import builtins
print(dir(builtins))
print(vars(builtins))

for (x,v) in vars(builtins).items():
        print(v)
