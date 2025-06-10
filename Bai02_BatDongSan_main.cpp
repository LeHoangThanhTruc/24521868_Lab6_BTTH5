#include <bits/stdc++.h>
#include "GiaoDich.h"
#include "GDNP.h"
#include "GDD.h"
#include "GDCHCC.h"
#include "QuanLyGD.h"
using namespace std;

int main()
{
    QuanLyGD q;
    q.NhapDS();
    cout << endl;
    q.XuatDS();
    cout << endl;
    q.TongSoLuongTungLoai();
    cout << endl;
    cout << "Trung binh thanh tien cua giao dich can ho chung cu : " << q.ThanhTienAvgCHCC()<<endl ;
    cout << endl;
    q.MaxThanhTienGDNP();
    cout << endl;
    q.XuatDSTheoDate();
    return 0;
}

/*Mẫu Input và Output
Nhap so luong giao dich : 3
Giao dich thu 1
Chon loai giao dich 1_giao dich dat, 2_giao dich nha pho, 3_giao dich can ho chung cu (nhap 1 hoac 2 hoac 3) : 1
Nhap ma giao dich : MAGD001
Nhap ngay giao dich : 24/12/2024
Nhap don gia : 750000000
Nhap dien tich dat : 120
Nhap loai dat (nhap 'A' hoac 'B' hoac 'C') : A
Giao dich thu 2
Chon loai giao dich 1_giao dich dat, 2_giao dich nha pho, 3_giao dich can ho chung cu (nhap 1 hoac 2 hoac 3) : 2
Nhap ma giao dich : MAGD002
Nhap ngay giao dich : 2/5/2025
Nhap don gia : 1000000000
Nhap dien tich dat : 250
Nhap loai nha (nhap 'cao cap' hoac 'thuong') : cao cap
Nhap dia chi : 25 Khu pho 1 Le Thi Lang
Giao dich thu 3
Chon loai giao dich 1_giao dich dat, 2_giao dich nha pho, 3_giao dich can ho chung cu (nhap 1 hoac 2 hoac 3) : 3
Nhap ma giao dich : MAGD003
Nhap ngay giao dich : 1/1/2024
Nhap don gia : 200000000
Nhap dien tich dat : 111
Nhap ma can : GAMCAU112
Nhap vi tri tang : 12

Ma giao dich : MAGD001
Ngay giao dich : 24/12/2024
Don gia : 7.5e+08
Nhap dien tich dat : 120
Loai dat : A
Thanh tien : 1.35e+11
Ma giao dich : MAGD002
Ngay giao dich : 2/5/2025
Don gia : 1e+09
Nhap dien tich dat : 250
Loai nha : cao cap
Dia chi : 25 Khu pho 1 Le Thi Lang
Thanh tien :2.5e+11
Ma giao dich : MAGD003
Ngay giao dich : 1/1/2024
Don gia : 2e+08
Nhap dien tich dat : 111
Ma can : GAMCAU112
Vi tri tang : 12
Thanh tien : 2.22e+10

So luong giao dich cua loai giao dich dat : 1
So luong giao dich cua loai giao dich nha pho : 1
So luong giao dich cua loai giao dich can ho chung cu : 1

Trung binh thanh tien cua giao dich can ho chung cu : 2.22e+10

Danh sach giao dich nha pho thanh tien cao nhat :
Ma giao dich : MAGD002
Ngay giao dich : 2/5/2025
Don gia : 1e+09
Nhap dien tich dat : 250
Loai nha : cao cap
Dia chi : 25 Khu pho 1 Le Thi Lang
Thanh tien :2.5e+11

Danh sach cac giao dich thang 12 nam 2024
Ma giao dich : MAGD001
Ngay giao dich : 24/12/2024
Don gia : 7.5e+08
Nhap dien tich dat : 120
Loai dat : A
Thanh tien : 1.35e+11
*/
