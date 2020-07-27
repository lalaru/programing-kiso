 /*  問題１ */
#include <stdio.h>
int main (void){
    int i;

    for(i=1896;i<=2040;i++){
        if(i%4==0 && i%100!=0){
            printf("%d  ",i);
        }
        else if(i%400==0){
            printf("%d  ",i);
        }
    }
    printf("\n");

    return 0;
}

/*  問題2　　*/
double ave(double x,double y){
    double ans = (x+y)/2;
    return ans;
}

#include <stdio.h>
int main (void){
    double average;
    average = ave(12.3,34.5);

    printf("%f\n",average);

    return 0;
}

/* 問題3  */
#include<stdio.h>
int main (void){
    int test [3] [3]={{50,60,70},{60,70,50},{100,80,90}};
    int i,j;
    int score=0;

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            score+=test[i][j];
        }
        printf("%d\n",score);
        score = 0;
    }
    return 0;
}

/* 問題4  */
#include<stdio.h>
int main (void){
    int test [3] [3]={{50,60,70},{60,70,50},{100,80,90}};
    int i,j;
    int score=0;

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            score+=test[j][i];
        }
        printf("%d\n",score/3);
        score = 0;
    }
    return 0;
}

/* 問題5 */
#include <stdio.h>
int main(void)
{
    int element[335];
    int i,c;
    for(i=0;i<335;i++)
    {
        if(i==0)
        {
            element[i]=0;
        }
        else if(i%3==0||i%10==3||i/100==3||(i%100)/10==3)
        {
            element[i]=3;
        }
        else
        {
            element[i]=i%10;
        }
        if((c=getchar())=='\n'){
            printf("%d: %d",i,element[i]);
        }
    }
    printf("\n");

    return 0;
}

/* finish */
