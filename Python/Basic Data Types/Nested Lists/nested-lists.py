if __name__ == '__main__':
    name = []
    score = []
    for i in range(int(input())):
        name.append(input())
        score.append(float(input()))
    
    
    minimum = min(score)
    for _ in range(len(score)):
        if minimum in score:
            minIndex = score.index(minimum)
            del name[minIndex]
            del score[minIndex]
        else:
            break
    
    
    minimum = min(score)
    result = []

    for _ in range(len(score)):
        if minimum in score:
            minIndex = score.index(minimum)
            result.append(name[minIndex])
            del name[minIndex]
            del score[minIndex]
        else:
            break
    result.sort()
    for i in range(len(result)):
        print(result[i])