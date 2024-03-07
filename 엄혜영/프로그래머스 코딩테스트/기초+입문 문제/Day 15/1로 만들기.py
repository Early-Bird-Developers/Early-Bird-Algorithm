def solution(num_list):
    cnt = 0
    for num in num_list:
        while True:
            if num==1: break
            cnt+=1
            if num%2==0:
                num /=2
            else:
                num = (num-1)/2
    
    return cnt
