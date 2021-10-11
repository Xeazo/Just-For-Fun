#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int n, a;
	double x,y,o;
	
	do 
	{
		system("cls");
		printf("|==================================================|\n");
		puts  ("|Pilih Operasi Yang Akan Anda Lakukan (1-2-3-4-5-6)|");
		puts  ("|1 = Penjumlahan                                   |");
		puts  ("|2 = Pengurangan                                   |");
		puts  ("|3 = Perkalian                                     |");
		puts  ("|4 = Pembagian                                     |");
		puts  ("|5 = Pangkat                                       |");
		puts  ("|6 = Akar 2                                        |");
		puts  ("|7 = Sin                                           |");
		puts  ("|8 = Cos                                           |");
		puts  ("|9 = Tan                                           |");
		printf("|==================================================|\n");
	
		scanf("%d", &n);
		switch (n)
		{
			case 1:
				printf("Angka Pertama :");
				scanf ("%lf", &x);
				printf("Angka Kedua :");
				scanf ("%lf", &y);
				o = x+y;
				break;
			case 2:
				printf("Angka Pertama :");
				scanf ("%lf", &x);
				printf("Angka Kedua :");
				scanf ("%lf", &y);
				o = x-y;
				break;
			case 3:
				printf("Angka Pertama :");
				scanf ("%lf", &x);
				printf("Angka Kedua :");
				scanf ("%lf", &y);
				o = x*y;
				break;
			case 4:
				printf("Angka Pertama :");
				scanf ("%lf", &x);
				printf("Angka Kedua :");
				scanf ("%lf", &y);
				o = x/y;
				break;
			case 5:
				printf("Angka Pertama :");
				scanf ("%lf", &x);
				printf("Pangkat :");
				scanf ("%lf", &y);
				o = pow(x,y);
				break;
			case 6:
				printf("Angka yg Ingin di Akar :");
				scanf ("%lf", &x);
				o = sqrt(x);
				break;
			case 7:
				printf("Input Angka :");
				scanf("%lf", &x);
				o = sin(x);
				break;
			case 8:
				printf("Input Angka :");
				scanf("%lf", &x);
				o = cos(x);
				break;
			case 9:
				printf("Input Angka :");
				scanf("%lf", &x);
				o = tan(x);
				break;
				
		}
	
		printf("Hasil = %.2lf\n\n", o);
		printf("|===============|\n");
		puts  ("|Lanjut / Sudahi|");
		puts  ("|1 = Lanjut     |");
		puts  ("|2 = Sudahi     |");
		printf("|===============|\n");
		
		scanf("%d", &a);
	
	}
	while (a != 2);
	
	
	return 0;
	
}
