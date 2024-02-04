class Solution {
    public int[] solution(int[] arr, int[][] queries) {
        int[] result = new int[queries.length];
        int min;
        
        for(int i=0; i < queries.length; i++) {
            min = 1000001;
            for(int j=queries[i][0]; j < queries[i][1]+1; j++)
                if(min > arr[j] && arr[j] > queries[i][2]) min = arr[j];
            
            if(min == 1000001)
                result[i] = -1;
            else
                result[i] = min;
        }
        
        return result;
    }
}
