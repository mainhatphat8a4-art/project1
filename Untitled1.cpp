#include <stdio.h>

typedef struct xeMay {
    int ma;
    char loaiXe[30];
    int giaNgay[5];
    int giaThang[5];
    int tongXe;
    int conLai;
    int thueNgay;
    int thueThang;
} xeMay;

typedef struct khachHang {
    int ma;
    char hoTen[30];
    char soDienthoai[15];
} khachHang;

typedef struct donThue {
    int maDon;
    int maKhach;
    int maXe;
    int hinhThuc;
    int thoiHan;
    int tienThue;
    int trangThai;
} donThue;

xeMay danhsachXe[5] = {
    {1, "Xe so 50cc", 80000, 1500000, 5, 5, 0, 0},
    {2, "Xe so 100cc", 110000, 2000000, 5, 5, 0, 0},
    {3, "Xe ga 50cc", 100000, 1800000, 5, 5, 0, 0},
    {4, "Xe ga 100cc", 150000, 2500000, 5, 5, 0, 0},
    {5, "Xe dien", 120000, 2200000, 5, 5, 0, 0}
};

int soXe = 5;

khachHang danhachKhach[20];
int soKhach = 0;

donThue danhsachDon[50];
int soDon = 0;

char HinhThuc[3][10] = {"", "Ngay", "Thang"};  
char TrangThai[2][15] = {"Dang thue", "Da hoan"};

void bangXe() {
    printf("\n\n============== TINH TRANG XE ==============");
    printf("\n%-5s %-14s %-6s %-9s %-10s %s",
           "Ma", "Loai xe", "Tong", "Con lai", "Thue ngay", "Thue thang");
    printf("\n---------------------------------------------------------");
    }
 
void bangKhach() {
    printf("\n\n========== DANH SACH KHACH HANG ==========");
    if (soKhach == 0) {
        printf("\nChua co khach hang nao.");
        return;
    }
}
 
void bangDon() {
    printf("\n\n============ DANH SACH DON THUE ============");
    if (soDon == 0) {
        printf("\nChua co don thue nao.");
        return;
    }
}    

void quanLy(int chon) {
    int ma=0;
    switch (chon) {
    case 0 :
        printf("Tam biet!");
        break;
    case 1 :
        printf("Nhap ma loai xe: ");
        scanf("%d",&ma);
        break;
    case 2 :
        printf("Nhap ma loai xe: ");
        scanf("%d",&ma);
        break;
    case 3 :
        printf("Nhap ma loai xe: ");
        scanf("%d",&ma);
        break;
    default :
        printf("Lua chon khong hop le ");
    }
}
int main () {
    printf("=========================================");
    printf("\n\t DICH VU CHO THUE XE MAY");
    printf("\n=========================================");
    printf("\n Ma | Loai xe     | Gia ngay | Gia thang ");
    printf("\n_________________________________________");
    printf("\n 1  | Xe so 50cc  | 80.000d  | 1.500.000d ");
    printf("\n 2  | Xe so 100cc | 110.000d | 2.000.000d ");
    printf("\n 3  | Xe ga 50cc  | 100.000d | 1.800.000d ");
    printf("\n 4  | Xe ga 100cc | 150.000d | 2.500.000d ");
    printf("\n 5  | Xe dien     | 120.000d | 2.200.000d ");
    printf("\n_________________________________________");

    int chon=0;
    printf("\n\n\n============= QUAN LY XE MAY ============");
    printf("\n0. Thoat");
    printf("\n1. Xem tinh trang xe");
    printf("\n2. Xem danh sach khach hang");
    printf("\n3. Xem danh sach don thue");
    printf("\nChon: ");
    scanf("%d",&chon);
    quanLy(chon);
    return 0;
}
