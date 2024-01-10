class Solution {
    public int solution(int[] num_list) {
        int answer = 0;
        String oddNumber = "";
        String evenNumber = "";
        
        for(int n : num_list){
            if(n % 2 == 0)
                evenNumber += "" + n;
            else
                oddNumber += "" + n;
        }
        
        answer = Integer.parseInt(oddNumber) + Integer.parseInt(evenNumber);
        return answer;
    }
}
