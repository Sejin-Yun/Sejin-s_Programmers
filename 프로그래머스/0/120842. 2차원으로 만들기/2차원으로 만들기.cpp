#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<int> num_list, int n) {
    vector<vector<int>> answer;
    vector<int> answer1;
    int flag = 0;  // n과 비교할 정수값 flag
    for(int i = 0; i < num_list.size(); i++)\
    {
        // 1차원 벡터 answer1에 숫자 추가
        answer1.push_back(num_list[i]);
        flag++;
        // flag와 n이 같으면 answer1 그대로 answer에 추가
        if(flag == n) 
        {
            answer.push_back(answer1);
            answer1.clear();
            flag = 0;
        }
    }
    return answer;
}