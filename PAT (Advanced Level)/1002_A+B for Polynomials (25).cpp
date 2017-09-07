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
    Poly a[10],b[10];
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
    Poly r[20];
    int i = 0,j = 0,k = 0;
    while(a[i].exp!=-1&&b[i].exp!=-1) {
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
            r[k].exp = b[i].exp;
            r[k].coef = b[i].coef;
            j++;
            k++;
        }
    }
    cout<<k;
    if(k == 0) {
    	printf(" 0 0.0");
    	return 0;
	}
    k = 0;
    while(r[k].exp != -1) {
        printf(" %d %.1f",r[k].exp,r[k].coef);
        k++;
    }
    return 0;
}
