#include<iostream>
using namespace std;

int A[1000], n;

void inmang(){
    for (int i=0; i<n; i++){
        cout << A[i] << (i == n-1 ? "" : " ");
    }
    cout << endl;
}

int main(){
    cin >> n;
    for (int i=0; i<n; i++){
        cin >> A[i];
    }
    int dem0=0;
    for (int i=0; i<n; i++){
        if (A[i] == 0) dem0++;
    }
    for (int i=0; i<n; i++){
        if (i<dem0) A[i]=0;
        else A[i]=1;
    }
    inmang();
    return 0;
}
