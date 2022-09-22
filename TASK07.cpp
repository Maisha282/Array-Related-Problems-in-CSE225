#include <iostream>
using namespace std;
  
int main()
{
    int num;
    cout<<"Enter size of array elements: ";
    cin>>num;
    int arr[num];
    cout<<"Enter array elements: ";
    for (int i = 0; i < num; i++) {
           cin>>arr[i];
        }

    cout<<"Array in a reverse order: ";
    
     for(int i = num-1; i>=0; i--)
    {
          cout<<arr[i]<<" ";
    }   


}