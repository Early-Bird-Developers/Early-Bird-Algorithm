def solution(my_string):
    alphabet = 65
    answer = []
    
    for i in range(52):
        if alphabet == 91:
            alphabet = 97
        answer.append(my_string.count(chr(alphabet)))
        alphabet += 1
    
    return answer
