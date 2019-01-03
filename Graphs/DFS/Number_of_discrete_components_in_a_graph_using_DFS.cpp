#include <bits/stdc++.h>

using namespace std;

vector <vector <int> > graph;
vector <bool> visited;

void dfs(int now)
{
    int to;
    visited[now] = true;

    for(int i=0; i<graph[now].size(); i++)
    {
        to = graph[now][i];
        if(visited[to] == false)
        {
            dfs(to);
        }
    }
}

int main()
{
    int type, vertex, edge, from, to, i, discrete_comp = 0;

    printf("Enter the type of graph:\n1. Directed.\n2. Indirected.\n");
    scanf("%d", &type);

    printf("Enter the number of vertices and edges:\n");
    scanf("%d %d", &vertex, &edge);

    graph.clear();
    graph.resize(vertex);
    visited.clear();
    visited.resize(vertex, false);

    printf("Enter the connected vertices:\n");

    for(i=0; i<edge; i++)
    {
        scanf("%d %d", &from, &to);
        graph[from].push_back(to);
        if(type == 1)
            graph[to].push_back(from);
    }
    for(i=0; i<vertex; i++)
    {
        if(visited[i] == false)
        {
            discrete_comp++;
            dfs(i);
        }
    }
    printf("Number of discrete components in the graph is %d\n", discrete_comp);

    return 0;
}

