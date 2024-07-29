#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    string answer = "";
    for(int i = 0; i < my_string.size(); i++)
    {
        int exist = 0;
        for(int j = 0; j < answer.size(); j++)
        {
            if(my_string[i] == answer[j])
                exist++;
        }
        if(exist == 0)
            answer += my_string[i];
    }
    return answer;
}