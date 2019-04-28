#include <iostream>
#include <stack>
#include <queue>
#include <cstring>
#define max 100
using namespace std;
stack<int> bfs_stack;
queue<int> dfs_queue;
int G[max][max];
int visit[max];
int v,e;
//区别在于每次输出的数据顺序，用栈和队列
void bfs(int s){//深搜
    cout<<"bfs"<<endl;
    int i,j,node;
    memset(visit,0, sizeof(visit));
    bfs_stack.push(s);
    while (!bfs_stack.empty()){
        node=bfs_stack.top();
        bfs_stack.pop();
        if(visit[node])
            continue;
        visit[node]=1;
        cout<<node<<"-->";
        for ( i = 0; i <v ; ++i) {
            if(G[node][i])
                bfs_stack.push(i);
        }
    }
    cout<<"NULL"<<endl;

}
void dfs(int s){//广搜
    cout<<"dfs"<<endl;
    int i,j,node;
    memset(visit,0, sizeof(visit));
    dfs_queue.push(s);
    while(!dfs_queue.empty()){
        node=dfs_queue.front();
        dfs_queue.pop();
        if(visit[node])continue;
        visit[node]=1;
        cout<<node<<"-->";
//        for (i = 0; i <v ; ++i) {
//            if(G[i][node])
//                dfs_queue.push(i);
//
//        }
        for (j = 0;  j< v; j++) {
            if(G[node][j])
                dfs_queue.push(j);
        }
    }
    cout<<"NULL"<<endl;
}
int main()
{
    memset(visit,0,sizeof(visit));
    memset(G,0,sizeof(G));
    G[0][1]=1;
    G[1][2]=1;
    G[1][3]=1;
    G[3][5]=1;
    G[3][4]=1;
    G[3][7]=1;
    G[4][6]=1;
    G[7][4]=1;
    v=8;
    bfs(0);
    dfs(0);
    cout<<endl;
    return 0;
}