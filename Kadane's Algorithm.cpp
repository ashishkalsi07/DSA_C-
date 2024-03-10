The name itself has so much importance in Arrays ,that it does not need any introduction to the problem Still:
We need to find max sub array sum with the time complexity of O(n)  , Let see now
#include <iostream>
using namespace std;
int main() {
  int sum = 2;
  int arr[]={5,-3,1,-6,5,3};
  int n=sizeof(arr)/sizeof(arr[0]);
  int maximum=arr[0];
  for(int i=0;i<n;i++)
  {
    sum += arr[i];
    if(sum > maximum){
      maximum = sum;
    }
    if(sum < 0){
      sum = 0;
    }
  }
  cout<< maximum;
}
