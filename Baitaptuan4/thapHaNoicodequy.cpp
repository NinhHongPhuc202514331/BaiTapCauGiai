#include <iostream>
using namespace std;

int stt = 0;
void giaiThap(int soDia, char cot_goc, char cot_trung_gian, char cot_dich) {
    if (soDia <= 0) {
        return;
    }
    if (soDia == 1) {
        stt++;
        cout << stt << ". Chuyen dia 1: " << cot_goc << " -> " << cot_dich << endl;
        return;
    }
    giaiThap(soDia - 1, cot_goc, cot_dich, cot_trung_gian);
    stt++;
    cout << stt << ". Chuyen dia " << soDia << ": " << cot_goc << " -> " << cot_dich << endl;
    giaiThap(soDia - 1, cot_trung_gian, cot_goc, cot_dich);
}

int main() {
    int n;
    cout << "Nhap so dia: ";
    cin >> n;
    giaiThap(n, 'A', 'B', 'C');
    return 0;
}