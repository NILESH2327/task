#include<iostream>
#include<vector>

using namespace std;
// topic is selection sorting firstly find minima and swap with 
void selectionsort(vector<int>&arr,int n){
 for(int i=0;i<n-1;i++){
  int miniindex =i;
  for(int j=i+1;j<n;j++){
    if(arr[j]<arr[miniindex]){
      miniindex=j;

    }

  }
  swap(arr[i],arr[miniindex]);
 }
}
int main(){

 vector<int>arr={3,5,8,99,1,3,2};
 int n=7;
 selectionsort(arr,n);
 for(int i=0; i<n;i++){

  cout<<arr[i]<<" ";
 }

  return 0;

}