#include <string>
#include <vector>

using namespace std;

int solution(int num, int k) {
    int answer = 0;
    string nTs = to_string(num);
    for(int i = 0; i < nTs.size(); i++)
    {
        if(nTs[i] - '0' == k)
        {
            answer = i+1;
            break;
        }
    }
    answer = (answer == 0) ? -1 : answer;
    return answer;
}