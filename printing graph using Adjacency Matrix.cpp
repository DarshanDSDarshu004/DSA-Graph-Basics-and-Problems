#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    cout<<"Enter the number of vertcices and edges \n";
    int v,e;
    cin>>v>>e;
    vector<vector<int>>adj(v,vector<int>(v,0));
    
    cout<<"Enter the edges\n";
    for(int i=0;i<e;i++){
        int a,b;
        cin>>a>>b;
        a--;
        b--;
        adj[a][b]=1;
        adj[b][a]=1;
    }
    
    
    cout<<"Adjacency Matrix is\n";
    for(int i=0;i<v;i++){
        for(int j=0;j<v;j++){
            cout<<adj[i][j]<<" ";
            
        }
        cout<<endl;
    }
    

    return 0;
}
