def minion_game(string):
    # your code goes here
    vowels = 'aeiou'.upper()
    kevin = sum(len(string)-i for i in range(len(string)) if string[i] in vowels)
    stuart = len(string)*(len(string) + 1)/2 - kevin
    if kevin == stuart:
        print('Draw')
    elif kevin > stuart:
        print("Kevin", int(kevin))
    else:
        print("Stuart", int(stuart))

if __name__ == '__main__':
    s = input()
    minion_game(s)