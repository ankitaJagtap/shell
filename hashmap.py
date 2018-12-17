






def hashmap(str1,str2):
    dict1={}
    str1=str1.split()
    str2=str2.split()
    for i in str2:
        dict1[i]=str2.count(i)
    print(dict1)
    for i in dict1:
        if dict1[i]==str1.count(i):
            continue
        else:
            return False
    return True









string="two times three is not four"
str1="two times  is four"
print(hashmap(string,str1))
