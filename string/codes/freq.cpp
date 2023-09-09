#include<iostream>
using namespace std;
int main(){
string str;
getline(cin,str);
int count[26]={0};
for(int i=0;i<str.length()-1;++i){
    count[str[i]-'a']++;
}
for(int i=0;i<26;++i){
   if(count[i]>0) cout<< char(i+'a') <<" count is "<< count[i]<<endl;
}

}