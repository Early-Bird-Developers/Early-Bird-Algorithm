class Solution {
    public int[] solution(int start_num, int end_num) {
        int len = end_num - (start_num - 1);
        int[] answer = new int[len];
        int cnt = 0;
        
        for(int i=start_num; i <= end_num; i++)
            answer[cnt++] = i;
        
        return answer;
    }
}
