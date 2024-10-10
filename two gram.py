def most_frequent(lst):
    return max(set(lst), key=lst.count)


a=int(input())
b=input()
l=[]
for i in range(0,a-1):
    c=b[i]+b[i+1]
    l.append(c)


print(most_frequent(l))

