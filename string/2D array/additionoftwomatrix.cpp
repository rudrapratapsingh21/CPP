#include <iostream>
using namespace std;

int main() {
        int m,n;
        cout<<"Enter rows "<<endl;
        cin>>n;
        cout<<"Enter column "<<endl;
        cin>>m;
        

    int arr[m][n];
    cout<< "enter elements" << endl ;

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++)
            cin>> arr[i][j];
        }
        cout <<"matrix is" << endl;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
            cout<<  arr[i][j];
            }
            cout <<endl;
        }
        
            return 0;
}