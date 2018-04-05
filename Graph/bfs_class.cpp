#include <cmath>
#include <cstdio>
#include <iostream>
#include <algorithm>
#include <utility>
#include <functional>
#include <stack>
#include <vector>
#include <list>
#include <set>


using namespace std;

#define loop(a,b,i)	for(int i=a;i<b;i++)
#define var(x)			int x;cin>>x
#define rloop(a,b,i)	for(int i=b-1;i>=a;i--)
#define pb push_back
#define mp make_pair
#define fi first
#define se second

typedef vector<int> vint;
typedef list<int>	lint;
typedef stack<int> sint;

class Graph{
private:
	int V;
	lint *a; 
public:
	Graph(int v){
		a=new lint[v];
		V=v;
	}	
	void addEdge(int v,int u){
		a[u].pb(v);
		a[v].pb(u);
	}
	void bfs(int s){
		lint q;
		q.pb(s);
		bool *visited=new bool[V];
		fill_n(visited,V,false);
		visited[s]=true;
		while(!q.empty()){
			int f=q.front();
			cout<<f<<" ";
			q.pop_front();
			for(lint::iterator it=a[f].begin();it!=a[f].end();it++){
				if(!visited[*it]){
					visited[*it]=true;
					q.pb(*it);
				}
			}
		}
	}
};

int main() {
	var(n);
	var(e);
	Graph  g(n);
	loop(0,e,i){
		var(u);
		var(v);
		g.addEdge(u,v);
	}
	g.bfs(0);
	return 0;
}
