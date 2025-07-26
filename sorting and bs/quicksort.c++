#include<iostream>
#include<vector>


using namespace std;
int f(vector<int>&v,int low , int high){
   int pivot= v[low];
   int i=low;
   int j=high;
   while(i<j){

    while(v[i]<=pivot&& i<=high-1){
    // finding greater elements
    
      i++;
    }
    while(v[j]>pivot && j>=low+1){
      //finding leseer element 
      j--;
    }
    if(i<j) swap(v[i],v[j]);


   }
   swap(v[low],v[j]);
   return j;
}
void quicksort(vector<int>&v,int low ,int high){
  if(low>=high) return ;
  int p_index= f(v,low,high);
  quicksort(v,low,p_index-1);
  quicksort(v,p_index+1,high);
  
}

int main(){
vector<int>v={1,3,4,8,2,0};
int n=6;
 quicksort(v,0,n-1);
 for(int i=0;i<n;i++){
  cout<<v[i]<<" ";
 }
 



  return 0;
}