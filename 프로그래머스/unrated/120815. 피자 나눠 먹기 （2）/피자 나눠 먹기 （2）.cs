using System;

public class Solution {
    public int solution(int n) {
        int pan = 0;
        for(int i=1; i<=n; i++){
            if(6*i%n==0){
                pan = i;
                break;
            }
        }
        return pan;
    }
}