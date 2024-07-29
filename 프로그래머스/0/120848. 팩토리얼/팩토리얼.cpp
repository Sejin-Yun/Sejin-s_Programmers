#include <string>
#include <vector>

using namespace std;

int factorial(int a)
{
    int num = 1;
    for(int i = a; i > 0; i--)
        num *= i;
    return num;
}

int solution(int n) {
    int answer = 0;
    
    for(int i = 1; i < 11; i++)
    {
        if(factorial(i) <= n)
            answer = i;
    }
    
    return answer;
}