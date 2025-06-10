#include "GDCHCC.h"
#include "GiaoDich.h"
#include <bits/stdc++.h>
using namespace std;
GDCHCC::GDCHCC(string maGD,string ngayGD,double donGia, double DienTich, int ngay, int thang , int nam,string maCan, int vTT):
    GiaoDich(maGD, ngayGD, donGia,DienTich,ngay,thang,nam),maCan(maCan),vTT(vTT){}
void GDCHCC::Nhap(){
    GiaoDich::Nhap();
    cout << "Nhap ma can : ";
    getline(cin>>ws,maCan);
    cout << "Nhap vi tri tang : "; cin >> vTT;
}
void GDCHCC::Xuat(){
    GiaoDich::Xuat();
    cout << "Ma can : " << maCan <<endl;
    cout << "Vi tri tang : " << vTT << endl;
    cout << "Thanh tien : " << ThanhTien() << endl;
}
double GDCHCC::ThanhTien(){
    if(vTT==1) return DienTich*donGia*2;
    else if (vTT>=15) return DienTich*donGia*1.2;
    else return DienTich*donGia;
}
GDCHCC::~GDCHCC(){}
