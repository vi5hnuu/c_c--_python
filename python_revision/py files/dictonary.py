course={'daa':'cs','aoa':'me','svy':'cs'}
for x in course:
    print(x)
for x,v in course.items():
    print(x,v)
for x in course.keys():
    print(x,course[x])
for x,y in enumerate(course):
    print(x,y)
for x,(v,z) in enumerate(course.items()):
    print(x,v,z)
for x,y in enumerate(course.keys()):
    print(x,y,course[y])
for x,y in enumerate(course.values()):
    print(x,y)
for x,y in enumerate(course.values()):
    print(x,y)