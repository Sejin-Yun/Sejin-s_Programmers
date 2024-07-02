#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> numbers, string direction) {
    vector<int> answer;
    
    if(direction == "left")
    {
        int a = numbers[0];
        for(int i = 0; i < numbers.size() - 1; i++)
        {
            answer.push_back(numbers[i+1]);           
        }
        answer.push_back(a);
    }
    else 
    {
        answer.push_back(numbers[numbers.size() - 1]);
        for(int i = 0; i < numbers.size() - 1; i++)
        {
            answer.push_back(numbers[i]);     
        }
    }
    
    return answer;
}