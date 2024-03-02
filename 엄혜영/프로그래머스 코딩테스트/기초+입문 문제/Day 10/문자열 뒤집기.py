def solution(my_string, s, e):
    reverseList = reversed(list(my_string[s:e+1]))
    answer = my_string[0:s] + "".join(reverseList) + my_string[e+1:len(my_string)]
    return answer
