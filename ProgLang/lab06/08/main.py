a = 'Hello world'

b = a
c = a[:]

print(a, id(a))
print(b, id(b))
print(c, id(c))

print(a == b)
print(a == c)

print(a is b)
print(a is c)