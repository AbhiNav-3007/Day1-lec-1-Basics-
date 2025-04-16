// understanding pass by reference and pass by value
// pass by value
#include<bits/stdc++.h>
using namespace std;
void dosomething(int num){
    cout<<num<<endl;
    num+=5;
    cout<<num<<endl;
    num+=5;
    cout<<num<<endl;
}
int main(){
    int num=10;
    dosomething(num);
    cout<<num<<endl;
}
// in pass by reference value in main is being copy to function ,original value remains same
