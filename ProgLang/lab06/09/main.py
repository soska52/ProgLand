n = 1
for c in "abcdefghijklmnopqrstuvwxyz":
    for i in range(100):
        name = c + str(i)
        globals()[name] = n
        n += 1

print(a0)
print(a99)
print(b0)
print(z99)