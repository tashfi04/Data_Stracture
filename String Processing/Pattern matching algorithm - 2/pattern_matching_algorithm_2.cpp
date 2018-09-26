#include <bits/stdc++.h>
using namespace std;
#define NO_OF_CHARS 256

void buildTransitionTable(char *pat, int M, int TF[][NO_OF_CHARS])
{
    int i, lps=0, x;
    for(x=0; x<NO_OF_CHARS; x++)
        TF[0][x]=0;
    TF[0][pat[0]]=1;

    for(i=1; i<=M; i++)
    {
        for(x=0; x<NO_OF_CHARS; x++)
            TF[i][x]=TF[lps][x];

        TF[i][pat[i]]=i+1;
        if(i<M)
        lps=TF[lps][pat[i]];
    }
}

void searchUsingPstternMatching(char *pat, char *txt)
{
    int M=strlen(pat);
    int N=strlen(txt);

    int TF[M+1][NO_OF_CHARS];

    buildTransitionTable(pat, M, TF);

    int i, j=0;
    for(i=0; i<N; i++)
    {
        j=TF[j][txt[i]];
        if(j==M)
        {
            printf("Index of pattern %d\n", i-M+1);
        }
    }
}

int main()
{
    int t, p;

    printf("Enter the size of the text:\n");
    scanf("%d", &t);
    getchar();
    char txt[t+1];
    printf("Enter the text:\n");
    scanf("%[^\n]s", txt);

    printf("Enter the size of the pattern:\n");
    scanf("%d", &p);
    getchar();
    char pat[p+1];
    printf("Enter the pattern you want to search:\n");
    scanf("%[^\n]s", pat);

    searchUsingPstternMatching(pat, txt);

    return 0;
}
