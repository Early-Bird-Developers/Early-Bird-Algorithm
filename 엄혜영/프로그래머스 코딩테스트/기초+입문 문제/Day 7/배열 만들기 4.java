import java.util.ArrayList;
import java.util.List;

class Solution {
    public int[] solution(int[] arr) {
        List<Integer> stk = new ArrayList<>();
        
        int i = 0;
        while(arr.length > i) {
            if(stk.size() == 0)
                stk.add(arr[i++]);
            else {
                if(stk.get(stk.size()-1) < arr[i])
                    stk.add(arr[i++]);
                else
                    stk.remove(stk.size()-1);
            }
        }
        
        int[] stk_arr = new int[stk.size()];
        
        for(i = 0; i < stk.size(); i++){
            stk_arr[i] = stk.get(i);
        }
        return stk_arr;
    }
}
