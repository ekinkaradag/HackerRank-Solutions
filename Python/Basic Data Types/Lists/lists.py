if __name__ == '__main__':
    N = int(input())
    ll = []
    for i in range(N):
        inp = str(input())
        inp = inp.split()
        if inp[0] == "insert":
            ll.insert(int(inp[1]), int(inp[2]))
        elif inp[0] == "print":
            print(ll)
        elif inp[0] == "remove":
            ll.remove(int(inp[1]))
        elif inp[0] == "append":
            ll.append(int(inp[1]))
        elif inp[0] == "sort":
            ll.sort()
        elif inp[0] == "pop":
            ll.pop()
        elif inp[0] == "reverse":
            ll = list(reversed(ll))

