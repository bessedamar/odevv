
#include <stdio.h>


int main()
{
    printf("ODEV1 HAZIRLAYAN BESSE DAMAR \n");
    printf("----------------------------------------\n\n");

//     SORU 6.1
//yukseklik ve cap degerleri klavyeden girilen dairesel bi koninin hacmi 
    printf("COZUM6.1:\n");
    float yaricap, yukseklik, hacim;   
    float pi = 3.14;
    float tabanalani;

    printf("yaricap giriniz: ");    //yaricap girilir
    scanf("%f", &yaricap);

    printf("yukseklik giriniz: ");
    scanf("%f", &yukseklik);

    tabanalani = pi * yaricap * yaricap;  //taban alanı hesaplanır


    hacim = (1.0 / 3.0)* pi * tabanalani * yukseklik ;    //hacim hesaplanir
    printf(" tabanalani = %.2f , yukseklik = %.2f hacmi = %.2f\n ", tabanalani, yukseklik, hacim);





    // soru 6.16
    //klavyeden verileb iki adet farklı tamsayının harmonik ortalaması

    printf(" COZUM 6.16:\n");
    int sayi1, sayi2;  
    float harmonikortalama;

    printf("harmonik ortalamasi alinacak degerler: ");
    scanf("%d %d", &sayi1, &sayi2);

    printf("harmonikortalama = 2 * %d * %d / (%d + %d)\n", sayi1, sayi2, sayi1, sayi2);

    harmonikortalama = (2.0 * sayi1 * sayi2) / (sayi1 + sayi2);    //harmonik ortlamanın hesabı

    printf("harmonikortalama = %d / %d\n", 2 * sayi1 * sayi2, sayi1 + sayi2);
    printf("harmonikortalama = %.2f\n", harmonikortalama);




   
    //soru 6.4
    //çıktı üretme
        printf("COZUM 6.4:\n");
printf("  . - '' - ,  \n");
printf(" /  _ _     \\ \n");
printf(" \\  @ @     / \n");
printf("  (  =    )   \n");
printf("   _     _    \n");
printf("    /  (  `) _\n");
printf("    \\___ (/ - \n");
printf(" ____ | | |___ \n");
printf(" ((_____|____)) \n");


//soru 6.22.
   printf("COZUM 6.22.:\n");
    int ilk, son;
    double fiyat; 0.912857;
    double tuketim, tutar, atiksu, toplam;

    printf("ilk gostergeyi giriniz: ");
    scanf("%d", &ilk);

    printf("son gostergeyi giriniz: ");
    scanf("%d", &son);

    tuketim = son - ilk;
    tutar = tuketim * 0.912857;
    atiksu = tutar * 0.50;
    toplam = tutar + atiksu;

    printf("tuketim miktari : %.0f m3\n ", tuketim);
    printf("tuketim tutari : %.2f  TL\n", tutar);
    printf("atiksu bedeli (%%50): %.2f TL \n", atiksu);
    printf("toplam     : %.2f TL\n", toplam);



    //soru 6.27 
    //uc noktasının koordinatlari klavyden girilen dogru parcasının orta noktasi

    printf("COZUM 6.27: \n");
     int x1, x2, y1, y2;
    double x0, y0;
 
    
    printf("x1 ve y1 noktalarini giriniz : ");
    scanf("%d %d", &x1 , &y1);

    printf("x2 ve y2 noktalarini giriniz : ");
    scanf("%d %d", &x2 , &y2);
   
    x0 = (x1 + x2) / 2.0;
    y0 = (y1 + y2) / 2.0;
    printf("orta nokta (x0 , y0) = (%.2f, %.2f) \n", x0 , y0);


    return 0;

}