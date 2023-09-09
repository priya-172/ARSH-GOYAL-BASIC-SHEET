#include<iostream>
using namespace std;
int main(){
    string s="PriyaPramanick";
    int count[26]=[0];
    for(int i=0;i<s.length();++i){
    count[s[i]-'a']++;
    }
    for(int i=0;i<26;++i){
        if(count[i]>0) cout<<s[i]<<endl;
    }
}