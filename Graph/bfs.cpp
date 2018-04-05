#include <bits/stdc++.h>

using namespace std;

#define tr(container,it)  for( typeof(container.begin()) it=container.begin(); it!=container.end();it++)
#define mp make_pair
#define repeat(a,b,i) for(int i=a;i<b;i++)
#define var(x) int x;cin>>x
#define pb push_back
#define fi first
#define se second
#define pf pop_front
#define ent cout<<endl
#define PRINT
#define DONE

typedef vector<int> vint;
typedef list<int> lint;
typedef stack<int> sint;

bool *visited;
vint *a;
int V;
int E;

void bfs(int s){
	visited=new bool[V];
	fill_n(visited,V,false);
	lint q;
	q.pb(s);
	visited[s]=true;
	while(!q.empty()){
		int f=q.front();
		visited[f]=true;
		q.pf();
		cout<<f<<" ";
		tr(a[f],it){
			if(!visited[*it]){
				visited[*it]=true;
				q.pb(*it);
			}
		}
	}
	ent;
}

int main(){
	
	cin>>V>>E;
	a=new vint[V];
	repeat(0,E,i){
		var(u);var(v);
		a[u].pb(v);
		a[v].pb(u);
	}
	var(s);
	bfs(s);
}
