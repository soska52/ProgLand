### Задача 1 – Маршрутка
```python
n = int(input())
ueh = n // 15 * 15
ost = n - ueh
print (ueh, ost)
```

### Задача 2 – Сумма половин
```python
n = input()
k = len(n) // 2
first = int(n[:k])
second = int(n[k:])
print(first + second)
```

### Задача 3 – Жажда
```python
n = int(input())
woter = n / 3
print(f"{woter:.3f}")
```

### Задача 4 – Рубли и копейки
```python
price = float(input())
rub = int(price)
kop = round((price - rub) * 100)
print(rub, "rub", kop, "kop")
```

### Задача 5 – Отчет
```python
n, m, c, k = map(int, input().split())
a = n * m - k
b = (a + 199) // 200
print(b * c)
```

### Задача 6 – Подарки
```python
n, m, k = map(int, input().split())
vsk = n * m
box = (vsk + k - 1) // k
print(box)
```

### Задача 7 – Датчик пульса
```python
n, t = input().split()
n = int(n)
t = float(t)
hit = n * 60 / t
print(int(hit) if hit == int(hit) else int(hit) + 1)
```

### Задача 8 – Точки на прямой
```python
import math
x, y = map(float, input().split())
a = math.ceil(x)
b = math.floor(y)
print(b - a + 1)
```


### Задача 9 – Буквы и цифры
```python
s = input()
sum = 0
for i in s:
    if i >= '0' and i <= '9':
        sum += int(i)
print(sum)
```

### Задача 10 – Скобки в зазеркалье
```python
s = input()
a = ""
for i in s:
    if i == '(':
        a = ')' + a
    else:
        a = '(' + a
print(a)
```

### Задача 12 – Минимальные делители
```python
s = input().split()
for i in s:                                                                 
    n = int(i)
    a = 2
    while n % a != 0:
        a += 1
    print(a, end=" ")
```

### Задача 13 – Сумма делителей
```python
n = int(input())
sum = 0
for i in range(1, n):
    if n % i == 0:
        sum += i
print(sum)
```

### Задача 14 – Игра в пробке
```python
n = int(input())
masha = 0
dasha = 0
for i in range(n):
    num = int(input())
    if num % 3 == 0:
        masha += 2
    else:
        dasha += 1
print(str(masha) + ":" + str(dasha))
```

### Задача 15 – Прибыль
```python
n = int(input())
allp = 0
for i in range(n):
    stoimost, zatraty = map(int, input().split())
    p = stoimost - zatraty
    if p > 0:
        allp += p
print(allp)
```