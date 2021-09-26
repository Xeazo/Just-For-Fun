#include <stdio.h>
#include <string.h>

int main()
{
	puts ("Pilih Operasi Yang Akan Anda Lakukan (1-2-3-4)");
	puts ("1 = Penjumlahan");
	puts ("2 = Pengurangan");
	puts ("3 = Perkalian");
	puts ("4 = Pembagian");
	
	int n;
	int x,y,o;	
	
	
	scanf("%d", &n);
	
	switch (n)
	{
		case 1:
			scanf ("%d %d", &x, &y);
			o = x+y;
			break;
		case 2:
			scanf ("%d %d", &x, &y);
			o = x-y;
			break;
		case 3:
			scanf ("%d %d", &x, &y);
			o = x*y;
			break;
		case 4:
			scanf ("%d %d", &x, &y);
			o = x/y;
			break;
		
	}
	
	printf("%d", o);
	
	return 0;
}
