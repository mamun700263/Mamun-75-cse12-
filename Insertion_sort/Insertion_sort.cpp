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

void insertion(int *array,int size){
for (int i = 1; i < size; i++) {
    int key = array[i];
    int j = i - 1;

    // Shift elements of the sorted portion that are greater than the key
    while (j >= 0 && array[j] > key) {
        array[j + 1] = array[j];
        j = j - 1;
    }
    array[j + 1] = key;
}
return;
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int size;cin>>size;
    int arr[size];
    for(int i=0;i<size;i++)cin>>arr[i];

    insertion(arr,size);
    // Output the sorted array
for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
}
    
    return 0;
}