#include<iostream>
#include<cstdio>
#include<map>
using namespace std;

int main() {
    map<int,double> a,b,r;
    map<int,double>::iterator s,t;
    int ka,kb,exp;
    double coef;
    cin>>ka;
    for(int i=0;i<ka;i++) {
        cin>>exp>>coef;
        a[exp]=coef;
    }
    cin>>kb;
    for(int i=0;i<kb;i++) {
        cin>>exp>>coef;
        b[exp]=coef;
    }
    for(s=a.begin();s!=a.end();s++) {
        for(t=b.begin();t!=b.end();t++) {
            exp=s->first+t->first;
            coef=s->second*t->second;
            if(!r.count(exp)) r[exp]=coef;
            else {
                r[exp]+=coef;
                if(!r[exp]) r.erase(exp);
            }
        }
    }
    map<int,double>::reverse_iterator k;
    printf("%d",r.size());
    for(k=r.rbegin();k!=r.rend();k++) {
        printf(" %d %.1f",k->first,k->second);
    }
}
