#ifndef CDIEM_H
#define CDIEM_H

#include <iostream>
#include <cmath> 
using namespace std;

class cDiem {
private:
    float x, y; // tọa độ của điểm
public:
    void Nhap(); // nhập tọa độ điểm
    void Xuat(); // xuất tọa độ điểm
    void TinhTuyen(float a, float b); // tính tuyến tính
    void PhongTo(float k); // phóng to điểm theo tỉ lệ k
    void ThuNho(float k); // thu nhỏ điểm theo tỉ lệ k
    void Quay(float goc); // quay điểm quanh gốc tọa độ theo góc goc

    float GetX() const { return x; } // getter for x
    float GetY() const { return y; } // getter for y
};

#endif // CDIEM_H
