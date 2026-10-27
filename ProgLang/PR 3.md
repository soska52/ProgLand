### Задача 1 – Первый класс
```python
n = int(input())
k = (n + 24) // 25
a = n // k
print(k, a)
```

### Задача 2 – Двоичная запись
```python
t = int(input())

for i in range(t):
    n = int(input())
    p, q = map(int, input().split())
    s = ""

    for j in range(n):
        p *= 2
        if p >= q:
            s += "1"
            p -= q
        else:
            s += "0"

    print("0." + s)
```

### Задача 3 – Сравнение
```python
t = int(input())

otvet = []

for i in range(t):
    a, b, c, d, e, f, g, h = map(int, input().split())

    x = (a * d + c * b) * f * h
    y = (e * h + g * f) * b * d

    if x < y:
        otvet.append(-1)
    elif x > y:
        otvet.append(1)
    else:
        otvet.append(0)

print(*otvet)
```
















