if __name__ == '__main__':
    n = int(input())
    student_marks = {}
    for _ in range(n):
        name, *line = input().split()
        scores = list(map(float, line))
        student_marks[name] = scores
    query_name = input()
    result = 0
    for i in range(len(student_marks[query_name])):
        result = result + student_marks[query_name][i]
    result = result / len(student_marks[query_name])
    print("%.2f" % result)