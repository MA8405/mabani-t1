#include <iostream>
using namespace std;
int main(){
    int limit;
    cout<< "Please Enter an intiger number biger than 0  and uner20: ";
     cin>> limit;
    while(limit>20 || limit<1){
    cout<<"The number is not betwean 1 and 20\n"<<"Please Enter a number under 20: ";
    cin>> limit;
    }
    for (int i=0; i<=limit;i++){
    for(int j=i;j<=limit+i;j++){
        cout<<j<<" ";
    }
    cout<<"\n";
    }
}