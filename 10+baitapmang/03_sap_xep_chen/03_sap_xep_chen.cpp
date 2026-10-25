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
    for (int i=1; i<n; i++){
        int x=A[i], j=i-1;
        while (j>=0 && A[j]>x){
            A[j+1]=A[j];
            j--;
        }
        A[j+1]=x;
    }
    inmang();
    return 0;
}
