#include "SVCD.h"
#include "SinhVien.h"
#include <bits/stdc++.h>
using namespace std;
SVCD::SVCD(string mssv, string hoTen, string diaChi,int tstc,double dtb, double diemThiTN):
    SinhVien(mssv,hoTen,diaChi,tstc,dtb),diemThiTN(diemThiTN){}
void SVCD::Nhap(){
    SinhVien::Nhap();
    cout << "Nhap diem thi tot nghiep : "; cin>>diemThiTN;
}
void SVCD::Xuat(){
    SinhVien::Xuat();
    cout << "Diem thi tot nghiep : " << diemThiTN << endl;
}
bool SVCD::XetTN(){
    if(tstc>=120 && dtb>=5 && diemThiTN>=5) return true;
    else return false;
}
SVCD::~SVCD(){}
