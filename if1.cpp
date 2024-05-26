#include<iostream>
using namespace std;

int main()
{
   char ch;
   cin >> ch;

   if (isalpha(ch)){
        if (isupper(ch) == true){
            cout<<"The character is alphabet " << " uppercase" <<endl;
        }
        else{
            cout<<"The character is alphabet " << " lowercase" <<endl;
        } 
   } 
   else if (isdigit(ch) == true ){
     cout<< "The character is number " <<endl;
    }
}
// {
//  int a ;
//  cin >> a ; 
//  int b ;
//  cin>> b;
//  if (a>b){
//         cout<< "A i greater than B" << endl;
//     }
//  if (a<b) {
//         cout << "B is gretaer than A" << endl;
//     }
//  else{
//         cout << "A is equal to B" << endl;
//     }  
// }