#include<bits/stdc++.h>
#define ll long long int
#define nl "\n"
#define yes cout<<"YES"<<nl;
#define no cout<<"NO"<<nl;
#define s(a) (int)a.size();
#define all(v)   v.begin(), v.end()
#define rall(v)  v.rbegin(),v.rend()
#define pb  push_back
#define MOD 1000000007
#define f(s,e,i) for(i=s;i<e;i++)
#define fd(s,e,i,d) for(i=s;i<e;i+=d)
using namespace std;


int binarySearch(const vector<int>& array, int target) {
    int low = 0;
    int high = array.size() - 1;
    
    while (low <= high) {
        int mid = low + (high - low) / 2;
        
        if (array[mid] == target) {
            return mid;  // Found the target
        }
        else if (array[mid] > target) {
            high = mid - 1;  // Focus on the left half
        }
        else {
            low = mid + 1;  // Focus on the right half
        }
    }
    
    return -1;  // Target not found
}



int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int size;cin>>size;
    vector<int>array(size);
    for(int i=0;i<size;i++){
        cin>>array[i];
    }

    int target;cin>>target;
    int result = binarySearch(array, target);
    
    if (result != -1) {
        cout << "Found the target at index " << result << endl;
    } else {
        cout << -1 << endl;
    }
    return 0;
}