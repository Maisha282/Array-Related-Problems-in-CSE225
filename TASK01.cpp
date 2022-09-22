#include <iostream>
using namespace std;
  
int main()
{
    int month;
    cout<<"Enter Month numbers: ";
    cin>>month;

    switch (month)
    {
    case 1: 
         cout<<"January: 31 DAYS..";
        break;
    case 2: 
        cout<<"February: 28 DAYS..";
        break;    
     case 3: 
        cout<<"March: 31 DAYS..";
        break;
    case 4: 
        cout<<"April: 30 DAYS..";
        break;    
    case 5: 
        cout<<"May: 31 DAYS..";
        break;
    case 6: 
        cout<<"June: 30 DAYS..";
        break;    
     case 7: 
        cout<<"July: 31 DAYS..";
        break;
    case 8: 
        cout<<"August: 31 DAYS..";
        break; 
    case 9: 
        cout<<"September: 30 DAYS..";
        break;
    case 10: 
        cout<<"October: 31 DAYS..";
        break;    
     case 11: 
         cout<<"November: 30 DAYS..";
        break;
    case 12: 
         cout<<"December: 31 DAYS..";
        break;      
    default: 
          cout<<"Invalid Month!!!!";
        break;
    }
    return 0;



}
