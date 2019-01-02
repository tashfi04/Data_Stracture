#include <bits/stdc++.h>

using namespace std;

int main()
{
    int vertices, edges;
    int type;

    printf("Enter the type of graph:\n1. Directed.\n2. Indirected.\n");
    scanf("%d", &type);

    printf("Enter the number of vertices and edges:\n");
    scanf("%d %d", &vertices, &edges);

    int u ,v, w, matrix[vertices][vertices];
    memset(matrix, 0, sizeof(matrix));

    printf("Enter the vertices and the weights between them:\n");
    for(int i=0; i<edges; i++)
    {
        scanf("%d %d %d", &u, &v, &w);
        matrix[u][v] = w;
        if(type == 1)
        {
            matrix[v][u] = w;
        }
    }

    printf("\nThe adjacency matrix is:\n");

    for(int i=0; i<vertices; i++)
    {
        for(int j=0; j<vertices; j++)
        {
            printf("%d \t", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
