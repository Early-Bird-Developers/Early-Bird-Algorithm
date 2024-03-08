def solution(strArr):
    for i in range(len(strArr)):
        strArr[i].lower() 
        if i%2==0:
            strArr[i]= strArr[i].lower() 
        else:
            strArr[i]= strArr[i].upper()
    return strArr
