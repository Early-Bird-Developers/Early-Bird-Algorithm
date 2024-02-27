def solution(my_strings, parts):
    answer = ''
    j = 0
    
    for i in parts:
        answer += my_strings[j][i[0]:(i[1] + 1)]
        j += 1
    
    return answer
