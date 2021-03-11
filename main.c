#include <stdio.h>
#include <stdlib.h>

int secim;
int dizi[7];


void OyunaBasla()
{
    system("cls");
    printf("\n\n\t\t1.Random Sayi Ile Oyna\t\t\t2.Sayi Girerek Oyna\n\n");
    scanf("%d",&secim);
    switch(secim)
    {
    case 1:
       Oyun();

     break;
    case 2:SayiGir(); break;
    default: printf("Bilinmeyen bir secim yaptiniz!"); break;


    }


}

void RandomSayiUret()
{

    system("cls");
    srand(time(NULL));
    for(int i=0;i<5;i++)
    {
        dizi[i]=1+rand()%9;
    }

    dizi[5]=10+rand()%89;
    dizi[6]=100+rand()%899;

     for(int i=0;i<7;i++)
     {
         printf("%d\t",dizi[i]);
     }

}

void Oyun()
{
    RandomSayiUret();


}



void SayiGir()
{
    system("cls");
    for(int i=0;i<5;i++)
    {
        printf("Bir basamakli sayi giriniz: ");
        scanf("%d",&dizi[i]);
    }

    printf("Iki basamakli sayi giriniz: ");
    scanf("%d",&dizi[5]);

    printf("Uc basamakli sayi giriniz: ");
    scanf("%d",&dizi[6]);
}


int main()
{
     printf("\n\n\n\t\t\t\t**********ANA MENU**********\n\n\n\t\t\t1.Oyuna Basla\t\t\t2.Nasil Oynanir");
    scanf("%d",&secim);
    switch(secim)
    {
    case 1 :
        OyunaBasla(); break;
    case 2 : break;
    default: printf("Bilinmeyen bir secim yaptiniz!"); break;}
    return 0;
}


