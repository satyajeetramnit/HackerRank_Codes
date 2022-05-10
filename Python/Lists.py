if __name__ == '__main__':
    N = int(input())
    ans=[]
    for i in range(N):
        x=input().split()
        if x[0]=="insert":
            ans.insert(int(x[1]),int(x[2]))
        elif x[0]=="print":
            print(ans)
        elif x[0]=="remove":
            ans.remove(int(x[1]))
        elif x[0]=="append":
            ans.append(int(x[1]))
        elif x[0]=="sort":
            ans.sort()
        elif x[0]=="pop":
            ans.pop()
        else:
            ans.reverse()