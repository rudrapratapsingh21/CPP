// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     for (int i=1; i<=n; i++)
//         {
//             for (int j=1; j<=n-i; j++){
//                 cout<< "  ";
//                 }
//                 for( int j=1; j<=i;j++){
//                     cout<<"* ";

//                 }
//             cout<< endl;
//         }
//         return 0;

// }
//   output

//         * 
//       * * 
//     * * * 
//   * * * * 
// * * * * * 




// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;

//     for (int i=1; i<=n; i++)
//         {
//             for (int j=1; j<=i-1; j++){
//                 cout<<"  ";
//                 }
//                 for( int j=1; j<=n-i+1;j++){
//                     cout<<"* ";

//                 }
//             cout<< endl;
//         }
//         return 0;

// }

//output

// * * * * * 
//   * * * *
//     * * *
//       * *
//         *


#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int nsp=0;
    int nst=n;
    for (int i=1; i<=n; i++)
        {
            for (int j=1; j<=nsp; j++){
                cout<<"  ";
                }
                for( int j=1; j<=nst;j++){
                    cout<<"* ";
                }
                nsp++;
                nst--;
            cout<< endl;
        }
        return 0;

}


//output
// * * * * * 
//   * * * *
//     * * *
//       * *
//         *
