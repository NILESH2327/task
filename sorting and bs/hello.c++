#include <bits/stdc++.h>
#include<vector>
#include<algorithm>
#include<cmath>



using namespace std;

int getmincost(vector<int>&crew_id,vector<int>&job_id){
    sort(crew_id.begin(),crew_id.end());
    sort(job_id.begin(),job_id.end());
    
    
    int total_distance=0;
    for(int i=0;i<crew_id.size();++i){
        total_distance+=abs(crew_id[i]-job_id[i]);
    }
    return total_distance;
    
}
int main(){
    int n;
    cin>>n;
    vector<int>crew_id(n);
      vector<int>job_id(n);
    for(int i=0;i<n;++i){
        cin>>crew_id[i];
    }
    // vector<int>job_id(n);
    for(int i=0;i<n;++i){
        cin>>job_id[i];
        
    }
    cout<<getmincost(crew_id,job_id)<<endl;
    
    return 0;
}
