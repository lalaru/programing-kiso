 /*  問題１ */
#include <stdio.h>
int main (void){
    int x;
    x = 12345;

    printf("変数の値は%dです。\n",x);

    return 0;
    
}

     /*  問題2  */
#include <stdio.h>
int main (void){
    int a,b,seki;

    printf("2つの整数値を入力しててください。\n");
     
   
    printf("整数a:"); scanf("%d",&a);
    printf("整数b:"); scanf("%d",&b);
    
    seki= a*b;
    printf("2つの整数値の積の値は%dです。\n",seki);

    return 0;
}

    /*  問題３　*/
#include <stdio.h>
int main (void){
    int a,b,wariai;

    printf("2つの整数値を入力しててください。\n");
     
   
    printf("整数a:"); scanf("%d",&a);
    printf("整数b:"); scanf("%d",&b);
    
    wariai = 100*a/b;
    printf("aはbの%d％です。\n",wariai);

    return 0;
}

    /* 　問題４　*/
#include <stdio.h>
int main (void){
    float cm;
    
    printf("長さをcmで入力してください：")；
    scanf("%f",&cm);

    printf("それは%.3fインチです\n",cm/2.54);

    return 0;
}

   /*  問題５　*/
#include <stdio.h>
int main (void){
    int x;
     
    printf("整数値を入力しててください: ");
    scanf("%d",&x);

    if (x%10!=0)
      printf("%dは10の倍数ではありません",x);
    
    else
      printf("%dは10の倍数です",x);
    
    return 0;
}

   /*   問題6 　*/
#include <stdio.h>
int main (void){
    int x,i;
    
    printf("整数値を入力してください：");
    scanf("%d",&x);
    
    for(i=1;i<=x;i++)
      printf("%d",i);
    
    printf("\n");

    return 0;
}

    /*  問題7  */
#include <stdio.h>
int main (void){
    int i,j,k,x;
    

    printf("ピラミッドの段数を入力してください：");
    scanf("%d",&x);

    for(i=1;i<=x;i++){
        for(j=x-i;j>=0;j--){
           printf(" ");
        }
            for(k=1;k<=i*2-1;k++){
               printf("*");
            }
        printf("\n");
    }

    return 0;
}

 /*  問題8  */
#include <stdio.h>
int main (void){
    int a[]={5,4,3,2,1};
    
    int i;
    for(i=0;i<=4;i++){
        printf("a[%d]=%d\n",i,a[i]);
    }

    return 0;
}

          /*finish*/
