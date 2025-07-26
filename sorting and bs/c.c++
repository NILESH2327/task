 
 #include<iostream>
 #include<algorithm>
 #include <bits/stdc++.h>
 using namespace std;
 int main(){
  int n;cin>>n;
  int arr[n];
 int x=0;
    int max=INT_MIN;
    for(int i=0; i<n;i++){
        
        if(arr[i]>max){
            max=arr[i];
            
        }
    }
    return 0;
 }