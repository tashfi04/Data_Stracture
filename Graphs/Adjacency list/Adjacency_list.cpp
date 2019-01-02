#include <bits/stdc++.h>

using namespace std;

int main()
{
    int vertices, edges;
    int type;

    vector <vector <int> > adj_list;

    printf("Enter the type of graph:\n1. Directed.\n2. Indirected.\n");
    scanf("%d", &type);

    printf("Enter the number of vertices and edges:\n");
    scanf("%d %d", &vertices, &edges);

    int from, to;

    adj_list.resize(vertices);

    printf("Enter the connected vertices:\n");
    for(int i=0; i<edges; i++)
    {
        scanf("%d %d", &from, &to);
        adj_list[from].push_back(to);
        if(type == 1)
        {
            adj_list[to].push_back(from);
        }
    }

    printf("\nThe adjacency list is:\n");

    for(int i=0; i<adj_list.size(); i++)
    {
        printf("%d -->> ", i);
        for(int j=0; j<adj_list[i].size(); j++)
        {
            printf("%d  ", adj_list[i][j]);
        }
        printf("\n");
    }

    return 0;
}
