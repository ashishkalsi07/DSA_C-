//Problem:Find leader's in an array.
//Description: An leader element will be having all elements either less than or equal to , to its right side of array . 

#include <iostream>
using namespace std;
int main() {
  int arr[5] = {10, 22, 13, 4, 5};
  int len = sizeof(arr) / sizeof(arr[0]);
  int max = arr[len-1];
  for (int i = len-2; i > 0; i--)
  {
    if(arr[i] >= max)
    {
      max = arr[i];
    }
    cout<<max<<"\n";
  }
  
}
