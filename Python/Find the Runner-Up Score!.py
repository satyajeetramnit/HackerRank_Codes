if __name__ == '__main__':
    n = int(input())
    arr = map(int, input().split())
    l=list(i for i in arr)
    # print(l)
    l=set(l)
    # print(l)
    l.remove(max(l))
    print(max(l))