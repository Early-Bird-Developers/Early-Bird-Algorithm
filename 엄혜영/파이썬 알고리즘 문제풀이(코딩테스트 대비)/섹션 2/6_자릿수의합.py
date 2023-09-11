def digit_sum(x):
    numb_list = list(map(int, list(x)))
    numb_sum = sum(numb_list)
    return numb_sum

count = int(input())
decimal_list = input().split()
result_list = []

for i in decimal_list:
    result = digit_sum(i)
    result_list.append(result)

max_decimal = max(result_list)
max_index = result_list.index(max_decimal)
print(decimal_list[max_index])