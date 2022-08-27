/******************************************************************************

kullanıcıdan 3 adet sayı okuyup en büyüğünü ekrana yazdıran kod

*******************************************************************************/
#include <stdio.h>

int main()
{
    int girilensayi;
    int enbuyuksayi=0;
    for(int i =0; i<3;i++){  //buradaki 3 değerini değiştirerek daha fazla girdi alabiliriz.
        scanf("%d",&girilensayi);
        if(girilensayi>enbuyuksayi)
        enbuyuksayi=girilensayi; // o zamana kadarki en büyük sayıyı akılda tutma kısmı
        
    }
    
        printf("enbuyuksayi =%d",girilensayi);
}

