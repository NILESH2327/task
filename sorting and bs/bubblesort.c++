#include<iostream>
#include<vector>

// bubble sort using swaping when n element in array so n-1 step move i  cuz one last element already sorted
// time complexity is bigo n^2 and space is bigo 1
using namespace std ;
void bubblesort(vector<int>&arr,int n){

  for(int i=0;i<n;i++){
    bool swapped=false;
    // we know value of j is traverse o to n-1  when higher  element reached last palace 
    //so one element decrease so then i =1 and j travase 0 to n-2 so various term is n-i ;
    for(int j=0;j<n-i;j++){
      if(arr[j]>arr[j+1]){
        swap(arr[j],arr[j+1]);
         swapped=true;//swap higher element right and lower element left.
      }
    }
    if(swapped==false){
      break;//already sorted for optimistion
    }
  }

}

int main(){

 vector<int>arr={3,5,8,99,1,3,2};
 int  n=7;
 bubblesort(arr,n);
for(int i=0; i<n;i++){
cout<<arr[i]<<" ";
}


  return 0;
  
}