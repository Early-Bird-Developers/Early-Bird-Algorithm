# 문제 조건) digit_sum(x) 함수를 포함해 코드작성
# 문자열 x를 매개변수로 받으며, 문자열을 int형으로 쪼개 numb_list에 넣고 전체 합을 return
def digit_sum(x):
    numb_list = list(map(int, list(x)))
    numb_sum = sum(numb_list)
    return numb_sum

# 자연수를 공백 기준으로 나눠 decimal_list에 저장한다 (datatype: string)
count = int(input())
decimal_list = input().split()
result_list = []

#리스트의 자연수를 하나씩 추출해 digit_sum 함수에 넣어 결과값을 result_list에 삽입한다.
for i in decimal_list:
    result = digit_sum(i)
    result_list.append(result)

# result_list의 max값 저장, 해당 값의 index를 받아 출력한다.
max_decimal = max(result_list)
max_index = result_list.index(max_decimal)
print(decimal_list[max_index])
