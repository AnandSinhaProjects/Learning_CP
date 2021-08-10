/* You are given a list of N integers and you need to reverse it and print the reversed list in a new line.

Input:
First-line will contain the number N.
Second line will contain N space-separated integers.
Output:
Print the reversed list in a single line.

Constraints
1≤N,Ai≤105
Sample Input 1:
4
1 3 2 4
Sample Output 1:
4 2 3 1
Sample Input 2:
2
9 8
Sample Output 2:
8 9
EXPLANATION:
In the first example, the reverse of the [1,3,2,4] is [4,2,3,1].
In the second example, the reverse of [9,8] is [8,9]. */

/* TIME TAKEN - 02:52.41 (MM:SS.ms)*/

#include <iostream>

using namespace std;

int main(){
    int a;
    cin>>a;
    int l[a];
    for (int i=0; i<a; i++){
        cin>>l[i];
    }
    for (int j=a-1; j>=0; j--){
        cout<<l[j]<<" ";
    }
    return 0;
}