#include <bits/stdc++.h>

using namespace std;

void SearchUsingPatternMatching1(string txt, string pat)
{
    bool found = false;
    int i, j = 0;
    int txt_len = txt.size();
    int pat_len = pat.size();

    for(i=0; i<txt_len; i++)
    {
        if(pat[j] == txt[i])
        {
            while(pat[j] == txt[i])
            {
                j++;
                i++;
                if(j == pat_len)
                {
                    found = true;
                    break;
                }
            }
            if(found)
                break;
            j = 0;
        }
    }
    if(!found)
        printf("Pattern not found!\n");
    else
        printf("Pattern found at index %d\n", i-pat_len);
}

int main()
{
    string txt, pat;

    printf("Enter the text you want to search from:\n");
    getline(cin, txt);
    printf("Enter the pattern you want to search:\n");
    getline(cin, pat);

    SearchUsingPatternMatching1(txt, pat);

    return 0;
}
