def print_formatted(number):
    width = len('{:b}'.format(number))
    for i in range(1, number+1):
        print(str.rjust(str(i), width),\
            str.rjust('{:o}'.format(i), width),\
            str.rjust('{:X}'.format(i), width),\
            str.rjust('{:b}'.format(i), width))

if __name__ == '__main__':
    n = int(input())
    print_formatted(n)