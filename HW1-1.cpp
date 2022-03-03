/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <limits.h>
#include <iostream>

using namespace std;

int maxProfit(int prices[],  int num) {
    int lsf = INT_MAX;
    int op = 0;
    int pist = 0;
    
    for(int i = 0; i < num; i++){
        if(prices[i] < lsf){
            lsf = prices[i];
        }
        pist = prices[i] - lsf;
        if(op < pist){
            op = pist;
        }
    }
    return op;
}

int main()
{
    int i;
    int num;
    cout << "type data number:";
    cin >> num;
    
    int prices2[num];
    for (i = 0; i < num; i++){
        cout << "price:";
        cin >> prices2[i];
    }
    for (i = 0; i < num; i++)
        printf("prices[%d] = %d\n", i, prices2[i]);
        
    printf("Output: %d",maxProfit(prices2, num));

    return 0;
}
