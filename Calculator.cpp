#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
	puts ("Pilih Operasi Yang Akan Anda Lakukan (1-2-3-4-5)");
	puts ("1 = Penjumlahan");
	puts ("2 = Pengurangan");
	puts ("3 = Perkalian");
	puts ("4 = Pembagian");
	puts ("5 = Pangkat");
	
	int n;
	int x,y,o;	
	
	
	scanf("%d", &n);
	
	switch (n)
	{
		case 1:
			printf("Angka Pertama :");
			scanf ("%d", &x);
			printf("Angka Kedua :");
			scanf ("%d", &y);
			o = x+y;
			break;
		case 2:
			printf("Angka Pertama :");
			scanf ("%d", &x);
			printf("Angka Kedua :");
			scanf ("%d", &y);
			o = x-y;
			break;
		case 3:
			printf("Angka Pertama :");
			scanf ("%d", &x);
			printf("Angka Kedua :");
			scanf ("%d", &y);
			o = x*y;
			break;
		case 4:
			printf("Angka Pertama :");
			scanf ("%d", &x);
			printf("Angka Kedua :");
			scanf ("%d", &y);
			o = x/y;
			break;
		case 5:
			printf("Angka Pertama :");
			scanf ("%d", &x);
			printf("Pangkat :");
			scanf ("%d", &y);
			o = pow(x,y);
			break;
		
	}
	
	printf("%d", o);
	
	return 0;
}
