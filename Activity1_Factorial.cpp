#include <iostream>
using namespace std;
int main(){
    int n,i=1;
    long long fact=1;
    cin>>n;
    if(n<0)
        cout<<"Invalid";
    else{
        while(i<=n) {
            fact*=i;
            i++;
        }
        cout<<fact;
    }
    return 0;
}
