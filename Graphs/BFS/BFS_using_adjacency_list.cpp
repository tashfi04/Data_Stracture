#include <bits/stdc++.h>

using namespace std;

vector <vector <int> > graph;
queue <int> queue_;
vector <int> color;
vector <int> dist;
int vertex;

void enqueue(int n)
{
    queue_.push(n);
}

int dequeue()
{
    int top;
    top = queue_.front();
    queue_.pop();

    return top;
}

bfs(int n)
{
    int i;
    enqueue(n);
    while(!queue_.empty())
    {
        n=dequeue();
        color[n] = 1;

        for(i=0; i<graph[n].size(); i++)
        {
            if(color[graph[n][i]] == 0)
            {
                color[graph[n][i]] = 1;
                enqueue(graph[n][i]);
                dist[graph[n][i]] = dist[n] + 1;
            }
        }

    }
}

int main()
{
    int type, edge, from, to;

    printf("Enter the type of graph:\n1. Directed.\n2. Indirected.\n");
    scanf("%d", &type);

    printf("Enter the number of vertices and edges:\n");
    scanf("%d %d", &vertex, &edge);

    graph.clear();
    graph.resize(vertex);
    color.clear();
    color.resize(vertex, 0);
    dist.clear();
    dist.resize(vertex, 0);

    printf("Enter the connected vertices:\n");

    for(int i=0; i<edge; i++)
    {
        scanf("%d %d", &from, &to);
        graph[from].push_back(to);
        if(type==1)
        {
            graph[to].push_back(from);
        }
    }

    bfs(0);

    printf("Vertex \t Distance\n");
    for(int i=0; i<vertex; i++)
    {
        printf("%d   \t %d\n", i, dist[i]);
    }

    return 0;
}
