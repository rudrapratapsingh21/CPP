// #include <iostream>
// using namespace std;
// int main()
// {
//     int n ;
//     cin>>n;
//     for (int i=0; i<=n; i++)
//         {
//             for (int j=1; j<=i+1; j++)
//                 {cout<<"*";}
//             cout<< endl;
//         }
//         return 0;

// }
#include <iostream>
using namespace std;
int main()
{
    int n;
     cout <<"enter n ";
         cin>>n;
         int mid = n/2 +1;
    for (int i=1; i<=n; i++)
        {
            for (int j=1; j<=n; j++)
                { if(i==mid||j==mid)
                    cout << "*" << endl;
                else 
                    cout << "#" << endl;  
                }      
            cout<< endl;
        }
        return 0;

}