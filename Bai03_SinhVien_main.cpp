#include <bits/stdc++.h>
#include "SinhVien.h"
#include "SVCD.h"
#include "SVDH.h"
#include "QuanLySV.h"
using namespace std;

int main()
{
    QuanLySV q;
    q.NhapDS();
    cout << endl;
    q.XuatDS();
    cout << endl;
    q.XuatDSSVDuDKTN();
    cout << endl;
    q.XuatDSSVKoDuDKTN();
    cout << endl;
    q.MaxDTBSVDH();
    cout << endl;
    q.MaxDTBSVCD();
    cout << endl;
    q.XuatDSSVKoDuDKTNTheoTungLoai();
    return 0;
}
/* Mẫu Input và Output
Nhap so luong sinh vien : 4
Nhap sinh vien thu 1
Nhap loai sinh vien 1_sinh vien cao dang, 2_sinh vien dai hoc (nhap 1 hoac 2) : 1
Nhap ma so sinh vien : 23521001
Nhap ho ten : Ngo Gia Bao
Nhap dia chi : Le Loi Quan 1 TP HCM
Nhap tong so tin chi : 123
Nhap diem trung binh : 7.8
Nhap diem thi tot nghiep : 8.5
Nhap sinh vien thu 2
Nhap loai sinh vien 1_sinh vien cao dang, 2_sinh vien dai hoc (nhap 1 hoac 2) : 1
Nhap ma so sinh vien : 23522002
Nhap ho ten : Le Nguyen Thanh Trieu
Nhap dia chi : 45 Nguyen Hue Quan 3 TP HCM
Nhap tong so tin chi : 145
Nhap diem trung binh : 6.2
Nhap diem thi tot nghiep : 6.8
Nhap sinh vien thu 3
Nhap loai sinh vien 1_sinh vien cao dang, 2_sinh vien dai hoc (nhap 1 hoac 2) : 2
Nhap ma so sinh vien : 24521868
Nhap ho ten : Le Hoang Thanh Truc
Nhap dia chi : 345 Nguyen Chi Thanh
Nhap tong so tin chi : 139
Nhap diem trung binh : 8.5
Nhap ten luan vam : CONG NGHE LAI TU DONG
Nhap diem luan van : 8.0
Nhap sinh vien thu 4
Nhap loai sinh vien 1_sinh vien cao dang, 2_sinh vien dai hoc (nhap 1 hoac 2) : 2
Nhap ma so sinh vien : 22521868
Nhap ho ten : Nguyen Thi Cam Tu
Nhap dia chi : 12A Hung Vuong TP Da Nang
Nhap tong so tin chi : 149
Nhap diem trung binh : 8.1
Nhap ten luan vam : CONG NGHE BAN DAN
Nhap diem luan van : 8.5

Ma so sinh vien : 23521001
Ho ten : Ngo Gia Bao
Dia chi : Le Loi Quan 1 TP HCM
Tong so tin chi : 123
Diem trung binh : 7.8
Diem thi tot nghiep : 8.5
Ma so sinh vien : 23522002
Ho ten : Le Nguyen Thanh Trieu
Dia chi : 45 Nguyen Hue Quan 3 TP HCM
Tong so tin chi : 145
Diem trung binh : 6.2
Diem thi tot nghiep : 6.8
Ma so sinh vien : 24521868
Ho ten : Le Hoang Thanh Truc
Dia chi : 345 Nguyen Chi Thanh
Tong so tin chi : 139
Diem trung binh : 8.5
Ten luan vam : CONG NGHE LAI TU DONG
Diem luan van : 8
Ma so sinh vien : 22521868
Ho ten : Nguyen Thi Cam Tu
Dia chi : 12A Hung Vuong TP Da Nang
Tong so tin chi : 149
Diem trung binh : 8.1
Ten luan vam : CONG NGHE BAN DAN
Diem luan van : 8.5

DANH SACH SINH VIEN DU DIEU KIEN TOT NGHIEP
Ma so sinh vien : 23521001
Ho ten : Ngo Gia Bao
Dia chi : Le Loi Quan 1 TP HCM
Tong so tin chi : 123
Diem trung binh : 7.8
Diem thi tot nghiep : 8.5
Ma so sinh vien : 23522002
Ho ten : Le Nguyen Thanh Trieu
Dia chi : 45 Nguyen Hue Quan 3 TP HCM
Tong so tin chi : 145
Diem trung binh : 6.2
Diem thi tot nghiep : 6.8

DANH SACH SINH VIEN KHONG DU DIEU KIEN TOT NGHIEP
Ma so sinh vien : 24521868
Ho ten : Le Hoang Thanh Truc
Dia chi : 345 Nguyen Chi Thanh
Tong so tin chi : 139
Diem trung binh : 8.5
Ten luan vam : CONG NGHE LAI TU DONG
Diem luan van : 8
Ma so sinh vien : 22521868
Ho ten : Nguyen Thi Cam Tu
Dia chi : 12A Hung Vuong TP Da Nang
Tong so tin chi : 149
Diem trung binh : 8.1
Ten luan vam : CONG NGHE BAN DAN
Diem luan van : 8.5

DANH SACH SINH VIEN DAI HOC CO DIEM TRUNG BINH CAO NHAT
Ma so sinh vien : 24521868
Ho ten : Le Hoang Thanh Truc
Dia chi : 345 Nguyen Chi Thanh
Tong so tin chi : 139
Diem trung binh : 8.5
Ten luan vam : CONG NGHE LAI TU DONG
Diem luan van : 8

DANH SACH SINH VIEN CAO DANG CO DIEM TRUNG BINH CAO NHAT
Ma so sinh vien : 23521001
Ho ten : Ngo Gia Bao
Dia chi : Le Loi Quan 1 TP HCM
Tong so tin chi : 123
Diem trung binh : 7.8
Diem thi tot nghiep : 8.5

DANH SACH SINH VIEN CAO DANG KHONG DU DIEU KIEN TOT NGHIEP
Khong co sinh vien cao dang khong du dieu kien tot nghiep
DANH SACH SINH VIEN DAI HOC KHONG DU DIEU KIEN TOT NGHIEP
Ma so sinh vien : 24521868
Ho ten : Le Hoang Thanh Truc
Dia chi : 345 Nguyen Chi Thanh
Tong so tin chi : 139
Diem trung binh : 8.5
Ten luan vam : CONG NGHE LAI TU DONG
Diem luan van : 8
Ma so sinh vien : 22521868
Ho ten : Nguyen Thi Cam Tu
Dia chi : 12A Hung Vuong TP Da Nang
Tong so tin chi : 149
Diem trung binh : 8.1
Ten luan vam : CONG NGHE BAN DAN
Diem luan van : 8.5
*/
