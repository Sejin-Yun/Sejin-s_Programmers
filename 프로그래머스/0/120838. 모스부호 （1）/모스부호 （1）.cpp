#include <string>
#include <vector>
#include <map>
#include <sstream>

using namespace std;

map<string, char> mp;
string arr[26] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",
				  ".---","-.-",".-..","--","-.","---",".--.","--.-",".-.",
                  "...","-","..-","...-",".--","-..-","-.--","--.."};

string solution(string letter) {
    string answer = "";
    char c = 'a';
    string str = "";
    stringstream ss(letter);
    
    
    for(int i = 0; i < 26; i++)
        mp[arr[i]] = c + i;
    
    while(ss >> str)
        answer += mp[str];
    
    return answer;
}