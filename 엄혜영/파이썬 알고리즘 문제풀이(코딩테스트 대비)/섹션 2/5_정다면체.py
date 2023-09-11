# input값을 int 타입으로 m, n에 각각 저장
m, n = map(int, input().split())

# 합의 값을 딕셔너리 자료형으로 저장하기 위해 빈 딕셔너리 생성
dict = {}

# 합이 딕셔너리에 이미 존재하면 value++
# 존재하지 않으면 key: 합의 값, value: 1
for i in range(0, m):
    for j in range(0, n):
        sum = (i+1) + (j+1)
        if sum in dict:
            dict[sum] += 1
        else:
            dict[sum] = 1

# value중 최댓값을 count_max에 저장
count_max = max(dict.values())

#### [old version] ####
## 딕셔너리의 모든 키값을 key_list에 저장
## 확률이 높은 합의 값을 저장하는 max_eliment
# key_list = dict.keys()
# max_eliment = []

## 키의 값이 count_max와 같으면 max_eliment에 키값 추가
# for i in key_list:
#     if dict[i] == count_max:
#         max_eliment.append(i)

## max_eliment 정렬(오름차순) 후 출력
# max_eliment.sort()
# for i in max_eliment:
#     print(i, end=" ")

#### [update] ####
for key, value in dict.items():
    if value == count_max:
        print(key, end=" ")
