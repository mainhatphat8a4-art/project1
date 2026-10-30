#include <stdio.h>
#include <string.h>
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
    char hinhThuc;
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


void bangXe();
void menuKhach();
void bangKhach();
void menuDon();
void bangDon();
void quanLy(int chon);
void themKhach();
void themDon();
void timKhach();
void timDon();
void xoaKhach();
void xoaDon();
void themXe();
void thongKe();

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
		printf("\n1.Xem danh sach khach hang");
		printf("\n2.Them khach");
		printf("\n0.Quay lai");
		printf("\n------------------------------------------");
		printf("\nNhap lua chon: ");
		scanf("%d",&chon);
		switch(chon){
			case 0:
				return;
				break;
			case 1: 
				bangKhach();
				break;
			case 2:
				themKhach();
				break;
			default :
				printf("Lua chon khong hop le!\n");
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
		printf("\n1.Xem danh sach don thue");
		printf("\n2.Them don");
		printf("\n0.Quay lai");
		printf("\n----------------------------------------------");
		printf("\nNhap lua chon: ");
		scanf("%d",&chon);
		switch(chon){
			case 0:
			    return;
				break;
			case 1: 
				bangDon();
				break;
			case 2:
				themDon();
				break;
			default :
				printf("Lua chon khong hop le!\n");
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
    			danhSachDon[i].trangThai ==1 ? "Dang thue" : "Da hoan thanh");
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
    case 4 :
    	timKhach();
    	break;
    case 5 :
    	timDon();
    	break;
    case 6 :
    	xoaKhach();
    	break;
    case 7 : 
    	xoaDon();
    	break;
    case 8:
    	themXe();
    	break;
    case 9:
    	thongKe();
    	break;
    default :
        printf("Lua chon khong hop le!");
    }
}

void themKhach(){
	if(soKhach>=20){
		printf("Het slot roi!\n ");
		return;
	}
	int ma;
	printf("Nhap ma khach hang: ");
	scanf("%d",&ma);
	if(ma<0){
		printf("Ma phai lon hon 0!\n ");
		return;
	}
	for (int i=0;i<soKhach;i++){
		if(danhSachKhach[i].ma==ma){
			printf("Ma khach hang da ton tai.\n ");
			return;
		}
	}
	danhSachKhach[soKhach].ma=ma;
	printf("Nhap ho ten: ");
	scanf(" %29[^\n]", &danhSachKhach[soKhach].hoTen);

	nhaplaisdt:
	printf("Nhap so dien thoai: ");
	scanf(" %d", &danhSachKhach[soKhach].soDienthoai);
	if(danhSachKhach[soKhach].soDienthoai>999999999||danhSachKhach[soKhach].soDienthoai<100000000){
		printf("Sdt sai roi ni nhap lai ik\n");
		goto nhaplaisdt;
	}
	soKhach++;
	printf("Them thanh cong!\n");
}

void themDon(){
	if(soDon>=50){
		printf("Het slot roi!\n ");
		return;
	}
	int maDon;
	printf("Nhap ma don: ");
	scanf("%d",&maDon);
	if(maDon<0){
		printf("Ma don phai lon hon 0.\n ");
		return;
	}
	for (int i=0;i<soDon;i++){
		if(danhSachDon[i].maDon==maDon){
			printf("Ma don da ton tai.\n ");
			return ;
		}
	}
	danhSachDon[soDon].maDon=maDon;
	printf("Nhap ma khach: ");
	scanf(" %d", &danhSachDon[soDon].maKhach);

	nhaplai:
	printf("Nhap ma xe: ");
	scanf(" %d", &danhSachDon[soDon].maXe);
	
	printf("Nhap hinh thuc thue (D or M): ");
	scanf(" %c", &danhSachDon[soDon].hinhThuc);
	
	printf("Nhap thoi han thue: ");
	scanf(" %d", &danhSachDon[soDon].thoiHan);
	int tien = 0;
	int viTri = -1;

	for (int i = 0; i < soXe; i++) {
   	 if (danhSachXe[i].ma == danhSachDon[soDon].maXe) {
  	      viTri = i;
  	      break;
  	  }
	}

	if (viTri == -1) {
	    printf("Khong tim thay loai xe.\n");
	    return;
	}

	
	switch (danhSachDon[soDon].hinhThuc) {
 	    case 'D':
    	    tien = danhSachXe[viTri].giaNgay
    	         * danhSachDon[soDon].thoiHan;
    	    if (danhSachXe[viTri].conLai>0){
    	  	 	danhSachXe[viTri].thueNgay+=1;
    	   		danhSachXe[viTri].conLai-=1;
    	    }else{
    	    	printf("Ma xe qui khach chon da het vui long chon loai khac\n");
    	    	goto nhaplai;
			}
   	 	    break;

   		case 'M':
    	    tien = danhSachXe[viTri].giaThang
     	        * danhSachDon[soDon].thoiHan;
     	    if (danhSachXe[viTri].conLai>0){
     	  		danhSachXe[viTri].thueThang+=1;
     	   		danhSachXe[viTri].conLai-=1;
 	    	}else{
    	    	printf("Ma xe qui khach chon da het vui long chon loai khac\n");
    	    	goto nhaplai;
			}
       		 break;
	
    	default:
     	   printf("Hinh thuc thue khong hop le!\n");
        return;
}

	danhSachDon[soDon].tienThue = tien;

	danhSachDon[soDon].trangThai=1;
	soDon++;
	printf("Them thanh cong!\n");
	
	
}

