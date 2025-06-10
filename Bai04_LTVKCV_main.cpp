#include <bits/stdc++.h>
#include "QuanLyLTVKCV.h"
#include "NhanVien.h"
#include "LTV.h"
#include "KCV.h"
using namespace std;

int main()
{
    QuanLyLTVKCV q;
    q.NhapDS();
    cout << endl;
    q.XuatDS();
    cout << endl;
    q.XuatDSNVLgThapHonAvg();
    cout << endl;
    q.NVMaxLg();
    cout << endl;
    q.NVMinLg();
    cout << endl;
    q.LTVMaxLg();
    cout << endl;
    q.KCVMinLg();
    return 0;
}
/* Mẫu Input và Output
Nhap so luong nhan vien : 4
Nhan vien thu 1
Chon loai nhan vien 1-lap trinh vien, 2-kiem chung vien : 1
Nhap ma nhan vien : NV001
Nhap ho va ten : Pham The Anh
Nhap tuoi : 34
Nhan sdt : 0981243891
Nhap email : TheAnh@gmail.com
Nhap luong can ban : 200000
Nhap so gio lam them : 2
Nhan vien thu 2
Chon loai nhan vien 1-lap trinh vien, 2-kiem chung vien : 2
Nhap ma nhan vien : NV002
Nhap ho va ten : Tran Quoc Tuan
Nhap tuoi : 25
Nhan sdt : 0981235321
Nhap email : QuocTuan@gmail.com
Nhap luong can ban : 120000
Nhap so loi phat hien duoc : 25
Nhan vien thu 3
Chon loai nhan vien 1-lap trinh vien, 2-kiem chung vien : 1
Nhap ma nhan vien : NV003
Nhap ho va ten : Nguyen Anh Dao
Nhap tuoi : 21
Nhan sdt : 0234719812
Nhap email : AnhDao@gmail.com
Nhap luong can ban : 150000
Nhap so gio lam them : 2.5
Nhan vien thu 4
Chon loai nhan vien 1-lap trinh vien, 2-kiem chung vien : 2
Nhap ma nhan vien : NV004
Nhap ho va ten : Le Ngoc Anh
Nhap tuoi : 33
Nhan sdt : 0751976329
Nhap email : NgocAnh@gmail.com
Nhap luong can ban : 90000
Nhap so loi phat hien duoc : 16

Ma nhan vien : NV001
Ho va ten : Pham The Anh
Tuoi : 34
Sdt : 981243891
Email : TheAnh@gmail.com
Luong can ban : 200000
So gio lam them : 2
Luong hang thang  : 600000
Ma nhan vien : NV002
Ho va ten : Tran Quoc Tuan
Tuoi : 25
Sdt : 981235321
Email : QuocTuan@gmail.com
Luong can ban : 120000
So loi phat hien duoc : 25
Luong hang thang  : 1.37e+06
Ma nhan vien : NV003
Ho va ten : Nguyen Anh Dao
Tuoi : 21
Sdt : 234719812
Email : AnhDao@gmail.com
Luong can ban : 150000
So gio lam them : 2.5
Luong hang thang  : 650000
Ma nhan vien : NV004
Ho va ten : Le Ngoc Anh
Tuoi : 33
Sdt : 751976329
Email : NgocAnh@gmail.com
Luong can ban : 90000
So loi phat hien duoc : 16
Luong hang thang  : 890000

DANH SACH NHAN VIEN CO LUONG THAP HON MUC LUONG TRUNG BINH
Ma nhan vien : NV001
Ho va ten : Pham The Anh
Tuoi : 34
Sdt : 981243891
Email : TheAnh@gmail.com
Luong can ban : 200000
So gio lam them : 2
Luong hang thang  : 600000
Ma nhan vien : NV003
Ho va ten : Nguyen Anh Dao
Tuoi : 21
Sdt : 234719812
Email : AnhDao@gmail.com
Luong can ban : 150000
So gio lam them : 2.5
Luong hang thang  : 650000

DANH SACH NHAN VIEN CO LUONG CAO NHAT
Ma nhan vien : NV002
Ho va ten : Tran Quoc Tuan
Tuoi : 25
Sdt : 981235321
Email : QuocTuan@gmail.com
Luong can ban : 120000
So loi phat hien duoc : 25
Luong hang thang  : 1.37e+06

DANH SACH NHAN VIEN CO LUONG THAP NHAT
Ma nhan vien : NV001
Ho va ten : Pham The Anh
Tuoi : 34
Sdt : 981243891
Email : TheAnh@gmail.com
Luong can ban : 200000
So gio lam them : 2
Luong hang thang  : 600000

DANH SACH LAP TRINH VIEN CO LUONG CAO NHAT
Ma nhan vien : NV003
Ho va ten : Nguyen Anh Dao
Tuoi : 21
Sdt : 234719812
Email : AnhDao@gmail.com
Luong can ban : 150000
So gio lam them : 2.5
Luong hang thang  : 650000

DANH SACH KIEM CHUNG VIEN CO LUONG THAP NHAT
Ma nhan vien : NV004
Ho va ten : Le Ngoc Anh
Tuoi : 33
Sdt : 751976329
Email : NgocAnh@gmail.com
Luong can ban : 90000
So loi phat hien duoc : 16
Luong hang thang  : 890000
*/
