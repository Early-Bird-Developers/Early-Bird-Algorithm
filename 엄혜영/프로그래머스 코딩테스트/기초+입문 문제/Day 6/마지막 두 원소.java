class Solution {
    public int[] solution(int[] num_list) {
        int len = num_list.length;
        int[] answer = new int[len + 1];
        
        if(num_list[len-1] > num_list[len-2])
            answer[len] = num_list[len-1] - num_list[len-2];
        else
            answer[len] = num_list[len-1] * 2;
        
        for(int i=0; i < len; i++) answer[i] = num_list[i];
        
        return answer;
    }
}
