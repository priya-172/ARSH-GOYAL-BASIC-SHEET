#include<iostream>
#include<string.h>
using namespace std;
int main(){
    string s;
    getline(cin,s)
    string s_rev;
    int n=s.size()-1;
    for(int i=s.size()-1;i>=0;--i){
        if(s[i]!=s[n-i]){
            cout<<"NO"<<endl;
            return ;

        }
        else{
            cout<<"YES"<<endl;

        }
    }

}
