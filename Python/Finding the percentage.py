if __name__ == '__main__':
    n = int(input())
    student_marks = {}
    for _ in range(n):
        name, *line = input().split()
        scores = list(map(float, line))
        student_marks[name] = scores
    q = input()
    total=sum(student_marks[q])/3
    print("{:.2f}".format(total))
