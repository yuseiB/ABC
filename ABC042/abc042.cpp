#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;
int a(){
    int v1,v2,v3;
    cin>>v1>>v2>>v3;
    if (v1==7 && v2==5 && v3==5){
        cout<<"YES"<<endl;
    } else if (v1==5 && v2==7 && v3==5){
        cout<<"YES"<<endl;
    } else if (v1==5 && v2==5 && v3==7){
        cout<<"YES"<<endl;
    } else {
        cout<<"NO"<<endl;
    }
    return 0;
}

int b(){
    int N,L;
    cin>>N>>L;
    vector<string> ws;
    int i=0;
    while(i<N){
        string w;
        cin>>w;
        ws.push_back(w);
        ++i;
    }
    sort(ws.begin(),ws.end());
    string ans="";
    for (const string s: ws){
        ans+=s;
    }
    cout<<ans<<endl;
    return 0;

}

2
int main(){
    b();
}