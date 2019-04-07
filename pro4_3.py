def substr():
    str = input()
    sO = ''
    out = ''
    max = 1
    for i in range(len(str)):
        sO += str[i]
        for j in range(i + 1, len(str)):
            if ord(str[i]) > ord(str[j]):
                sO += str[j]
            else:
                break

        if max < len(sO):
            max = len(sO)
            out += s
        sO = ''
    print(out)


try:
    substr()
except:
    print('invalid')
