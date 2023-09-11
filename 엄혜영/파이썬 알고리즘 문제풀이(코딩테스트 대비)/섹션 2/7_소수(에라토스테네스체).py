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