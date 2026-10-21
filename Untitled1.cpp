#include <stdio.h>
typedef struct loaiXe{
	 int XS50CC[10];
	 int XS100CC[10];
	 int XG50CC[10];
	 int XG100CC[10];
}loaiXe;
void quanLy(int chon){
		switch (chon){
		case 1 : ;
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
	int chon=0;
	printf("1.Kiem tra tinh trang loai xe ");
	printf("\n2.Nhap them xe ");
	printf("\n3.Cap nhat xe cho thue ");
	printf("\n4.Thoat");
	printf("\nChon ");
	scanf("%d",&chon);
	quanLy(chon);
return 0; 
} 
