#include <iostream>
using namespace std;
  
int main()
{
    int arr[6];
   double sum =0;

  cout << "Enter 6 numbers: " ;

  //  store input from user to array
  for (int i = 0; i < 6; ++i) {
    cin >> arr[i];
    sum = sum+arr[i];// Sum of elements

  }
  double avg = sum/6;
  cout<<"The average of the elements: "<< avg <<endl;
        double count = 0;
        for(int i=0;i<5;i++) {
            if(arr[i]>avg) {
                count++;
            }
        }
        cout<<count<<endl;
        cout<<"if 3 of the array elements are greater than average, percentage is: "<<((count*100)/6);
        cout<<"%"<<endl;




}