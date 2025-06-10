#include "KhachHang.h"
#include <bits/stdc++.h>
using namespace std;
KhachHang::KhachHang(string hoTen,int soLuong,double donGia):
    hoTen{hoTen},soLuong(soLuong),donGia(donGia){}
void KhachHang::Nhap(){
    getline(cin>>ws,hoTen);
    cin >> soLuong;
    cin>>donGia;
}
void KhachHang::Xuat(){
    cout << hoTen << endl;
}
KhachHang::~KhachHang(){}
