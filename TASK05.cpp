#include <iostream>
using namespace std;
  
int main()
{
    int num;
    cout<<"Enter size : ";
    cin>>num;

    int arr[num];
    cout<<"Enter Number: ";
    for (int i = 0; i < num; i++) {
           cin>>arr[i];
        }
    

    cout<<"Output: ";
    for (int i = 0; i < num - 2; i++) {
            if (arr[i] == arr[i + 1] && arr[i + 1] == arr[i + 2]) {
               cout <<arr[i]<<" ";
            }    

}
}