#include <iostream>
using namespace std;
  
int main()
{
    int num,temp;
    cout<<"Enter size of array elements: ";
    cin>>num;
    int arr[num];
    cout<<"Enter array elements: ";
    for (int i = 0; i < num; i++) {
           cin>>arr[i];
        }

        for(int i=0; i<num; i++)
    {
        for(int j=i+1; j<num; j++)
        {
            if(arr[j] <arr[i])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    cout<<"Elements of array in sorted ascending order: ";
    for(int i=0; i<num; i++)
    {
      cout<< arr[i]<<" ";
    }
    return 0;
}