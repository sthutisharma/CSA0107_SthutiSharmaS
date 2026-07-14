#include <iostream>
using namespace std;
int main(){
    int n,a=0,b=1,next;
    cin>>n;
    if(n>=1)cout<<a <<" ";
    if (n>=2)cout<<b<<" ";
    for (int i=3;i<=n;i++){
        next=a+b;
        cout<<next<<" ";
        a=b;
        b=next;
    }
    return 0;
}
