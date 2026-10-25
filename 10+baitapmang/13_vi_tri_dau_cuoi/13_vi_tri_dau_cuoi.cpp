#include<iostream>
using namespace std;

int A[1000], n;

int timdau(int x){
    int l=0, r=n-1, kq=-1;
    while (l<=r){
        int mid=(l+r)/2;
        if (A[mid] == x){
            kq=mid;
            r=mid-1;
        }
        else if (A[mid]<x) l=mid+1;
        else r=mid-1;
    }
    return kq;
}

int timcuoi(int x){
    int l=0, r=n-1, kq=-1;
    while (l<=r){
        int mid=(l+r)/2;
        if (A[mid] == x){
            kq=mid;
            l=mid+1;
        }
        else if (A[mid]<x) l=mid+1;
        else r=mid-1;
    }
    return kq;
}

int main(){
    cin >> n;
    for (int i=0; i<n; i++){
        cin >> A[i];
    }
    int x;
    cin >> x;
    cout << timdau(x) << " " << timcuoi(x) << endl;
    return 0;
}
