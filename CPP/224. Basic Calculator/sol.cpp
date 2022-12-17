#include <bits/stdc++.h> 
using namespace std;

class Solution {
public:
    int calculate(string s) {
        stack<string> st;
        st.push("(");
        vector<string> expr;
        for(int i=0; i<s.length(); i++){
            if(isdigit(s[i])){
                int j=1;
                while(j<s.length() && isdigit(s[i+j])) j++;
                expr.push_back(s.substr(i,j));
                i+=j-1;
            }
            else if(s[i]!=' ') expr.push_back(s.substr(i,1));
            if(expr.size()) cout << expr.back() << endl;
        }
        expr.push_back(")");
        
        for(string c: expr){
            if(isdigit(c[0])){
                if(st.top()=="+"){
                    st.pop();
                    string op1 = st.top();
                    st.pop();
                    st.push(to_string(stoi(op1)+ stoi(c)));
                }
                else if(st.top()=="-"){
                    st.pop();
                    if(st.empty() || st.top()=="(") st.push(to_string(-stoi(c)));
                    else {
                        string op1 = st.top();
                        st.pop();
                        st.push(to_string(stoi(op1) - stoi(c)));
                    }
                }
                else st.push(c);
            }
            else if (c==")"){
                if(st.top()!="("){
                    string num = st.top();
                    st.pop();
                    st.pop();
                    if(st.empty() || st.top()=="(") st.push(num);
                    else if(st.top()=="+"){
                        st.pop();
                        string op1 = st.top();
                        st.pop();
                        st.push(to_string(stoi(op1)+ stoi(num)));
                    }
                    else if(st.top()=="-"){
                        st.pop();
                        if(st.empty() || st.top()=="(") st.push(to_string(-stoi(num)));
                        else {
                            string op1 = st.top();
                            st.pop();
                            st.push(to_string(stoi(op1) - stoi(num)));
                        }
                    }
                }
                else st.pop();
            }
            else st.push(c);            
        }

        return stoi(st.top());

        
    }
};