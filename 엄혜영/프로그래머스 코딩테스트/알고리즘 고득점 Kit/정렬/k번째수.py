def solution(array, commands):
    answer = []
    
    for com in commands:
        sortedArray = array[com[0]-1:com[1]]
        sortedArray.sort()
        answer.append(sortedArray[com[2]-1])
    
    return answer
