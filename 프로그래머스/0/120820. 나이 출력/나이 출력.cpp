#include <string>
#include <vector>

using namespace std;

int solution(int age) {
    int answer = 2022 - (--age);
    return answer;
}