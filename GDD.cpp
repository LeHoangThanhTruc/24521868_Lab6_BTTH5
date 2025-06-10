#include "GDD.h"
#include "GiaoDich.h"
#include <bits/stdc++.h>
using namespace std;
GDD::GDD(string maGD,string ngayGD,double donGia, double DienTich, int ngay, int thang , int nam, string loaiDat):
    GiaoDich(maGD, ngayGD, donGia,DienTich,ngay,thang,nam),loaiDat(loaiDat){}
void GDD::Nhap(){
    GiaoDich::Nhap();
    cout << "Nhap loai dat (nhap 'A' hoac 'B' hoac 'C') : ";cin>>loaiDat;
}
double GDD::ThanhTien(){
    if(loaiDat=="A"){
        return DienTich*donGia*1.5;
    }
    else if(loaiDat=="B" || loaiDat=="C"){
        return DienTich*donGia;
    }
}
void GDD::Xuat(){
    GiaoDich::Xuat();
    cout << "Loai dat : " << loaiDat << endl;
    cout << "Thanh tien : " << ThanhTien() << endl;
}
GDD::~GDD(){}
