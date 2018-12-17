



def left_rotate(ls,n):
    list1=ls[:n]
    ls=ls[n:]
    ls=ls+list1
    print(ls)


def rotate(ls,n):
    for j in range(n):

        start=ls[0]
        for i in range(len(ls)-1):
            ls[i]=ls[i+1]
        ls[-1]=start
        print(ls)

def left_to(ls,n):
    list1=[]
    l = [0 for i in range(len(ls))]

    for i in range(n,len(ls)):
        list1.append(ls[i])
        l[i-n] = ls[i]
    for i in range(n):   
        list1.append(ls[i])
        l[n+i] = ls[i]
    print(list1)
    print(l)
    
def left_rotation(ls,n):
    print(ls[n:]+ls[:n])






list1=[6,8,7,3,5]
k=2
#left_rotation(list1,k)
#left_rotate(list1,k)
#rotate(list1,k)
left_to(list1,k)
