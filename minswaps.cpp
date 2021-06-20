#include<iostream>
#include<algorithm>
#include<vector>
#include<sstream>
using namespace std;
int minswaps(vector<int> a)
{
    int n=a.size();
    pair<int,int> res[n];
    for(int i=0;i<n;i++)
    {
        res[i].first=a[i];
        res[i].second=i;
    } 
    sort(res,res+n);
    vector<bool> visited(n,false);
    int s=0;
    for(int i=0;i<n;i++)
    {
        if(res[i].second==i or visited[i]==true)
        continue;
        else
        {
         int node=i;
         int cycle=0;   
        while(!visited[node])
        {
            visited[node]=true;
            int nextnode=res[node].second;
            cycle++;
            node=nextnode;
        }
        s+=cycle-1;
        }    
    }
    return s;
}
int main()
{
    int r;
    cin>>r;
    cin.ignore();
    cout<<"\n";
    vector<int> a;
    string x;
    getline(cin,x);
    int b;istringstream is(x);
    while(is>>b)
    {
     a.push_back(b);   
    }
    cout<<minswaps(a);
    
}
