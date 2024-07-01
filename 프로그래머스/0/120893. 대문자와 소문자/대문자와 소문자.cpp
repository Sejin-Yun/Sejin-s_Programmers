#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    string answer = "";
    
    for(char &str : my_string)
    {
        answer.push_back((str == toupper(str)) ? tolower(str) : toupper(str));
    }
    return answer;
}