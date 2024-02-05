import java.util.Arrays;

class Solution {
    public int[] solution(int[] emergency) {
        int[] answer = new int[emergency.length];
        int[] emrCopy = emergency.clone();
        Arrays.sort(emrCopy);
        
        int i = 0;
        for(int n : emergency) {
            for(int j=0; j < emergency.length; j++) {
                if(n == emrCopy[j]) answer[i++] = emrCopy.length - j;
            }
        }
        
        return answer;
    }
}
