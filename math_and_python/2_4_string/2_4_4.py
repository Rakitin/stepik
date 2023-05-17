# s = "['mix', 'extra', '', 'x-files', 'xyz', 'xapple', 'apple']"
s = input()
L = s[1:-1].replace("'", '').replace(' ', '').split(',')
print(L)