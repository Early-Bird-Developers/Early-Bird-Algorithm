#M과 N사이의 소수를 구하고, 소수들의 총합과 최소값을 구하라
M = int(input())
N = int(input())
sosu = []

for num in range(M, N+1):
    cnt = 0

    if num>1:
        for x in range(2, num):
            if num % x == 0:
                cnt += 1
                break
        if cnt == 0:
                sosu.append(num)

if len(sosu) > 0:
    print(sum(sosu))
    print(min(sosu))
else:
    print(-1)
