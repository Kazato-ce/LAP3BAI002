#ifndef CDIEM_H
#define CDIEM_H

#include <iostream>
#include <cmath> 
using namespace std;

class cDiem 
{
private:
    float x, y; // tọa độ của điểm
public:
    void Nhap(){
        cout << "Nhap toa do x: ";
        cin >> x; // nhập tọa độ x
        cout << "Nhap toa do y: ";
        cin >> y; // nhập tọa độ y
    }
    void Xuat(){
        cout << "(" << x << ", " << y << ")" << endl; // xuất tọa độ điểm
    }
    void TinhTuyen(float a, float b){
        x = a * x + b; // tính tuyến tính cho tọa độ x
        y = a * y + b; // tính tuyến tính cho tọa độ y
    }
    void PhongTo(float k){
        x *= k; // phóng to tọa độ x theo tỉ lệ k
        y *= k; // phóng to tọa độ y theo tỉ lệ k
    }
    void ThuNho(float k){
        x /= k; // thu nhỏ tọa độ x theo tỉ lệ k
        y /= k; // thu nhỏ tọa độ y theo tỉ lệ k
    }
    void Quay(float goc){
        float radian = goc * M_PI / 180; // chuyển đổi góc sang radian
        float x1 = x * cos(radian) - y * sin(radian); // tính tọa độ x sau khi quay
        float y1 = x * sin(radian) + y * cos(radian); // tính tọa độ y sau khi quay
        x = x1; // cập nhật tọa độ x
        y = y1; // cập nhật tọa độ y
    }
    float GetX() const { return x; } // lấy tọa độ x
    float GetY() const { return y; } // lấy tọa độ y
};

#endif // CDIEM_H
