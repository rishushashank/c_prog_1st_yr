t=int(input())
for _ in range(t):
    n=int(input())
    s=input()
    l=sorted(s)
    if n%2==0:
        for i in range(0,n,2):
            if (l[i]!=l[i+1]):
                cnt=1
                i=n
    if n%2!=0 and cnt==1:
        print("NO")
    else:
        print("YES")
