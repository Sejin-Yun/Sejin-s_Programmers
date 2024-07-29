#include <string>
#include <vector>

using namespace std;

int solution(int balls, int share) {
    long answer = 1;
    for (int i = 1; i < share + 1; i++)
    {
        answer = (answer * balls) / i;
        balls--;
    }
    return answer;
}