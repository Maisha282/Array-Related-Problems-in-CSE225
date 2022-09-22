#include <iostream>
using namespace std;
  
int main()
{
     int count=0;
     // Taking User Input for 2nd Array 

    int arr1[5];
    cout<<"Enter array 1: ";
    for (int i = 0; i < 5; i++) {
           cin>>arr1[i];
        }
    // Taking User Input for 2nd Array   
      int arr2[5];
    cout<<"Enter array 2: ";
    for (int i = 0; i < 5; i++) {
           cin>>arr2[i];
        }

    // Checking both arrays are identical or not based on their indices
      for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            if(arr1[i]==arr2[j])
            {
                count++;
                break;
            }
        }
    }
    // Identical if their indices are same 
    if((count==5)&&(count==5))
    {
        printf("Strictly identical");
    }
    else
    {
        printf("Not identical");
    }  
    return 0;  



}