#include <bits/stdc++.h>
using namespace std;

struct Edge{
    int u,v,w;
    bool inMST=false;
};

struct DSU{
    vector<int> p,r;
    DSU(int n){ p.resize(n); r.assign(n,0); iota(p.begin(),p.end(),0);}
    int find(int x){ return p[x]==x?x:p[x]=find(p[x]);}
    bool unite(int a,int b){
        a=find(a); b=find(b);
        if(a==b) return false;
        if(r[a]<r[b]) swap(a,b);
        p[b]=a;
        if(r[a]==r[b]) r[a]++;
        return true;
    }
};

int main(){
    vector<Edge> e={{0,1,7},{0,2,15},{1,2,9},{1,3,16},{2,3,8},{2,4,10},{2,5,12},{4,5,4},{3,5,6}};
    sort(e.begin(),e.end(),[](auto&a,auto&b){return a.w<b.w;});
    DSU d(6);
    int mst=0;
    for(auto &x:e){
        if(d.unite(x.u,x.v)){ mst+=x.w; x.inMST=true; }
    }
    int extra=1e9;
    for(auto &x:e) if(!x.inMST) extra=min(extra,x.w);
    cout<<"MST Cost = "<<mst<<"\n";
    cout<<"Redundant Network Cost = "<<mst+extra<<"\n";
}
