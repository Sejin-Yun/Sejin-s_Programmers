using System;

public class Solution {
    public int solution(int[] array) {
        int maxEle = 0;
        int count = 0;
        
        int lenArr = array.Length;
        
        int answer = 0;
        int maxCount = 0;
        
        for (int i = 0; i < lenArr; i++)
        {
            if(array[i] > maxEle)
            {
                maxEle = array[i];
            }
        }
    
        int[] newArr = new int[maxEle + 1];
        for (int i = 0; i < lenArr; i++)
        {
            newArr[array[i]]++;
        }

        int lenNew = newArr.Length;
        for (int i = 0; i < lenNew; i++)
        {
            if (maxCount < newArr[i])
            {
                maxCount = newArr[i];
                answer = i;
            }
        }

        for (int i = 0; i < lenNew; i++)
        {
            if (maxCount == newArr[i])
            {
                count++;
            }
        }

        if (count > 1)
        {
            answer = -1;
        }
        return answer;
    }
}