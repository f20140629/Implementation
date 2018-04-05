# Graph 
Representation of Graph 
```cpp
bool *visited;
vint *a;
int V;
int E;
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
```

# bfs 
The C++ implementation uses adjacency list representation of graphs<br/>
[bfs](https://www.youtube.com/watch?time_continue=59&v=0u78hx-66Xk)
```cpp
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
		cout<<f<<endl;
		tr(a[f],it){
			if(!visited[*it]){
				visited[*it]=true;
				q.pb(*it);
			}
		}
	}
	ent;
}
```
