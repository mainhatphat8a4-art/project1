#include <stdio.h>
typedef struct loaiXe{
	 int XS50CC[10];
	 int XS100CC[10];
	 int XG50CC[10];
	 int XG100CC[10];
}loaiXe;
void kiemTra(int ma){
	switch (ma){
		
	}
}
void quanLy(int chon){
		switch (chon){
		case 1 :
			int ma=0; 
			printf("Nhap ma loai xe can kiem tra ");
			scanf("%d",&ma);
			break;
		case 2 : ;
			break;
		case 3 : ;
			break;
		case 4 : ;
			break;
		default :
			printf("Lua chon khong hop le ");
	}
}
int main (){
	printf("=========================================");
	printf("\n\t DICH VU CHO THUE XE MAY");
	printf("\n=========================================");
	printf("\n Ma | Loai xe     | Gia_ngay | Gia_thang ");
	printf("\n_________________________________________");
	printf("\n 1  | Xe so 50cc  | 80.000d  | 1.500.000d ");
	printf("\n 2  | Xe so 100cc | 110.000d | 2.000.000d ");
	printf("\n 3  | Xe ga 50cc  | 100.000d | 1.800.000d ");
	printf("\n 4  | Xe ga 100cc | 150.000d | 2.500.000d ");
	printf("\n 5  | Xe dien     | 120.000d | 2.200.000d ");
	printf("\n_________________________________________");

	int chon=0;
	printf("\n\n\n============ QUAN LY XE MAY ============");
	printf("1.Kiem tra tinh trang loai xe ");
	printf("\n2.Nhap them xe ");
	printf("\n3.Cap nhat xe cho thue ");
	printf("\n4.Thoat");
	printf("\nChon ");
	scanf("%d",&chon);
	quanLy(chon);
return 0; 
} 
