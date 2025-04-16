#include<bits/stdc++.h>
using namespace std;
int main(){
    string s ="Abhinav";
    int len= s.size();
    cout<<s[len-3]<< endl;
    s[len-3]='s';     //for changing character of any string at 
                      //particular index the use ' '(single inverted comma) not " "(double inverted comma)
    cout<<s[len-3];
}