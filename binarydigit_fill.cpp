#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int n;
void print(string s,int index){
    if(index==s.length()){
        cout<<s<<endl;
        return;}

    if(s[index]=='?'){

     s[index]='0';
     print(s,index+1);

     s[index]='1';
     print(s,index+1);


    }
    else
        print(s,index+1);

}
int main()
{
    //int count=0,i;
    string str;
    cin>>str;
    print(str,0);
}
