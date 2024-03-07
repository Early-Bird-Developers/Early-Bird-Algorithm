def solution(nums):
    monsterCount=len(nums)/2
    monsterTypeCount=len(set(nums))
    
    if monsterTypeCount>=monsterCount:return monsterCount
    return monsterTypeCount
