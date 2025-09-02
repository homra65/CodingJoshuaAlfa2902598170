#include <stdio.h>
	
	int main(){
		printf("Masukkan nilai panjang\n");
		
			int panjang;
				scanf("%d", &panjang); getchar();
				
		printf("Masukkan nilai lebar\n"); 
		
			int lebar;
				scanf("%d", &lebar); getchar();
				
		int luas = panjang * lebar;
		
			printf("Hasil luas adalah %d\n", luas);
			
		return 0;
		
	}
