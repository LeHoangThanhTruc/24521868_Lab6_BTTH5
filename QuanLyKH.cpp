#include "QuanLyKH.h"
#include "KhachHang.h"
#include "LoaiA.h"
#include "LoaiB.h"
#include "LoaiC.h"
#include <bits/stdc++.h>
using namespace std;
QuanLyKH::QuanLyKH(){
    n = x = y = z = 0;
    kh = nullptr;
}
void QuanLyKH::NhapDS(){
    cin >> x >> y >> z;
    n = x+y+z;
    kh = new KhachHang*[n];
    for(int i = 0; i < x; i++){
        kh[i] = new LoaiA();
        kh[i]->Nhap();
    }
    for(int i = x; i < (x+y); i++){
        kh[i] = new LoaiB();
        kh[i]->Nhap();
    }
    for(int i = (x+y); i < (x+y+z); i++){
        kh[i] = new LoaiC();
        kh[i]->Nhap();
    }
}
void QuanLyKH::XuatDS(){
    cout << x << " " << y << " " << z << endl;
    for(int i = 0; i < n; i++){
        kh[i]->Xuat();
    }
}
void QuanLyKH::TongSoTienThuDuoc(){
    double tong = 0.0;
    for(int i = 0; i<n; i++){
        tong += kh[i]->SoTienKhachTra();
    }
    cout << fixed << setprecision(0)<< tong << endl;
}
QuanLyKH::~QuanLyKH(){
    for(int i = 0; i < n; i++){
        delete kh[i];
    }
    delete[] kh;
}
