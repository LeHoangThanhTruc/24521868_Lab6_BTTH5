#include "SVDH.h"
#include "SinhVien.h"
#include <bits/stdc++.h>
using namespace std;
SVDH::SVDH(string mssv, string hoTen, string diaChi,int tstc,double dtb, string tenLV, double diemLV):
    SinhVien(mssv,hoTen,diaChi,tstc,dtb),tenLV(tenLV),diemLV(diemLV){}
void SVDH::Nhap(){
    SinhVien::Nhap();
    cout << "Nhap ten luan vam : ";
    getline(cin>>ws,tenLV);
    cout << "Nhap diem luan van : ";cin>>diemLV;
}
void SVDH::Xuat(){
    SinhVien::Xuat();
    cout << "Ten luan vam : "<< tenLV << endl;
    cout << "Diem luan van : " << diemLV << endl;
}
bool SVDH::XetTN(){
    if(tstc>=170 && dtb>=5 && diemLV>=5) return true;
    else return false;
}
SVDH::~SVDH(){}
