f = open("input1.txt")
o = open("input.txt", "w")
ls = f.readlines()
print(len(ls), file=o)
for l in ls:
    l = l.strip()
    a = l.split()
    print(len(a), l, file=o)
            