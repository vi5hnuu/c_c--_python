# r,l,b=1.5678,10.5,12.66
# print(f'radius={r}')
# print(f'length={l}')
# print(f'bredth={b}')
#
# name=input('Enter name:');
# for n in name.split():
#     print(f'{n:10}')
#     print(f'{n:2}')

r,l,b=1.5678,10.5,12.66
name,age,salary='vishnu',20,120000

print('radius={} length {} bredth {}'.format(r,l,b))
print('name={} age={} salary={}'.format(name,age,salary))

print('radius={2} length={1} bredth={0}'.format(b,l,r))
print('name={0} age={1} salary={2}'.format(name,age,salary))

print('name={0:15} salary={1:10}'.format(name,salary))
print('name={:15} salary={:10}'.format(name,salary))
print('radius={0:10.2f}'.format(r))
print('radius={:10.2f}'.format(r))