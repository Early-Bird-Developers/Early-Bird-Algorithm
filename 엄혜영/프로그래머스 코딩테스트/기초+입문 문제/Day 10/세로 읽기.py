def solution(my_string, m, c):
    answer = ''
    for i in range(len(my_string)):
        if m != c and (i+1) % m == c:
            answer += my_string[i]
        if m == c and (i+1) % m == 0:
            answer += my_string[i]
    return answer
