#include <bits/stdc++.h>

using namespace std;

string insert_(string main_str, int pos, string sub_str)
{
    string new_str;
    //new_str=main_str.substr(0, pos)+sub_str+main_str.substr(pos, main_str.size()-pos);
    //cout<<"New string:"<<endl;
    //cout<<new_str<<endl;
    for(int i=0; i<pos; i++)
    {
        new_str+=main_str[i];
    }

    new_str=new_str+sub_str;

    for(int i=pos; i<main_str.size(); i++)
    {
        new_str+=main_str[i];
    }

    return new_str;
}

int main()
{
    string main_str, sub_str;
    int pos;

    cout<<"Enter the main string:"<<endl;
    cin>>main_str;
    cout<<"Enter the position you want to insert the substring:"<<endl;
    cin>>pos;
    cout<<"Enter the substring you want to insert:"<<endl;
    cin>>sub_str;

    main_str=insert_(main_str, pos, sub_str);
    cout<<main_str<<endl;

    return 0;
}
