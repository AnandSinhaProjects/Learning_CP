#include <iostream>
using namespace std;

int main(){
    int a = 3;
    int max ;
    int b[3];
    for (int i=0; i<a; i++){
        cout<<"Enter numbers to compare no - "<<i<<endl;
        cin>>b[i]; 
    }

    if (b[0]>b[1]) {
        max=b[0];
        if (b[2]>b[0]){
            max = b[2];
        }
        else{
            cout<<max;
        }
    }
    else
    {
        max =b[1];
        if (b[2]>b[1]){
            max = b[2];
        }
        else{
            cout<<max;
        }
        
        
    }
    return 0;
}