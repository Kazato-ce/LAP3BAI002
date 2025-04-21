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
    void Nhap(){
        cout << "Nhap so dinh cua da giac: ";
        cin >> n; // nhập số lượng đỉnh
        arr = new cDiem[n]; // cấp phát bộ nhớ cho mảng mới
        for (int i = 0; i < n; i++) {
            cout << "Nhap dinh thu " << i + 1 << ": " << endl;
            arr[i].Nhap(); // nhập tọa độ cho từng đỉnh
        }
    }
    void Xuat(){
        cout << "Da giac co " << n << " dinh: " << endl;
        for (int i = 0; i < n; i++) {
            arr[i].Xuat(); // xuất tọa độ của từng đỉnh
        }
    }
    float KhoangCach(const cDiem &a, const cDiem &b){
        return sqrt(pow(b.GetX() - a.GetX(), 2) + pow(b.GetY() - a.GetY(), 2)); // tính khoảng cách giữa hai điểm
    }
    float TinhChuVi(){
        float chuVi = 0; // khởi tạo chu vi bằng 0
        for (int i = 0; i < n; i++) {
            chuVi += KhoangCach(arr[i], arr[(i + 1) % n]); // tính chu vi bằng cách cộng khoảng cách giữa các đỉnh
        }
        return chuVi; // trả về chu vi
    }
    float TinhDienTich(){
        float dienTich = 0; // khởi tạo diện tích bằng 0
        for (int i = 0; i < n; i++) {
            dienTich += arr[i].GetX() * arr[(i + 1) % n].GetY() - arr[(i + 1) % n].GetX() * arr[i].GetY(); // tính diện tích theo công thức Shoelace
        }
        return abs(dienTich) / 2; // trả về diện tích tuyệt đối chia cho 2
    }
    void TinhTuyen(float a, float b){
        for (int i = 0; i < n; i++) {
            arr[i].TinhTuyen(a, b); // tính tuyến tính cho từng đỉnh
        }
    }
    void PhongTo(float k){
        for (int i = 0; i < n; i++) {
            arr[i].PhongTo(k); // phóng to từng đỉnh theo tỉ lệ k
        }
    }
    void ThuNho(float k){
        for (int i = 0; i < n; i++) {
            arr[i].ThuNho(k); // thu nhỏ từng đỉnh theo tỉ lệ k
        }
    }
    void Quay(float goc){
        for (int i = 0; i < n; i++) {
            arr[i].Quay(goc); // quay từng đỉnh theo góc goc
        }
    }
};
