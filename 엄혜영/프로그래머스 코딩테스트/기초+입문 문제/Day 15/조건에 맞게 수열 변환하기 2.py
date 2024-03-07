def solution(arr):
    for i in arr:
        if i%2==0 and i>=50: break
        if i%2!=0 and i<50: break
        if arr.index(i)==len(arr)-1: return 0
    
    arr_pre = []
    cnt=0
    
    while(arr != arr_pre):
        arr_pre = arr.copy() # 0
        cnt+=1
        
        for i in range(len(arr)):
            if arr[i]%2==0 and arr[i]>=50:
                arr[i] /=2
                continue
            if arr[i]%2!=0 and arr[i]<50:
                arr[i] *=2 + 1
        
    
    return cnt
