#include<iostream>
#include<vector>

using namespace std;
void inserstionsort(vector<int>&arr,int n){
  for(int i=0;i<n; i++){
    int temp= arr[i];
    int j=i-1;
    for(; j>=0;j--){
      if(arr[j]>temp){
        //shifting
        arr[j+1]=arr[j];
      }
      else{
        break;

      }
      
    }
    arr[j+1]=temp;
  }
}

int main (){
vector<int>arr={3,5,8,99,1,3,2};
 int  n=7;
 inserstionsort(arr,n);
for(int i=0; i<n;i++){
cout<<arr[i]<<" ";
}



  return 0;
}