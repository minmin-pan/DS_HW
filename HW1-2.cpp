/******************************************************************************
Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.
*******************************************************************************/
#include <iostream>
#include <stack>

using namespace std;

int minAddToMakeValid(string s) {
        stack<int> st;
        char open='(',close=')';
        int needed=0;
        for(auto x:s){
            if(x==open){
                st.push(open);
            }else{
                if(!st.empty() && st.top()==open){
                    st.pop();
                }else{
                    needed++;
                }
            }
        }
        needed+=st.size();
        
        return needed;
    }

int main()
{
    string s;
    while(true){
        cout << "Input parenthese(if want to end please input 'end'):";
        cin >> s;
        if (s == "end")
            break;
        else{
            cout << "Output:" << minAddToMakeValid(s) << endl;
        }
    }
}
