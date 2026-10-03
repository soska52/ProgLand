###Задание 1 Kisa and Osya was here
```a = input()
b = input()
print(a, "and", b, "was here")
```

###Задание 2 Три плюс два
```a, b, c = input().split()
d, e = input().split()
print(a,d,b,e,c, sep=",")
```

###Задание 3 Работа по письму
```s1, n1 = input().split()
s2, n2 = input().split()
s3, n3 = input().split()
vse = len(s1) * int(n1) + len(s2) * int(n2) + len(s3) * int(n3)
print(vse)
```

###Задание 4 Строка в рамке 
```a = input()
star = '*' * (len(a) + 4)
print(star)
print('*', a, '*')
print(star)
```

###Задание 5 Время на дистанции
```a1, b1, c1 = map(int, input().split())
a2, b2, c2 = map(int, input().split())
start = a1 * 3600 + b1 * 60 + c1
finish = a2 * 3600 + b2 * 60 + c2
print(finish- start)
```

###Задание 6 Обратный отсчет
```n = int(input())
if n==1:
    print("pusk")
else:
    print(n - 1)
```

###Задание 7 Дырка
```a, b, c = map(int, input().split())
if a == 3 and b == 3 and c == 3:
    print('hole')
else:
    print(a + b + c)
```

###Задание 8 Самое длинное слово
```a, b, c = input().split()
if len(a) > len(b) and len(a) > len(c):
    print(a)
elif len(c) > len(b) and len(c) > len(a):
    print(c)
else:
    print(b)
```


###Задание 9 Больше меньше
```a, b = map(int, input().split())
if a < b:
    print('<')
elif a == b:
    print('=')
else:
    print('>')
```

###Задание 10 Расстояние до отрезка на целочисленной прямой
```a, b, c = map(int, input().split())
left = min(a, b)
right = max(a, b)
if c > right:
    print(c - right)
elif c < left:
    print(left - c)
else:
    print(0)
```

###Задание 11 3x+1
```n = int(input())
while n!=1:
    print(n, end=' ')
    if n%2!=0:
        n = n * 3 + 1
    else:
        n = n//2
print(n)
```

###Задание 12 Ближайшая степень двойки
```n = int(input())
p = 1
while p * 2 <=n:
    p = p * 2
print(p)
```

###Задание 13 Номер в очереди
```cnt = 0
name = input()
while name != 'Petr':
    cnt = cnt + 1
    name = input()
print(cnt+1)
```