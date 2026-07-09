#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n value:"<<endl;
    cin>>n;
    cout<<"n+=5: "<<(n+=5)<<endl;
    cout<<"n-=3: "<<(n-=3)<<endl;
    cout<<"n*=2: "<<(n*=2)<<endl;
    cout<<"n/=4: "<<(n/=4)<<endl;
    cout<<"n%3=: "<<(n%=3)<<endl;
    return 0;
}
