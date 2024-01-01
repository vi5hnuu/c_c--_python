import sys

eng='A B C D'
dev='न ग े प ल ह'
print(type(eng))
print(type(dev))
print(eng)
print(dev)

print(eng.encode('utf-8'))
print(eng.encode('utf-16'))
print(dev.encode('utf-8'))
print(dev.encode('utf-16'))

print(b'\xe0\xa4\xa8 \xe0\xa4\x97 \xe0\xa5\x87 \xe0\xa4\xaa \xe0\xa4\xb2 \xe0\xa4\xb9'.decode('utf-8'))
print(sys.stdin.encoding)