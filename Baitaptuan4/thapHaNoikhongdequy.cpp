#include <iostream>
using namespace std;

// Bai tap tuan 4 mon CTDL
struct TrangThaiDia {
    int so_dia;
    char cot_dau, cot_giua, cot_cuoi;
};
const int MAX = 500;
TrangThaiDia s[MAX];
int top = -1;
void push_dia(int dia, char dau, char giua, char cuoi) {
    if (top >= MAX - 1) {
        cout << "Tran stack roi!\n";
        return;
    }
    top++;
    s[top].so_dia = dia;
    s[top].cot_dau = dau;
    s[top].cot_giua = giua;
    s[top].cot_cuoi = cuoi;
}
TrangThaiDia pop_dia() {
    return s[top--];
}
void khuDeQuy(int tong_dia, char c_dau, char c_phu, char c_dich) {
    if (tong_dia <= 0) {
        cout << "So dia khong hop le!\n";
        return;
    }
    top = -1;
    int dem = 0;
    push_dia(tong_dia, c_dau, c_phu, c_dich);

    while (top >= 0) {
        TrangThaiDia cur = pop_dia();
        
        if (cur.so_dia == 1) {
            dem++;
            cout << "Buoc " << dem << ": Chuyen tu " << cur.cot_dau << " -> " << cur.cot_cuoi << endl;
        } 
        else {
            push_dia(cur.so_dia - 1, cur.cot_giua, cur.cot_dau, cur.cot_cuoi);
            push_dia(1, cur.cot_dau, cur.cot_giua, cur.cot_cuoi);
            push_dia(cur.so_dia - 1, cur.cot_dau, cur.cot_cuoi, cur.cot_giua);
        }
    }
    cout << "Tong cong: " << dem << " buoc\n";
}
int main() {
    int n;
    cout << "Nhap so dia: ";
    cin >> n;
    khuDeQuy(n, 'A', 'B', 'C');
    return 0;
}