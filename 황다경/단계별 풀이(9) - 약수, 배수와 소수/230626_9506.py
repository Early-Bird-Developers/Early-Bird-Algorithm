#완전수 구하기
while True:
    n_list = []
    
    n = int(input())
    if n == -1:
        break

    for i in range(1,n//2+1): #n의 자기 자신을 제외한 가장 큰 약수는 n을 2로 나눈 것
        if n % i == 0:
            n_list.append(i)

    if sum(n_list) == n:
            res = '+'.join(str(i) for i in n_list)
            print(n, '=', res)
    else:
            print(f'{n} is NOT perfect.') 
