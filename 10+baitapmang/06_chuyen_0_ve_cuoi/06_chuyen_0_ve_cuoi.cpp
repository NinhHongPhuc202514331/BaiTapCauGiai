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
    int k=0;
    for (int i=0; i<n; i++){
        if (A[i] != 0){
            A[k]=A[i];
            k++;
        }
    }
    for (int i=k; i<n; i++){
        A[i]=0;
    }
    inmang();
    return 0;
}
