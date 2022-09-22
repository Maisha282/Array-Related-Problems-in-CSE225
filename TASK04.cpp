#include <iostream>
using namespace std;
  
int main()
{
    int num;
    cout<<"Enter a number : ";
    cin>>num;

    int arr[num];
    arr[0] = 0;
    arr[1] = 1;
     for (int i = 2; i < num; i++) {
            arr[i] = arr[i - 1] + arr[i - 2];
        }
    cout<<"First "<<num<<  " Fibonacci numbers:  ";
       for (int i = 0; i < num; i++) {
           cout<<arr[i] <<" ";
        }
        return 0;

}