#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(string my_string) {
    vector<int> answer;
    for(char &c : my_string)
    {
        if((int)c >= 48 && (int)c <= 57){
            answer.push_back((int)c - 48);
        }
    }
    sort(answer.begin(), answer.end());
    
    return answer;
}