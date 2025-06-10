#include "NVVP.h"
#include "NV.h"
#include <bits/stdc++.h>
using namespace std;
NVVP::NVVP(string hT, string nS,double lg, long long ngy,long long thg,long long nm, double soNgayLV):
        NV(hT,nS,lg,ngy,thg,nm),soNgayLV(soNgayLV){}
void NVVP::Nhap(){
    NV::Nhap();
    cout << "Nhap so ngay lam viec : "; cin >> soNgayLV;
}
double NVVP::TinhLuong() {
    lg = soNgayLV*100000;
    return lg;
}
void NVVP::Xuat(){
    NV::Xuat();
    cout << "Luong : "  << TinhLuong() << endl;
}
NVVP::~NVVP(){}
