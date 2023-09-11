### 중요!!! ###
# 순회하며 소수를 구할 시 시간초과가 발생한다!
# 따라서, 에라토스테네스의 체를 사용하면 해당 문제점을 해결할 수 있다.
# 자세한건 링크 참고😉 https://velog.io/@hy0530/BOJ-1929-%EC%86%8C%EC%88%98-%EA%B5%AC%ED%95%98%EA%B8%B0

numb = int(input())
numb_list = []
count = 0
# 리스트 초기화
for i in range(numb+1):
    numb_list.append(i)

for i in range(2, numb+1):
    if(numb_list[i] == 0):
        continue

    for j in range(i*2, numb+1, i):
        numb_list[j] = 0
    count += 1

print(count)
