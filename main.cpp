#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin>>n;
    while(n--){
    string s;

    cin>>s;
    int count=0;
    int freq[26];
    for(int i=0;i<26;i++)
    {

        freq[i]=0;
    }

    for(int i=0;i<s.length();i++)
    {
        freq[s[i]-'a']++;
    }
    for(int i=0;i<26;i++)
    {

        if(freq[i]>0)
        {
            count++;
        }
    }
    if(count==26)
    cout<<count<<" YES"<<endl;
    else
        cout<<count<<" NO"<<endl;
}}
