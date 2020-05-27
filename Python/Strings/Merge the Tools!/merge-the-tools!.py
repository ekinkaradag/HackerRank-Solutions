def merge_the_tools(string, k):
    
    for i in range(0, len(string), k):
        occured=[]
        for j in range(i, i+k):
            if string[j] not in occured:
                occured.append(string[j])
        print(''.join(occured))
    # your code goes here

if __name__ == '__main__':
    string, k = input(), int(input())
    merge_the_tools(string, k)