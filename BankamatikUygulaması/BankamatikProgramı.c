

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h> 

int main() {
    float kullaniciBakiyesi = 1250.0, kullaniciMiktari = 0, gunlukLimit = 500.0;
    int islem;

    printf("\t Merhabalar, Hosgeldiniz \n");
    printf("\t Para yatirmak icin 1, para cekmek icin 2, hesap bakiyesi goruntulemek icin 3'e basiniz: ");
    scanf("%d", &islem);

    if (islem == 1) {
        printf("\t Yatirmak istediginiz miktari giriniz: ");
        scanf("%f", &kullaniciMiktari);

        if (kullaniciMiktari <= 0) {
            printf("\t Lutfen gecerli bir miktar giriniz. Islem iptal edildi.\n");
        } else {
            kullaniciBakiyesi += kullaniciMiktari;
            printf("\t Isleminiz Basari Ile Gerceklesmistir. Tesekkur Ederiz. \n");
            printf("\t Yeni bakiyeniz: %.2f \n", kullaniciBakiyesi);
        }
    } 
    else if (islem == 2) {
        printf("\t Cekmek istediginiz miktari giriniz: ");
        scanf("%f", &kullaniciMiktari);

        if (kullaniciMiktari > gunlukLimit) {
            printf("\t Gunluk cekim limitiniz %.2f TL'dir. Lutfen bu miktarin altinda bir deger giriniz.\n", gunlukLimit);
        } else if (kullaniciMiktari > kullaniciBakiyesi) {
            printf("\t Hesabinizda o kadar para bulunmamaktadir. Islem gerceklestirilemiyor. \n");
        } else if (kullaniciMiktari <= 0) {
            printf("\t Lutfen gecerli bir miktar giriniz. \n");
        } else {
            kullaniciBakiyesi -= kullaniciMiktari;
            printf("\t Isleminiz basariyla gerceklestirilmistir. Tesekkur ederiz. \n");
            printf("\t Yeni bakiyeniz: %.2f\n", kullaniciBakiyesi);
        }
    } 
    else if (islem == 3) {
        printf("\t Bakiyeniz: %.2f TL\n", kullaniciBakiyesi);
    } 
    else {
        printf("\t Yanlis bir islem girdiniz. Lutfen tekrar deneyiniz.\n");
    }

    return 0;
}

