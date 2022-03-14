#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a;
	float tygia = 22892.00;
	float t;
	float tqd;
	float ttn;
	float vat;
	
	printf("Chao mung quy khach den voi quay giao dich so 97!\n");
	printf("An phim 1 neu muon doi tien vnd\nAn phim 2 neu muon doi tien $\n");
	printf("Xin moi nhap lua chon : ");
	scanf("%d", &a);
	
	if ( a > 2)
    	{ 
		printf("Giao dich loi. Vui long thuc hien lai\n"); 
		return 0;
		}
	if ( a < 1)
		{ printf("Giao dich loi. Vui long thuc hien lai\n");
		  return 0;
		}
	if ( a == 1)
	    { printf("Nhap so tien muon doi : ");
	      scanf("%f", &t);
	      printf("Ban se mat 1 phan tram phi vat cho giao dich nay.\n");
	      tqd = ( t * 22892.00 );
	      printf("So tien quy doi la : %f\n", tqd); 
	      vat = tqd / 100;
	      printf("Phi giao dich la : %f\n", vat);
	      ttn = tqd - vat;
	      printf("Tien thuc nhan la : %f\n", ttn);
	     } 
	if ( a == 2)
	    {
	    printf("Nhap so tien muon doi : ");
	      scanf("%f", &t);
	      printf("Ban se mat 1 phan tram phi vat cho giao dich nay.\n");
	      tqd = ( t / 22892.00 );
	      printf("So tien quy doi la : %f\n", tqd); 
	      vat = tqd / 100;
	      printf("Phi giao dich la : %f\n", vat);
	      ttn = tqd - vat;
	      printf("Tien thuc nhan la : %f\n", ttn);
	    }
	    
	return 0;
}
