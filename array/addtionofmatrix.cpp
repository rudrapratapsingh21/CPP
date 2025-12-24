#include <iostream>
using namespace std;
int main()
    
{   int n , rows , cols;
     cin >> rows >> cols;
     int a[n][n], b[n][n] , sum [n][n];
      
        cout << "Enter elements of Matrix A:\n";
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cin >> a[i][j];
        }
    }
        cout << "Enter elements of Matrix B:\n";
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cin >> b[i][j];
        }
    }
       for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }
        cout << "Sum of the two matrices:\n";
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

    
   


    



