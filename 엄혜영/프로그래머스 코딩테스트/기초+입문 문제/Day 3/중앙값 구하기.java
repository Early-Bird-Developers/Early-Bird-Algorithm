import java.util.Arrays;

class Solution {
    public int solution(int[] array) {
        Arrays.sort(array);
        int answer = 0;
        return array[array.length / 2];
    }
}
