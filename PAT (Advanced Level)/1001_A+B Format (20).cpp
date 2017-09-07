#include<iostream>
using namespace std;

int main() {
    int a,b,sum;
    cin>>a>>b;
    sum=a+b;
    int ussum=abs(sum);
    if(ussum>999999) {
      cout<<sum/1000000<<","<<(ussum/100000)%10<<(ussum/10000)%10<<(ussum/1000)%10<<","<<(ussum/100)%10<<(ussum/10)%10
        <<ussum%10;
    }
    else if(ussum>999) {
      cout<<sum/1000<<","<<(ussum/100)%10<<(ussum/10)%10<<ussum%10;
    }
    else cout<<sum;
    return 0;
}