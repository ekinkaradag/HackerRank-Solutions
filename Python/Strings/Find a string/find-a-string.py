def count_substring(string, sub_string):
    count = 0
    for i in range(len(string)-len(sub_string)+1):
        if string[i:(len(sub_string)+i)] == sub_string:
            count = count + 1
    return count

if __name__ == '__main__':
    string = input().strip()
    sub_string = input().strip()
    
    count = count_substring(string, sub_string)
    print(count)