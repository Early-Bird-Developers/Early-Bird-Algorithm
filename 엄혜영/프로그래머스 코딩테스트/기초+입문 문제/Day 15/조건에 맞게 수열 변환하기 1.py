def solution(arr):
    for i in range(len(arr)):
        if arr[i]%2==0:
            if arr[i]>=50:
                arr[i] /= 2
        else:
            if arr[i]<50:
                arr[i] *= 2
    return arr
