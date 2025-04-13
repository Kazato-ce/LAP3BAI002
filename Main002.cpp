#include "cDaGiac.h"
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    cDaGiac daGiac;
    daGiac.Nhap(); // Nhập tọa độ các đỉnh của đa giác
    cout << "Toa do cac dinh da giac: " << endl;
    daGiac.Xuat(); // Xuất tọa độ các đỉnh của đa giác
    cout << "Chu vi da giac: " << daGiac.TinhChuVi() << endl; // Tính chu vi đa giác
    cout << "Dien tich da giac: " << daGiac.TinhDienTich() << endl; // Tính diện tích đa giác
    cout << "Nhap he so tuyen tinh a, b: ";
    float a, b;
    cin >> a >> b;
    daGiac.TinhTuyen(a, b); // Tính tuyến tính cho tất cả các đỉnh
    cout << "Toa do cac dinh da giac sau khi tinh tuyen: " << endl;
    daGiac.Xuat(); // Xuất tọa độ các đỉnh sau khi tính tuyến tính
    cout << "Nhap he so phong to k: ";
    float k;
    cin >> k;
    daGiac.PhongTo(k); // Phóng to đa giác theo tỉ lệ k
    cout << "Toa do cac dinh da giac sau khi phong to: " << endl;
    daGiac.Xuat(); // Xuất tọa độ các đỉnh sau khi phóng to
    cout << "Nhap he so thu nho k: ";
    cin >> k;
    daGiac.ThuNho(k); // Thu nhỏ đa giác theo tỉ lệ k
    cout << "Toa do cac dinh da giac sau khi thu nho: " << endl;
    daGiac.Xuat(); // Xuất tọa độ các đỉnh sau khi thu nhỏ
    cout << "Nhap goc quay: ";
    float goc;
    cin >> goc;
    daGiac.Quay(goc); // Quay đa giác quanh gốc tọa độ theo góc goc
    cout << "Toa do cac dinh da giac sau khi quay: " << endl;
    daGiac.Xuat(); // Xuất tọa độ các đỉnh sau khi quay
    return 0;
}