/*
==============================================================================================
Đây là chương trình quản lý sinh viên bằng C++. Trong quá trình thực hiện, tôi sử dụng ChatGPT
để hỗ trợ phân tích, viết và sửa mã nguồn.
==============================================================================================
*/

#include <iostream>
#include <string>

using namespace std;

struct SinhVien
{
    string maSV;
    string hoTen;
    string ngaySinh;
    string gioiTinh;
    string lop;
    float diemTB;
};

int main()
{
    SinhVien sv;

    // Nhập thông tin sinh viên
    cout << "Nhap ma sinh vien: ";
    getline(cin, sv.maSV);

    cout << "Nhap ho ten: ";
    getline(cin, sv.hoTen);

    cout << "Nhap ngay sinh: ";
    getline(cin, sv.ngaySinh);

    cout << "Nhap gioi tinh: ";
    getline(cin, sv.gioiTinh);

    cout << "Nhap lop: ";
    getline(cin, sv.lop);

    cout << "Nhap diem trung binh: ";
    cin >> sv.diemTB;

    // Xuất thông tin sinh viên
    cout << "\n===== THONG TIN SINH VIEN =====\n";
    cout << "Ma sinh vien: " << sv.maSV << endl;
    cout << "Ho ten: " << sv.hoTen << endl;
    cout << "Ngay sinh: " << sv.ngaySinh << endl;
    cout << "Gioi tinh: " << sv.gioiTinh << endl;
    cout << "Lop: " << sv.lop << endl;
    cout << "Diem trung binh: " << sv.diemTB << endl;

    return 0;
}
// Trong quá trình code em có dùng chat gpt để gợi ý và sửa code để được một bài hoàn chỉnh như này