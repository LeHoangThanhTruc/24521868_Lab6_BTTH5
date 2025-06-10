#include "GDNP.h"
#include "GiaoDich.h"
#include <bits/stdc++.h>
using namespace std;
GDNP::GDNP(string maGD,string ngayGD,double donGia, double DienTich, int ngay, int thang , int nam,string loaiNha,string diaChi):
    GiaoDich(maGD, ngayGD, donGia,DienTich,ngay,thang,nam),loaiNha(loaiNha),diaChi(diaChi){}
void GDNP::Nhap(){
    GiaoDich::Nhap();
    cout << "Nhap loai nha (nhap 'cao cap' hoac 'thuong') : ";
    getline(cin>>ws,loaiNha);
    cout << "Nhap dia chi : ";
    getline(cin>>ws,diaChi);
}
double GDNP::ThanhTien(){
    if(loaiNha == "cao cap") return DienTich*donGia;
    else if(loaiNha=="thuong") return DienTich*donGia*1.5;
}
void GDNP::Xuat(){
    GiaoDich::Xuat();
    cout << "Loai nha : " << loaiNha << endl;
    cout << "Dia chi : " << diaChi << endl;
    cout << "Thanh tien :" << ThanhTien() << endl;
}
GDNP::~GDNP(){}
