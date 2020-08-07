if __name__ == '__main__':
    s = input()
    states = [False, False, False, False, False]
    for i in range(len(s)):
        if s[i].isalnum():
            states[0] = True
        if s[i].isalpha():
            states[1] = True
        if s[i].isdigit():
            states[2] = True
        if s[i].islower():
            states[3] = True
        if s[i].isupper():
            states[4] = True
    for i in range(len(states)):
        print(states[i])