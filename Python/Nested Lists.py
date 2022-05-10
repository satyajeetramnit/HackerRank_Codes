if __name__ == '__main__':
    s=[]
    m1=101
    m2=101
    n=int(input())
    for i in range(n):
        name = input()
        score = float(input())
        s.append([])
        s[i].append(name)
        s[i].append(score)
        if m1>score:
            m2=m1
            m1=score;
        elif score<m2 and score!=m1:
            m2=score
        
    # print(s)
    # print(m)
    ans=[]
    s.sort(key=lambda x: x[0])
    # print(s)
    for i in range(n):
        if float(s[i][1])==m2:
            ans.append(s[i][0])
    for i in ans:
        print(i)
