#include <stdio.h>
int main (void){
    /*  問題１ */
    
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


       

