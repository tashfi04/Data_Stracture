#include <bits/stdc++.h>

using namespace std;

void delete_(string main_str, int pos, int len)
{
    main_str=main_str.substr(0, pos)+main_str.substr(pos+len, main_str.size());
    cout<<"New string"<<endl;
    cout<<main_str<<endl;
}

int main()
{
    string main_str;
    int pos, len;

    cout<<"Enter the main string:"<<endl;
    cin>>main_str;
    cout<<"Enter the position from where you want to delete the substring:"<<endl;
    cin>>pos;
    cout<<"Enter the length of the substring you want to delete:"<<endl;
    cin>>len;

    delete_(main_str, pos, len);

    return 0;
}
