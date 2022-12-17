#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'isValid' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string isValid(string s) {
    unordered_map<char, int> freq;
    for(auto &ch: s) {
        freq[ch]++; 
    }
    unordered_map<int, int> ff;
    for(auto [x,y]: freq){ 
        ff[y]++;
        if(ff.size()>2) return "NO";
    }
    // cout << (ff.begin())->second;
    // cout << (++ff.begin())->second;
    if(ff.size()==2){
        if((ff.begin()->second!=1 && (++ff.begin())->second!=1) || (abs(ff.begin()->first-(++ff.begin())->first)!=1)) 
            return "NO";        
    }
    return "YES";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = isValid(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
