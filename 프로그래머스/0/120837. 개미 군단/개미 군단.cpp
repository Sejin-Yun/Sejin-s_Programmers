#include <string>
#include <vector>

using namespace std;

int solution(int hp) {
    int answer = (hp / 5) + ((hp % 5) / 3) + (((hp % 5) % 3) / 1);
    return answer;
}