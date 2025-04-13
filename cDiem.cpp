#include "cDiem.h"
#include <iostream>
#include <cmath>
using namespace std;

void cDiem::Nhap() {
    cout << "Nhap toa do x: ";
    cin >> x;
    cout << "Nhap toa do y: ";
    cin >> y;
}

void cDiem::Xuat() {
    cout << "Toa do diem: (" << x << ", " << y << ")" << endl;
}

void cDiem::TinhTuyen(float a, float b) {
    x += a;
    y += b;
}

void cDiem::PhongTo(float k) {
    if (k > 0) {
        x *= k;
        y *= k;
    }
}

void cDiem::ThuNho(float k) {
    if (k > 0) {
        x /= k;
        y /= k;
    }
}

void cDiem::Quay(float goc) {
    float rad = goc * M_PI / 180.0; // convert degrees to radians
    float x_new = x * cos(rad) - y * sin(rad);
    float y_new = x * sin(rad) + y * cos(rad);
    x = x_new;
    y = y_new;
}