#include "GiaoDich.h"
#include <bits/stdc++.h>
using namespace std;
GiaoDich::GiaoDich(string maGD ,string ngayGD,double donGia, double DienTich,int ngay, int thang, int nam):
    maGD(maGD),ngayGD(ngayGD),donGia(donGia),DienTich(DienTich),ngay(ngay),thang(thang),nam(nam){}
void GiaoDich::Nhap(){
    cout << "Nhap ma giao dich : ";
    getline(cin>>ws,maGD);
    cout << "Nhap ngay giao dich : ";
    getline(cin>>ws,ngayGD);
    cout << "Nhap don gia : "; cin >> donGia;
    cout << "Nhap dien tich dat : "; cin >> DienTich;
    Tach(ngayGD, ngay, thang, nam);
}
void GiaoDich::Xuat(){
    cout << "Ma giao dich : " << maGD << endl;
    cout << "Ngay giao dich : " << ngayGD<<endl;
    cout << "Don gia : " << donGia << endl;
    cout << "Nhap dien tich dat : " << DienTich << endl;
}
void GiaoDich::Tach(string& ngayGD,int& ngay, int& thang, int& nam){
    stringstream ss(ngayGD);
    string date;
    int i = 0;
    while(getline(ss,date,'/')){
        if(i==0) ngay = stoi(date);
        else if(i==1) thang = stoi(date);
        else if(i==2) nam = stoi(date);
        i++;
    }
}
bool GiaoDich::TimKiem(int thangYeuCau, int namYeuCau){
    return (thang==thangYeuCau && nam==namYeuCau);
}
GiaoDich::~GiaoDich(){}
