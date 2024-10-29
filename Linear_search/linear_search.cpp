#include<bits/stdc++.h>
#define ll long long int
#define nl "\n"
#define MOD 1000000007
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int size;cin>>size;
    vector<int>array(size);
    for(int i=0;i<size;i++){
        cin>>array[i];
    }

    int target;cin>>target;
    bool found = false;
    for(int i=0;i<size;i++){
        if(array[i]==target){
            cout<<"Found the target at index "<<i<<endl;
            found = true;
            break;
        }
    }

    if(!found)cout<<-1;


    return 0;
}