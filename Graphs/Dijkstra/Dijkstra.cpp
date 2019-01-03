#include <bits/stdc++.h>
using namespace std;

vector <vector <int> > graph;
vector <int> dist;
vector <int> sptSet;
vector <int> parent;
int vertex;

int minDistance()
{
    int min_=INT_MAX, min_index;

    for(int v=0; v<vertex; v++)
    {
        if(sptSet[v]==false && dist[v]<=min_)
        //{
            min_=dist[v], min_index=v;
        //}
    }

    return min_index;
}

void printPath(int j)
{
    if(parent[j]==-1)
        return;
    printPath(parent[j]);
    printf("%d ",j);
}

int printSolution()
{
    int src=0;
    printf("Vertex \t Distance from Source \t Path \n");
    for(int i=0; i<vertex; i++)
    {
        printf("%d \t %d \t \t \t %d ", i, dist[i], src);
        printPath(i);
        printf("\n");
    }
}

void dijkstra(int src)
{

    parent[src] = -1;
    dist[src] = 0;
    for(int count_=0; count_<vertex-1; count_++)
    {
        int u=minDistance();
        sptSet[u]=true;

        for(int v=0; v<vertex; v++)
        {
            if(!sptSet[v] && graph[u][v] && dist[u]!=INT_MAX && dist[u]+graph[u][v]<dist[v])
            {
                dist[v]=dist[u]+graph[u][v];
                parent[v]=u;
            }
        }
    }
    printSolution();
}

int main()
{
    int edge, type, n;

    printf("Enter the type of graph:\n1. Directed.\n2. Indirected.\n");
    scanf("%d", &type);
    printf("Enter the number of vertices and edges:\n");
    scanf("%d %d", &vertex, &edge);

    graph.clear();
    graph.resize(vertex);
    dist.clear();
    dist.resize(vertex, INT_MAX);
    sptSet.clear();
    sptSet.resize(vertex, false);
    parent.clear();
    parent.resize(vertex);

    for(int i=0; i<vertex; i++)
    {
        graph[i].clear();
        graph[i].resize(vertex);
    }
    printf("Enter the connected vertices and the weights between them\n");
    while(edge--)
    {
        int a, b, weight;
        scanf("%d %d %d", &a, &b, &weight);
        graph[a][b] = weight;
        graph[b][a] = weight;
    }

    printf("Enter the source you want to find distances from:\n");
    scanf("%d", &n);

    dijkstra(n);

    return 0;
}
/*
Input:
7 9
0 1 3
0 5 5
0 6 1
1 2 1
2 3 2
2 4 1
3 4 2
4 5 6
5 6 2
*/
