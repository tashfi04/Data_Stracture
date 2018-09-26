#include <bits/stdc++.h>

using namespace std;

void replace_(string main_str, string repl_pat, string updt_pat)
{
    string new_str;
    int i;
    for(i=0; i<main_str.size(); i++)
    {
        if(main_str.compare(i, repl_pat.size(), repl_pat)==0)
        {
            new_str=main_str.substr(0, i)+updt_pat+main_str.substr(i+repl_pat.size(), main_str.size()-i-repl_pat.size());
        }
    }
    cout<<"New string:"<<endl;
    cout<<new_str<<endl;
}

int main()
{
    string main_str, repl_pat, updt_pat;

    cout<<"Enter the main string:"<<endl;
    cin>>main_str;
    cout<<"Enter the pattern you want to replace:"<<endl;
    cin>>repl_pat;
    cout<<"Enter the pattern you want to replace with:"<<endl;
    cin>>updt_pat;

    replace_(main_str, repl_pat, updt_pat);

    return 0;
}
