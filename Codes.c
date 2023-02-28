#include <stdio.h>

int main (void){
int vizeNotu,finalNotu,vizeYuzdesi,canDegeri=60;
float ogrenciOrtalamasi;

printf("Lutfen sirasiyla vize notunuzu ve vize yuzdenizi giriniz:");
scanf("%d%d",&vizeNotu,&vizeYuzdesi);

printf("Lutfen final notunuzu giriniz:");
scanf("%d",&finalNotu);

printf("Vize Notunuz:%d(Yuzdesi:%d),Final Notunuz:%d(Yuzdesi:%d)\n",vizeNotu,vizeYuzdesi,finalNotu,100-vizeYuzdesi);
ogrenciOrtalamasi=(vizeNotu*vizeYuzdesi+finalNotu*(100-vizeYuzdesi))/100;

printf("Ders Ortalamaniz:%.2f\n",ogrenciOrtalamasi);
printf("Ders Gecme Durumunuz (1->Gectiniz,0->Kaldiniz):%d",ogrenciOrtalamasi>=canDegeri);
 
  
  return 0;	
	
}
