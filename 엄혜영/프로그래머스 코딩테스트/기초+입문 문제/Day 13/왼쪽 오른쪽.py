def solution(str_list):
    l,r = (100, 100)
    if 'l' in str_list:
        l = str_list.index('l')
    if 'r' in str_list:
        r = str_list.index('r')
    
    if r == l: return []
    if r > l: return str_list[:l]
    return str_list[r+1:]
