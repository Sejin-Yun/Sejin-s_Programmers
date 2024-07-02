#include <string>
#include <vector>

using namespace std;

string solution(string rsp) {
    string answer = "";
    for(char &c : rsp)
    {
        switch(c)
        {
            case '2':
                answer.push_back('0');
                break;
            case '0':
                answer.push_back('5');
                break;
            case '5':
                answer.push_back('2');
                break;
        }
    }
    return answer;
}