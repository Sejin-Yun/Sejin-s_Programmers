#include <string>
#include <vector>
#include <map>

using namespace std;

map<char, int> mp;

string solution(string s) {
    string answer = "";
    for(int i = 0; i < s.size(); i++)
        mp[s[i]]++;
    
    for(auto a : mp)
    {
        if(a.second == 1)
            answer += a.first;
    }
    return answer;
}