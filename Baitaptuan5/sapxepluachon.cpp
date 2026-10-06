#include<iostream>
using namespace std;

int A[1000], n;

void swap(int &a, int &b){
    int temp=a;
    a=b;
    b=temp;
}

void inmang(){
    for (int i = 0; i<n; i++){
        cout << A[i] << (i == n-1 ? "" : " ");
    }
    cout << endl;
}

int main(){
    while (cin>>A[n]){
        n++;
        if (cin.get() == '\n') break;
    }
    for (int i=0; i<n; i++){
        int j=i;
        while (j >0 && A[j]<A[j-1]){
            swap(A[j], A[j-1]);
            j--;
        }
        inmang();
    }
    return 0;
}