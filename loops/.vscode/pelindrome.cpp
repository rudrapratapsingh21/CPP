#include <iostream>
using namespace std;

int main() {
    int n, r, sum=0,temp;
    cout<<"enter n "<< endl;
    cin>>n;
    temp=n;
    while(n>0){
        r=n%10;
        sum=(sum*10)+r;
        n=n/10;
             }
        if (temp==sum)
            cout<<"this nu is pelindrome";
        
        else
             cout<<"this nu is not pelindrome";
        
        return 0;
}