#include <stdio.h>

typedef struct xeMay {
    int ma;
    char loaiXe[30];
    int giaNgay;
    int giaThang;
    int tongXe;
    int conLai;
    int thueNgay;
    int thueThang;
} xeMay;

typedef struct khachHang {
    int ma;
    char hoTen[30];
    int soDienthoai;
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

xeMay danhSachXe[5] = {
    {1, "Xe so 50cc", 80000, 1500000, 5, 5, 0, 0},
    {2, "Xe so 100cc", 110000, 2000000, 5, 5, 0, 0},
    {3, "Xe ga 50cc", 100000, 1800000, 5, 5, 0, 0},
    {4, "Xe ga 100cc", 150000, 2500000, 5, 5, 0, 0},
    {5, "Xe dien", 120000, 2200000, 5, 5, 0, 0}
};

int soXe = 5;

khachHang danhSachKhach[20];
int soKhach = 0;

donThue danhSachDon[50];
int soDon = 0;

char HinhThuc[3][10] = {"", "Ngay", "Thang"};  
char TrangThai[2][15] = {"Dang thue", "Da hoan"};

void bangXe();
void menuKhach();
void bangKhach();
void menuDon();
void bangDon();
void quanLy(int chon);
void themKhach();
void themDon();

void bangXe() {
    printf("\n\n============== TINH TRANG XE ==============");
    printf("\n%-5s %-14s %-6s %-9s %-10s %-10s",
           "Ma", "Loai xe", "Tong", "Con lai", "Thue ngay", "Thue thang");
    printf("\n---------------------------------------------------------");
    for (int i=0;i<soXe;i++){
    	printf("\n%-5d %-14s %-6d %-9d %-10d %-10d",
    			danhSachXe[i].ma,
    			danhSachXe[i].loaiXe,
    			danhSachXe[i].tongXe,
    			danhSachXe[i].conLai,
    			danhSachXe[i].thueNgay,
    			danhSachXe[i].thueThang);
	}
}
 
void menuKhach(){
	int chon;
	do{
		printf("\n\n========== QUAN LY KHACH HANG =========");
		printf("\n0.Quay lai");
		printf("\n1.Xem danh sach khach hang");
		printf("\n2.Them khach");
		printf("\n------------------------------------------");
		printf("\nNhap lua chon : ");
		scanf("%d",&chon);
		switch(chon){
			case 0:
				break;
			case 1: 
				bangKhach();
				break;
			case 2:
				themKhach();
				break;
			default :
				printf("Lua chon khong hop le \n");
		}
	}while(chon!=0);
}
void bangKhach() {
    printf("\n\n========== DANH SACH KHACH HANG ==========");
    if (soKhach == 0) {
        printf("\nChua co khach hang nao.");
        return;
    }
    printf("\n%-10s %-25s %-15s ", "Ma KH","Ho ten","So dien thoai");
    for (int i=0;i<soKhach;i++){
    	printf("\n%-10d %-25s %-15d",
				danhSachKhach[i].ma,
				danhSachKhach[i].hoTen,
				danhSachKhach[i].soDienthoai);
	}
	printf("\n---------------------------------------------------------");
}

void menuDon(){
	int chon;
	do{
		printf("\n\n============== QUAN LY DON THUE ===========");
		printf("\n0.Quay lai");
		printf("\n1.Xem danh sach don thue");
		printf("\n2.Them don");
		printf("\n----------------------------------------------");
		printf("\nNhap lua chon : ");
		scanf("%d",&chon);
		switch(chon){
			case 0:
				break;
			case 1: 
				bangDon();
				break;
			case 2:
				themDon();
				break;
			default :
				printf("Lua chon khong hop le \n");
		}
	}while(chon!=0);
}

void bangDon() {
    printf("\n\n============ DANH SACH DON THUE ============");
    if (soDon == 0) {
        printf("\nChua co don thue nao.");
        return;
    }
    printf("\n%-10s %-10s %-10s %-12s %-10s ",
           "Ma don", "Ma Kh", "Ma xe", "Tien thue", "Trang thai");
    printf("\n---------------------------------------------------------");
    for (int i=0;i<soDon;i++){
    	printf("\n%-10d %-10d %-10d %-12d %-10s ",
    			danhSachDon[i].maDon,
    			danhSachDon[i].maKhach,
    			danhSachDon[i].maXe,
    			danhSachDon[i].tienThue,
    			danhSachDon[i].trangThai ==1 ? "Dang thue " : "Da hoan thanh");
	}
}    

void quanLy(int chon) {
    int ma=0;
    switch (chon) {
    case 0 :
        printf("Tam biet!");
        break;
    case 1 :
        bangXe();
        break;
    case 2 :
        menuKhach();
        break;
    case 3 :
        menuDon();
        break;
    default :
        printf("Lua chon khong hop le ");
    }
}

void themKhach(){
	if(soKhach>=20){
		printf("Het slot roi\n ");
		return;
	}
	int ma;
	printf("Nhap ma khach hang : ");
	scanf("%d",&ma);
	if(ma<0){
		printf("Ma phai lon hon 0\n ");
		return;
	}
	for (int i=0;i<soKhach;i++){
		if(danhSachKhach[i].ma==ma){
			printf("Ma khach hang da ton tai\n ");
			return ;
		}
	}
	danhSachKhach[soKhach].ma=ma;
	printf("Nhap ho ten: ");
	scanf(" %29[^\n]", danhSachKhach[soKhach].hoTen);

	printf("Nhap so dien thoai: ");
	scanf(" %14[^\n]", danhSachKhach[soKhach].soDienthoai);
	soKhach++;
	printf("Them thanh cong \n");
}

void themDon(){
	if(soDon>=50){
		printf("Het slot roi\n ");
		return;
	}
	int maDon;
	printf("Nhap ma don : ");
	scanf("%d",&maDon);
	if(maDon<0){
		printf("Ma don phai lon hon 0\n ");
		return;
	}
	for (int i=0;i<soDon;i++){
		if(danhSachDon[i].maDon==maDon){
			printf("Ma don da ton tai\n ");
			return ;
		}
	}
	danhSachDon[soDon].maDon=maDon;
	printf("Nhap ma khach: ");
	scanf(" %d", &danhSachDon[soDon].maKhach);

	printf("Nhap ma xe: ");
	scanf(" %d", &danhSachDon[soDon].maXe);
	
	printf("Nhap hinh thuc thue (D or Y) : ");
	scanf(" %c", &danhSachDon[soDon].hinhThuc);
	
	printf("Nhap thoi han thue : ");
	scanf(" %d", &danhSachDon[soDon].thoiHan);
	int tien = 9;
	switch(danhSachDon[soDon].maXe){
		case '1':
			if(danhSachDon[soDon].hinhThuc='Y'){
				tien = danhSachDon[soDon].thoiHan*1500000;
			}else{
				tien = danhSachDon[soDon].thoiHan*80000;
			}
			danhSachDon[soDon].tienThue=tien;
	}
	danhSachDon[soDon].trangThai=1;
	soDon++;
	printf("Them thanh cong \n");
	
	
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
