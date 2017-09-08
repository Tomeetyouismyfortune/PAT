#include<iostream>
using namespace std;

int main() {
    int n,next,pre=0,sum=0;
    cin>>n;
    for(int i=0;i<n;i++) {
        cin>>next;
        if(pre>next) sum+=(4*(pre-next)+5);
        if(pre<next) sum+=(6*(next-pre)+5);
        pre=next;
    }
    cout<<sum;
}
