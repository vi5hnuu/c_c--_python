import collections
q=collections.deque()
q.append(10)
q.append(20)
q.append(30)
q.append(40)
# print(q.pop())
# print(q.pop())
# print(q.pop())
# print(q.pop())
print(q.popleft())
print(q.popleft())
print(q.popleft())
print(q.popleft())
print(q)