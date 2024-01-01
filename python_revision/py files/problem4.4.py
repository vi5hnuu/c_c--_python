s1='Bring It On'
print(s1.upper())
print(s1.lower())
print(s1.capitalize())
print(s1.title())
print(s1.swapcase())

print(s1.find('I'))
print(s1.find('on'))
print(s1.replace('It','Him'))

s2=' Flanked by spaces on either side  '
print(s2.lstrip())
print(s2.rstrip())
print(s2.strip())

s3='c:\\users\\kanetkar\\documents'
print(s3.split('\\'))#list
print(s3.partition('\\'))#tuple
