def print_rangoli(size):
    # your code goes here
    alphabet = 'abcdefghijklmnopqrstuvwxyz'
    for i in range(size-1,-size,-1):
        line = '-'.join(alphabet[size-1:abs(i):-1]+alphabet[abs(i):size])
        print(line.center(4*size-3,'-'))

if __name__ == '__main__':
    n = int(input())
    print_rangoli(n)