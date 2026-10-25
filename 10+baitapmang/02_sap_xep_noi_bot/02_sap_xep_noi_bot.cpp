#include<iostream>
using namespace std;

int A[1000], n;

void swap(int &a, int &b){
    int temp=a;
    a=b;
    b=temp;
}

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
    for (int i=0; i<n-1; i++){
        bool doi=false;
        for (int j=0; j<n-i-1; j++){
            if (A[j]>A[j+1]){
                swap(A[j], A[j+1]);
                doi=true;
            }
        }
        if (doi == false) break;
    }
    inmang();
    return 0;
}
