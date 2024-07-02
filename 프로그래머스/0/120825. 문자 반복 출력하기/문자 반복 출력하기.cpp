#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int n) {
    string answer = "";
    for(char &c : my_string)
    {
        for(int i = 1; i <= n; i++)
            answer.push_back(c);
    }
    return answer;
}