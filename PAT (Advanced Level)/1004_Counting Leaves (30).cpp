#include<iostream>
#include<vector>
#include<deque>
using namespace std;

vector< vector<int> > node;
vector<int> levers;

void dfs(int id,int lever) {
    if(!node[id].empty()) {
        for(int i=0;i<node[id].size();i++) dfs(node[id][i],lever+1);
    }
    else {
    	if(levers.size()<lever+1) levers.resize(lever+1);
    	levers[lever]++;
	}
}

int main() {
    int n,m,id,k,child_id;
    cin>>n>>m;
    node.resize(n+1);
    levers.resize(1);
    for(int i=0;i<m;i++) {
        cin>>id>>k;
        for(int i=0;i<k;i++) {
            cin>>child_id;
            node[id].push_back(child_id);
        }
    }
    dfs(1,0);
    for(int i=0;i<levers.size();i++) {
        cout<<levers[i];
        if(i!=levers.size()-1) cout<<" ";
    }
}
