#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
  int i,j,k;
  //img1 matrisi olusturuldu.
  int img1[3][3] = { //img1 matrisi oluþturuldu.
  {1,0,1},
  {1,1,0},
  {0,1,1}
  };
  //img1 matrisi yazdirildi
  printf("img1:\n");
    for(i=0;i<3;i++){
    	for(j=0;j<3;j++){
    	 printf("%d ",img1[i][j]);
		}
		printf("\n");
	}
	printf("\n");
  //img2 matrisi olusturuldu	
  int img2[3][3] = { 
  {0,0,1},
  {0,1,0},
  {1,0,0}
  };
  //img2 matrisi yazdirildi
    printf("img2:\n"); 
     for(i=0;i<3;i++){
    	for(j=0;j<3;j++){
    	 printf("%d ",img2[i][j]);
		}
		printf("\n");
	}
  //img3 matrisi icindeki tum degerler 0 olacak sekilde olusturuldu
  int img3[3][3] = { 
  {0,0,0},
  {0,0,0},
  {0,0,0}
  };

  // img1 deki tum bir bitlerini saga dogru kaydirma islemi baslatildi
  for(i=0;i<3;i++) {
    for(j=0;j<3;j++) {
      if(img1[i][j] == 1) {
        for(k=0;k<3;k++) {
          if((j+k) < 3 && img2[i][j+k] == 1) {
            img3[i][j+k] = 1;
          }
        }
      }
    }
  }

  //img1 deki tum bir bitlerini sola dogru kaydirma islemi baslatildi
  for(i=0;i<3;i++) {
    for(j=0;j<3;j++) {
      if(img1[i][j] == 1) {
        for(k=0;k<3;k++) {
          if((j-k) >= 0 && img2[i][j-k] == 1) {
            img3[i][j-k] = 1;
          }
        }
      }
    }
  }

  //img1 deki tum bir bitlerini yukari dogru kaydirma islemi baslatildi
  for(i=0;i<3;i++) {
    for(j=0;j<3;j++) {
      if(img1[i][j] == 1) {
        for(k=0;k<3;k++) {
          if((i-k) >= 0 && img2[i-k][j] == 1) {
            img3[i-k][j] = 1;
          }
        }
      }
    }
  }

  //img1 deki tum bir bitlerini asagi dogru kaydirma islemi baslatildi
  for(i=0;i<3;i++) {
    for(j=0;j<3;j++) {
      if(img1[i][j] == 1) {
        for(k=0;k<3;k++) {
          if((i+k) < 3 && img2[i+k][j] == 1) {
            img3[i+k][j] = 1;
          }
        }
       }
     }
   } 
    printf("\n"); 
    //img3 matrisi yazdirildi
    printf("yeni olusan goruntu:\n"); 
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", img3[i][j]);
        }
        printf("\n");
    }
    return 0;
}
