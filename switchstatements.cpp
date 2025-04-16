#include<bits/stdc++.h>
using namespace std;
int main(){
    /*take number from 1 to 7 
    print 1 as monday
    2 as tuesday and so on
    */
   int day;
   cin>>day;
   switch(day){
    case 1:
        cout<<"monday";
        break;
    case 2:
        cout<<"tuesday";
        break;
    case 3:
        cout<<"wed";
        break;
    case 4:
        cout<<"thursday";
        break;
    case 5:
        cout<<"friday";
        break;
    case 6:
        cout<<"satur";
        break;
    case 7:
        cout<<"sunday";
        break;

    default:
        cout<<"invalid day";
   }
}