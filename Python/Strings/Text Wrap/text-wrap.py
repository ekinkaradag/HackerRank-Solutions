import textwrap

def wrap(string, max_width):
    a = textwrap.wrap(string, max_width)
    s = ""
    for i in range(len(a)):
        s = s + a[i] + "\n"
    
    return s[:-1]

if __name__ == '__main__':
    string, max_width = input(), int(input())
    result = wrap(string, max_width)
    print(result)