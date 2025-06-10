#include "NVSX.h"
#include "NV.h"
#include <bits/stdc++.h>
using namespace std;
NVSX::NVSX(string hT, string nS,double lg, long long ngy,long long thg,long long nm,double luongCB,long long soSP):
        NV(hT,nS,lg,ngy,thg,nm),luongCB(luongCB),soSP(soSP){}
void NVSX::Nhap(){
    NV::Nhap();
    cout << "Nhap luong can ban : "; cin >> luongCB;
    cout << "Nhap so san pham : "; cin >> soSP;
}
double NVSX::TinhLuong(){
    lg = luongCB+soSP*5000;
    return lg;
}
void NVSX::Xuat(){
    NV::Xuat();
    cout << "Luong : "  << TinhLuong() << endl;
}
NVSX::~NVSX(){}
