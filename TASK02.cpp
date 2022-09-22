#include <iostream>
using namespace std;
  
int main()
{
   char ch;
   cout<<"Enter a Character: ";
   cin>>ch;

   if(ch >= 48 && ch <= 57){
         cout<<ch<<" is a Digit.";
   }

   else if( ch >= 65 && ch <= 90)
    {
        cout<<ch<<" is an UpperCase Letter.";
    }
    else if(ch >= 97 && ch <= 122){
        cout<<ch<<" is an LowerCase Letter.";

    }
    else{
         cout<<ch<<" is a special Character.";
    }
  return 0;
} 