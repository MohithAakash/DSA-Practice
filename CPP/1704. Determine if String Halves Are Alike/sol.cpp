#include <bits/stdc++.h> 
using namespace std;

class Solution {
public:
    bool halvesAreAlike(string s) {
        vector<char> vowels {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
        int vowelCount = 0;
        for(int i=0; i < s.length()/2; i++){
            if(find(vowels.begin(), vowels.end(), s[i]) != vowels.end()) {
                vowelCount++;
            }
        }
        for(int i=s.length()/2; i < s.length(); i++){
            if(find(vowels.begin(), vowels.end(), s[i]) != vowels.end()) {
                vowelCount--;
            }
        }
        return vowelCount == 0;
    } 
};