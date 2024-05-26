#include<iostream>
using namespace std;

// int main()
// {
//     int n;
//     cin >>n ;
//     int i = 1;
//     while (i<=n)
//     {
//         int j=n;
//         while (j >= 1)
//         {
//             cout << j ;
//             j -= 1;
            
//         }
//         cout << endl;
//        i = i+1;
        
//     }
    
    
  
// }


// int main()
// {
//     int n;
//     cin >>n ;
//     int i = 1;
//     int count = 1;
//     while (i<=n)
//     {
//         int j=n;
//         while (j >= 1)
//         {
//             cout << count ;
//             count +=1 ; 
//             j -= 1;
            
//         }
//         cout << endl;
//        i = i+1;
        
//     }
// }

// int main()
// {
//     int n;
//     cin >>n ;
//     int i = 1;
//     while (i<=n)
//     {
//         int j=1;
//         while (j <= i)
//         {
//             cout << "*" ;
//             j += 1;
            
//         }
//         cout << endl;
//        i = i+1;
        
//     }
// }


// int main()
// {
//     int n;
//     cin >>n ;
//     int i = 1;
//     int count = 1;
//     while (i<=n)
//     {
//         int j=1;
//         while (j <= i)
//         {
//             cout << count ;
//             count +=1 ;
//             j += 1;
            
//         }
//         cout << endl;
//        i = i+1;
        
//     }
// }



// int main()
// {
//     int n;
//     cin >>n ;
//     int i = 1;
//     while (i<=n)
//     {
//         int j=1;
//         int val = i;
//         while (j <= i)
//         {
//             cout << val ;
//             j += 1;
//             val +=1;
            
//         }
//         cout << endl;
//        i = i+1;
        
//     }
// }


// int main()
// {
    
//    int n;
//    cin >> n ;
//    int i = 1;
//    while (i <=n)
//    {
//     int j =1 ;
//     int val = i;
//     while (j <= i)
//     {
//         cout << val;
//         val -=1 ;
//         j +=1 ;
//     }
//     cout<< endl;
//     i += 1;
//    }
   
// }



int main()
{
    
    int n ;
    cin >> n;
    int i = 1;
    char count = 'A';
    while (i<=n){
        int j = 1;
        
        while(j<=n){
            cout << count <<" ";
            count += 1;
            j += 1;
        }
        cout << endl;
        i +=1 ;
    }
}