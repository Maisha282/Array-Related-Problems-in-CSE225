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
   // storing the largest number to arr[0]
    for (int i = 1; i < num; ++i) {
    if (arr[0] < arr[i]) {
      arr[0] = arr[i];
    }
  }
    cout<<"The maximum element of an array: "<<arr[0];




}