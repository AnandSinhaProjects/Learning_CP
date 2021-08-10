/*
Question
Pooja would like to withdraw X $US from an ATM. The cash machine will only accept the transaction if X is a multiple of 5, 
and Pooja's account balance has enough cash to perform the withdrawal transaction (including bank charges). 
For each successful withdrawal the bank charges 0.50 $US. 
Calculate Pooja's account balance after an attempted transaction.

Sample Input-

Example - Successful Transaction
Input:
30 120.00

Output:
89.50
Example - Incorrect Withdrawal Amount (not multiple of 5)
Input:
42 120.00

Output:
120.00
Example - Insufficient Funds
Input:
300 120.00

Output:
120.00

*/



#include <iostream>
using namespace std;

int main(){
    int aw;
    float at;
    cin>>aw>>at;
    if (aw%5==0 && (aw+0.5)<at{
        {
            at=at-aw-0.5;
            cout<<at;
        }
    }
    else {
       cout<<at;
    }
    return 0;
}