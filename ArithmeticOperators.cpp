#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter two number:";
    cin>>a>>b;
    cout<<"Addition="<<a+b<<endl;
    cout<<"Subtraction="<<a-b<<endl;
    cout<<"Multiplication="<<a*b<<endl;
    if (b!=0)
        cout<<"Division="<<a/b<<endl;
    else
        cout<<"Division not possible";
    cout<<"Modulus="<<a%b;
    return 0;
}
