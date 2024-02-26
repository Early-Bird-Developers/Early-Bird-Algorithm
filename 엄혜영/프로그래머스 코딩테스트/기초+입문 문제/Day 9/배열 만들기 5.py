def solution(intStrs, k, s, l):
    answer = []
    for i in intStrs:
        slicingList = int(i[s:s+l])

        if slicingList > k:
            answer.append(slicingList)
    
    return answer
