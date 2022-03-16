/******************************************************************************
Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
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
    
    
    cout << "總天數:";
    cin >> num;
    int prices2[num];
    cout << "每一天的價格：";
    for (i = 0; i < num; i++){
        cin >> prices2[i];
    }
    printf("獲利: %d元\n",maxProfit(prices2, num));
    printf("按任意键继续\n");
    
    return 0;
}
