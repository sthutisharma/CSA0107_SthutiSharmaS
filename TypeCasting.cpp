#include<iostream>
using namespace std;
int main(){
    int a=5;
    float b=6.0;
    float num_float=a;
    cout<<"int to float: "<<num_float<<endl;
    float res=a+b;
    cout<<"Arithmetic btw int and float: "<<res<<endl;
    int cast=int(b);
    cout<<"Explicit float to int: "<<cast<<endl;
    int c=10,d=5;
    float div=float(c)/d;
    cout<<"int division: "<<div<<endl;
    return 0;
}
