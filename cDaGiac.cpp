#include "cDaGiac.h"
using namespace std;
void cDaGiac::Nhap() {
    cout << "Nhap so dinh cua da giac: ";
    cin >> n;
    arr = new cDiem[n]; // cấp phát bộ nhớ cho mảng
    for (int i = 0; i < n; i++) {
        cout << "Nhap toa do dinh " << i + 1 << ": " << endl;
        arr[i].Nhap();
    }
}
void cDaGiac::Xuat() {
    for (int i = 0; i < n; i++) {
        cout << "Toa do dinh " << i + 1 << ": ";
        arr[i].Xuat();
    }
}
float cDaGiac::KhoangCach(const cDiem &a, const cDiem &b) {
    return sqrt(pow(a.GetX() - b.GetX(), 2) + pow(a.GetY() - b.GetY(), 2));
}
float cDaGiac::TinhChuVi() {
    float chuVi = 0;
    for (int i = 0; i < n; i++) {
        chuVi += KhoangCach(arr[i], arr[(i + 1) % n]); // tính khoảng cách giữa đỉnh i và đỉnh tiếp theo
    }
    return chuVi;
}
float cDaGiac::TinhDienTich() {
    float dienTich = 0;
    for (int i = 0; i < n; i++) {
        dienTich += arr[i].GetX() * arr[(i + 1) % n].GetY() - arr[(i + 1) % n].GetX() * arr[i].GetY();
    }
    return abs(dienTich) / 2;
}
void cDaGiac::TinhTuyen(float a, float b) {
    for (int i = 0; i < n; i++) {
        arr[i].TinhTuyen(a, b);
    }
}
void cDaGiac::PhongTo(float k) {
    for (int i = 0; i < n; i++) {
        arr[i].PhongTo(k);
    }
}
void cDaGiac::ThuNho(float k) {
    for (int i = 0; i < n; i++) {
        arr[i].ThuNho(k);
    }
}
void cDaGiac::Quay(float goc) {
    for (int i = 0; i < n; i++) {
        arr[i].Quay(goc);
    }
}
