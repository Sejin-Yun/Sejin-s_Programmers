#include <string>
#include <vector>

using namespace std;

int solution(int price) {
    int answer = 0;
    
    if(price >= 100000 && price <= 299990)
    {
        answer = (int)(price * 0.95);
    }
    else if(price >= 300000 && price <= 499990)
    {
        answer = (int)(price * 0.9);
    }
    else if(price >= 500000)
    {
        answer = (int)(price * 0.8);
    }
    else
    {
        answer = price;
    }
    
    return answer;
}