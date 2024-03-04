def solution(arr):
    indexList = list()
    if 2 not in arr:
        return [-1]
    
    for i in range(len(arr)):
        if arr[i] == 2:
            indexList.append(i)
    return arr[indexList[0]:indexList[-1]+1]
