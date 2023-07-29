#include <iostream>
#include <stack>
using namespace std;

string reverseStringWordWise(string input)
{
    //Write your code here
    stack<string> s;
    string temp ="";

    for(int i=0; i<input.length(); i++){
        if(input[i]==' '){
            s.push(temp);
            temp="";
        }else{
            temp+=input[i];
        }
    }
    s.push(temp);
    input="";

    while(!s.empty()){
        input.append(s.top());
        input.append(" ");
        s.pop();
    }

    return input;
}

int main()
{
    string s;
    getline(cin, s);
    string ans = reverseStringWordWise(s);
    cout << ans << endl;
}