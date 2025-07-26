#include<iostream>
#include<string>
#include<vector>


using namespace std;
// sort the strings by count sort 
string sortstring(string str){
  //create a frq array for counting freq of each letter a to z 26 size assign with 0;
  vector<int>freq(26,0);
  for(int i=0;i<str.length();i++){
    int index= str[i]-'a';
    freq[index]++;
  }
  //create sorted array
  int j=0;
  for(int i=0;i<26;i++){
    while(freq[i]--){
      str[j]=i+'a';

      j++;
    }
  }
  return str;

}

int main(){
   string str= "nileshkumar";

   cout<<sortstring(str);
   //its work ohh!


  return 0;

}
