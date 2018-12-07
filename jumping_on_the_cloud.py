

def jumping_on_clouds(ls):
    count=0
    i=0
    while(i<len(ls)):
        if i+2<len(ls):
            if ls[i+2]==1:
                i+=1
                count+=1
            else:
                i+=2
                count+=1
            
        elif i+1==len(ls)-1:
            if ls[i+1]==0:
                count+=1
                i+=1
        else:
            break
    print(count)


list1=[0,1,0,0,0]
jumping_on_clouds(list1)




