//Problem: Given an array you need to sort 0s firstly , then 1s and atlast 2s. 
//Description: This can be solved using various approcahes but the brute forced or most simple easy solution is given below.

#include <iostream>
using namespace std;
int main() {
  int arr[]={0,2,1,2,0};
  int len=sizeof(arr)/sizeof(arr[0]);
  for(int i=0;i<len;i++)
  {
    for(int j=0;j<len;j++){
     if(arr[j] > arr[j+1])
     {
       int temp=arr[j];
       arr[j]=arr[j+1];
       arr[j+1]=temp;
     } 
    }
  }
  for(int i=0;i<len;i++){
    cout<<arr[i]<<" ";
  }
}
