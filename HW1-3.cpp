/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <queue>

using namespace std;

int findTheWinner(int n, int k) {
    queue<int>q;
    for(int i=1;i<=n;i++)
        q.push(i);
    int temp=1;
    while(q.size()!=1)
    {
       if(temp==k)
       {
           q.pop();
           temp=1;
       }else{
           int x=q.front();
           q.push(x);
           temp++;
           q.pop();
       }
       
    }
    return q.front();
}

int main()
{
    int n,k;
    cout << "Input how many friend play the game:";
    cin >> n;
    cout << "Input k:";
    cin >> k;
    cout << "Winner:" << findTheWinner(n, k);
    return 0;
}
