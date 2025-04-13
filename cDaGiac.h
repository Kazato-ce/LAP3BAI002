#include "cDiem.h"
#include <iostream>
#include <cmath>
using namespace std;
class cDaGiac {
private:
    cDiem* arr; // mảng chứa các đỉnh của đa giác
    int n; // số lượng đỉnh của đa giác
public:
    cDaGiac(int n = 3) : n(n) { // khởi tạo đa giác với n đỉnh
        arr = new cDiem[n]; // cấp phát bộ nhớ cho mảng
    }
    ~cDaGiac() { // hủy cấp phát bộ nhớ
        delete[] arr;
    }
    void Nhap(); // nhập tọa độ các đỉnh của đa giác
    void Xuat(); // xuất tọa độ các đỉnh của đa giác
    float KhoangCach(const cDiem &a, const cDiem &b); // tính khoảng cách giữa 2 đỉnh
    float TinhChuVi(); // tính chu vi đa giác
    float TinhDienTich(); // tính diện tích đa giác
    void TinhTuyen(float a, float b); // tính tuyến tính cho tất cả các đỉnh
    void PhongTo(float k); // phóng to đa giác theo tỉ lệ k
    void ThuNho(float k); // thu nhỏ đa giác theo tỉ lệ k
    void Quay(float goc); // quay đa giác quanh gốc tọa độ theo góc goc
};