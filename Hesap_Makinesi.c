#include<stdio.h>  
main() {
	float a,b;
	float sonuc;
	char islem;
	
	printf("Hesap makinesine hos geldiniz: ");
	printf("Lutfen ilk sayiyi giriniz: \n");
	scanf("%f", &a);
	
	printf("Lutfen ikinci sayiyi giriniz: ");
	scanf("%f", &b);
	
	printf("Lutfen islem seciniz: ");
	printf("\n Toplama icin: +, \t Cikarma icin: -,\n Carma icin: *, \t Bolme icin: / \n");
    scanf(" %c", &islem);   
    
    switch (islem) {
    	case '+':
    		sonuc = a+b;
    		printf("Islem sonucu: %.2f", sonuc);
    		break;
    		
    	case '-':
    		sonuc = a-b;
    		printf("Islem sonucu: %.2f", sonuc);
    		break;
			
		case '*':
    		sonuc = a*b;
    		printf("Islem sonucu: %.2f", sonuc);
    		break;
			
		case '/':
			if (b==0) {
				printf("Tanimsiz islem!");
				break; }
			
			else {
				sonuc = a/b;
    		    printf("Islem sonucu: %.2f", sonuc);
    		    break;	
			}    	
	}
	return 0;

}
