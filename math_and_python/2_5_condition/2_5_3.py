t = input()

if t == 'int':
    n1, n2 = int(input()), int(input())
    print('Empty Ints' if n1 == 0 and n2 == 0 else n1 + n2)
elif t == 'str':
    s = input()
    print('Empty String' if len(s) == 0 else s)
elif t == 'list':
    l = input().split()
    print('Empty List' if len(l) == 0 else l[-1])
else:
    print('Unknown type')