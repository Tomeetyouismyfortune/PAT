#include<iostream>
#include<cstdio>
using namespace std;

int main() {
    double a[3][3];
    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++) {
            cin>>a[i][j];
        }
    }
    double max=1.3;
    for(int i=0;i<3;i++) {
        if(a[i][0]>=a[i][1]&&a[i][0]>=a[i][2]) {
            printf("W ");
            max*=a[i][0];
        }
        else {
            if(a[i][1]>=a[i][2]) {
                printf("T ");
                max*=a[i][1];
            }
            else {
                printf("L ");
                max*=a[i][2];
            }
        }
    }
    max=max-2;
    if(max>0) max=max+0.001;
    if(max<0) max=max-0.001;
    printf("%.2f",max);
    return 0;
}
