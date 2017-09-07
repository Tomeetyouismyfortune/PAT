#include<iostream>
#include<cstdio>
using namespace std;

struct Poly {
    int exp;
    double coef;
    Poly() {
        exp = -1;
        coef = -1;
    }
    Poly(int e,double c) {
        exp = e;
        coef = c;
    }
}; 

int main() {
    Poly a[11],b[11];
    int ka,kb,e;
    double c;
    cin>>ka;
    for(int i=0;i<ka;i++) {
        cin>>e>>c;
        a[i].exp = e;
        a[i].coef = c;
    }
    cin>>kb;
    for(int i=0;i<kb;i++) {
        cin>>e>>c;
        b[i].exp = e;
        b[i].coef = c;
    }
    Poly r[21];
    int i = 0,j = 0,k = 0;
    while(a[i].exp!=-1||b[i].exp!=-1) {
        if(a[i].exp == b[j].exp) {
            if(a[i].coef + b[j].coef == 0) {
                i++;
                j++;
            }
            else {
                r[k].exp = a[i].exp;
                r[k].coef = a[i].coef + b[j].coef;
                i++;
                j++;
                k++;
            }
        }
        if(a[i].exp > b[j].exp) {
            r[k].exp = a[i].exp;
            r[k].coef = a[i].coef;
            i++;
            k++;
        }
        if(a[i].exp < b[j].exp) {
            r[k].exp = b[j].exp;
            r[k].coef = b[j].coef;
            j++;
            k++;
        }
    }
    cout<<k;
    k=0;
    while(r[k].exp != -1) {
        printf(" %d %.1lf",r[k].exp,r[k].coef);
        k++;
    }
    return 0;
}
