n=int(input())

for i in range(n):
    no_of_group=[]
    s=input().split('0')
    for group in s:
        if group != '':
            no_of_group.append(group)
    print(len(no_of_group))