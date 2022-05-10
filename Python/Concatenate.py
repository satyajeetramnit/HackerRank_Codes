import numpy
l=list(map(int, input().split()))
n=l[0]
m=l[1]
p=l[2]
nlist=[]
mlist=[]
for i in range(n):
    nlist.append([])
    x=list(map(int, input().split()))
    nlist[i].append(x[0])
    nlist[i].append(x[1])
for i in range(m):
    mlist.append([])
    x=list(map(int, input().split()))
    mlist[i].append(x[0])
    mlist[i].append(x[1])

print(numpy.concatenate((nlist,mlist),axis = 0))

# P, N, M = map(int,input().split())
# A = numpy.array([input().split() for _ in range(P)],int)
# B = numpy.array([input().split() for _ in range(N)],int)
# print(numpy.concatenate((A, B), axis = 0))