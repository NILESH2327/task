#include<iostream>
#include<vector>
#include<cstdlib>
#include<algorithm>

using namespace std;
//sorting float element byehich is less then 1

void bucketsort(float arr[],int size){
  vector<vector<float>>bucket(size,vector<float>());
  for(int i=0;i<size;i++){
    int index= arr[i]*size;
    bucket[index].push_back(arr[i]);
    //sorting individual element
    for(int i=0;i<size;i++){
      if(!bucket[i].empty()){
        sort(bucket[i].begin(),bucket[i].end());
      }
    }
  
    //combine all element of array
    int k=0;
    for(i=0;i<size;i++){
      for(int j=0;j<bucket[i].size();j++){
        arr[k++]=bucket[i][j];
      }
    }
  
  }
}

int main (){
  float arr[]={0.4,0.03,0.67,0.13,0.12};
  int size=5;
  bucketsort(arr,size);
  for(int i=0;i<size;i++){
    cout<<arr[i]<<"  ";
  }

  return 0;
}