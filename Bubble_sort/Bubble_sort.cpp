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


void bubbleSort(vector<int>& array) {
    int n = array.size();
    bool swapped;

    for (int i = 0; i < n - 1; i++) {
        swapped = false;

        for (int j = 0; j < n - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                swap(array[j], array[j + 1]);
                swapped = true;
            }
        }

        // If no elements were swapped, the array is already sorted
        if (!swapped) break;
    }
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int size;cin>>size;
    vector<int>arr(size);
    for(int i=0;i<size;i++)cin>>arr[i];
    bubbleSort(arr);
    cout<<"Sorted array: ";
    for(int i=0;i<size;i++)cout<<arr[i]<<" ";
    
    return 0;
}