void timKhach(){
	int ma ;
	printf("Nhap ma khach hang can tim : ");
	scanf("%d",&ma);
	for (int i=0;i<soKhach;i++){
		if (danhSachKhach[i].ma==ma){
			printf("Da tim thay.");
			printf("\nTen: %s",danhSachKhach[i].hoTen);
			printf("\nMa khach: %d",danhSachKhach[i].ma);
			printf("\nSdt: %d",danhSachKhach[i].soDienthoai);
		}else if(danhSachKhach[i].ma!=ma){
			printf("Khach hang khong ton tai.");
		}
		return;
	}
}
void timDon(){
	int ma ;
	printf("Nhap ma don can tim: ");
	scanf("%d",&ma);
	for (int i=0;i<soDon;i++){
		if (danhSachDon[i].maDon==ma){
			printf("Da tim thay.");
			printf("\nMa don: %d",danhSachDon[i].maDon);
			printf("\nMa khach: %d",danhSachDon[i].maKhach);
			printf("\nMa xe: %d",danhSachDon[i].maXe);
			printf("\nHinh thuc: %c",danhSachDon[i].hinhThuc);
			printf("\nTien thue: %d",danhSachDon[i].tienThue);
			printf("\nTrang thai: %d",danhSachDon[i].trangThai);
		}else{
			printf("Don chua ton tai.");
		}
		return ;
	}
}
void xoaKhach(){
	int ma ;
	int vitri=-1;
	printf("Nhap ma khach can xoa: ");
	scanf("%d",&ma);
	for (int i=0;i<soKhach;i++){
		if(danhSachKhach[i].ma==ma){
			vitri=i;
			break;
		}
	}
	if (vitri==-1){
		printf("Khach hang khong ton tai.");
		return;
	}
	for (int i=vitri;i<soKhach-1;i++){
		danhSachKhach[i]=danhSachKhach[i+1];
	}
	soKhach--;
	printf("\nDa xoa!");
}
void xoaDon(){
	int ma ;
	int vitri=-1;
	printf("Nhap ma don can xoa: ");
	scanf("%d",&ma);
	for (int i=0;i<soDon;i++){
		if(danhSachDon[i].maDon==ma){
			vitri=i;
			break;
		}
	}
	if (vitri==-1){
		printf("Don chua ton tai.");
		return;
	}
	for (int i=vitri;i<soDon-1;i++){
		danhSachDon[i]=danhSachDon[i+1];
	}
	soDon--;
	printf("\nDa xoa!");
}
void themXe(){
	int ma;
	int soLuongThem;
	bangXe();
	printf("\nNhap ma loai xe can them : ");
	scanf("%d",&ma);
	int viTri=-1;
	for (int i=0;i<soXe;i++){
		if (danhSachXe[i].ma==ma){
			printf("Da tim thay xe can nhap\n");
			viTri=i;
		}
	}
	if(viTri==-1){
		printf("Khong tim thay loai xe can nhap\n");
	}
	printf("Nhap so luong xe nhap them : ");
	scanf("%d",&soLuongThem);
	if (soLuongThem<=0){
		printf("Khong duoc so luong xe them phai > 0\n");
	}
	danhSachXe[viTri].tongXe+=soLuongThem;
	danhSachXe[viTri].conLai+=soLuongThem;
}
void thongKe(){
	printf("=========================================");
    printf("\n\t\tTHONG KE");
    printf("\n=========================================");
    int tongSoLuongXe=0;
    for (int i=0;i<soXe;i++){
    	tongSoLuongXe+=danhSachXe[i].tongXe;
	}
    printf("\nTong so luong xe dang co : %d ",tongSoLuongXe);
    printf("\nTong so khach hang hien co : %d ",soKhach);
    printf("\nTong so don dang co : %d ",soDon);
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
    do {
    	printf("\n\n\n============= QUAN LY XE MAY ============");
		printf("\n1. Xem tinh trang xe");
		printf("\n2. Xem danh sach khach hang");
	    printf("\n3. Xem danh sach don thue");
	    printf("\n4. Tim khach hang");
	    printf("\n5. Tim don thue");
	    printf("\n6. Xoa khach");
	    printf("\n7. Xoa don");
	    printf("\n8. Them so luong xe");
	    printf("\n9. Thong ke");
		printf("\n0. Thoat");
	    printf("\nChon: ");
 	   scanf("%d",&chon);
 	   quanLy(chon);
	}while(chon!=0);
    return 0;
}
