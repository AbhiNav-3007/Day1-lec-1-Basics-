#include<bits/stdc++.h>
using namespace std;
int main(){
    /* take the age from user and then decide
    1. if age<18
    print= "not eligible for job";
    2. if age>= 18;
    print = "eligible for job";
    3. if age >= 55 and age<=57;
    print= "eligible for job but retirement soon;"
    4. if age >57;
    print= "retirement time"*/
        int age;
        cin>>age;
        if(age<18){
            cout<<"not eligible for job";
        }
        else if(age<=57){
            cout<<"eligib;e for job";
            if(age>=55){
            cout<<" but retirement soon";
            }
        }
        else{
            cout<<"retirement time ";
        }
        
}