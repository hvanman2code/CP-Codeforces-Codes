x=0
n=int(input())
for i in range(0,n):
    c=input()
    if c=="X++":
        x+=1
    elif c=="++X":
        x+=1
    elif c=="X--":
        x=x-1
    elif c== "--X":
        x=x-1
print(x)