/*task1*/
#include <stdio.h>
#include <stdlib.h>

#define BUF_SIZE 256

int main()
{
    /* open file */
    FILE *fp = fopen("c1_data.txt", "r");
    if (fp == NULL) {
        printf("Can't open data file.\n");
        return 1;
    }

    /* read data */
    char buf[BUF_SIZE],buf2[BUF_SIZE];
    int etime = 0, resp = 0;
    int i,N;
    fgets(buf2,BUF_SIZE-1,fp);
    N=atoi(buf2);
    for (i = 0; i < N; i ++) {
        if(i <= 2 || i >= N-3){
            fgets(buf, BUF_SIZE-1, fp);
            sscanf(buf, "%d,%d\n", &etime, &resp);
            printf("%dms:%d\n", etime, resp);
        }
        else{
            fgets(buf, BUF_SIZE-1, fp);
        }
    }


    /* ending */
    fclose(fp);
}
/*task2*/
#include <stdio.h>
#include <stdlib.h>
#define BUF_SIZE 256

int main()
{
    /* open file */
    FILE *fp = fopen("c1_data.txt", "r");
    if (fp == NULL) {
        printf("Can't open data file.\n");
        return 1;
    }

    /* read data */
    char buf[BUF_SIZE],buf2[BUF_SIZE];
    int*etime;
    int*resp;
    int i,N;
    fgets(buf2,BUF_SIZE-1,fp);
    N=atoi(buf2);
    etime=malloc(sizeof(int)*N);
    resp=malloc(sizeof(int)*N);
    for (i = 0; i < N; i ++) {
            fgets(buf, BUF_SIZE-1, fp);
            sscanf(buf, "%d,%d\n", &etime[i], &resp[i]);
        }
    for (i=N-1;i>=N-5;i--){
        printf("%dms:%d\n", etime[i], resp[i]);
    }
    free(etime);
    free(resp);

    /* ending */
    fclose(fp);
}

/*task3*/
#include <stdio.h>
#include <stdlib.h>

#define BUF_SIZE 256

int main()
{
    /* open file */
    FILE *fp = fopen("c1_data.txt", "r");
    if (fp == NULL) {
        printf("Can't open data file.\n");
        return 1;
    }

    /* read data */
    char buf[BUF_SIZE],buf2[BUF_SIZE];
    int*etime;
    int*resp;
    int i,N;
    fgets(buf2,BUF_SIZE-1,fp);
    N=atoi(buf2);
    etime=malloc(sizeof(int)*N);
    resp=malloc(sizeof(int)*N);
    for (i = 0; i < N; i ++) {
            fgets(buf, BUF_SIZE-1, fp);
            sscanf(buf, "%d,%d\n", &etime[i], &resp[i]);
        }
    int rate,max,min;
    float ave,sum;
    rate=N/19.999;
    max=resp[0];
    min=resp[0];
    for(i=0;i<N;i++){
        if(resp[i]>max){
            max=resp[i];
        }
        if(resp[i]<min){
            min=resp[i];
        }
    }
    sum=0;
    for(i=0;i<N;i++){
        sum+=resp[i];
    }
    ave=sum/N;
    printf("サンプリングレート:%d数/秒\n",rate);
    printf("最大値:%d\n",max);
    printf("最小値:%d\n",min);
    printf("平均値:%f\n",ave);
    free(etime);
    free(resp);

    /* ending */
    fclose(fp);
}

/*task4*/
#include <stdio.h>
#include <stdlib.h>

#define BUF_SIZE 256

int main()
{
    /* open file */
    FILE *fp = fopen("c1_data.txt", "r");
    if (fp == NULL) {
        printf("Can't open data file.\n");
        return 1;
    }

    /* read data */
    char buf[BUF_SIZE],buf2[BUF_SIZE];
    int*etime;
    int*resp;
    int i,N;
    fgets(buf2,BUF_SIZE-1,fp);
    N=atoi(buf2);
    etime=malloc(sizeof(int)*N);
    resp=malloc(sizeof(int)*N);
    for (i = 0; i < N; i ++) {
            fgets(buf, BUF_SIZE-1, fp);
            sscanf(buf, "%d,%d\n", &etime[i], &resp[i]);
        }
    int j,M;
    M=5;
    float*respma;
    respma=malloc(sizeof(float)*N);
    float*sum2;
    sum2=malloc(sizeof(float)*N);
    sum2[i]=0;
    for(i=99; i<109;i++){
        for(j=0;j<M;j++){
        sum2[i]+=resp[i-j];
        }
        respma[i]=sum2[i]/M;
        printf("%f\n",respma[i]);
    }
    free(etime);
    free(resp);
    free(respma);
    free(sum2);

    /* ending */
        fclose(fp);
}

/*task5*/
#include <stdio.h>
#include <stdlib.h>

#define BUF_SIZE 256

int main()
{
    /* open file */
    FILE *fp = fopen("c1_data.txt", "r");
    if (fp == NULL) {
        printf("Can't open data file.\n");
        return 1;
    }

    /* read data */
    char buf[BUF_SIZE],buf2[BUF_SIZE];
    int*etime;
    int*resp;
    int i,N;
    fgets(buf2,BUF_SIZE-1,fp);
    N=atoi(buf2);
    etime=malloc(sizeof(int)*N);
    resp=malloc(sizeof(int)*N);
    for (i = 0; i < N; i ++) {
            fgets(buf, BUF_SIZE-1, fp);
            sscanf(buf, "%d,%d\n", &etime[i], &resp[i]);
        }
    int ave,sum;
        sum=0;
        for(i=0;i<N;i++){
            sum+=resp[i];
        }
        ave=sum/N;
    int j,M;
        M=5;
        int*respma;
        respma=malloc(sizeof(int)*N);
        int*sum2;
        sum2=malloc(sizeof(int)*N);
        sum2[i]=0;
        for(i=0; i<N;i++){
            for(j=0;j<M;j++){
            sum2[i]+=resp[i-j];
            }
            respma[i]=sum2[i]/M;
        }
    for(i=0; i<N;i++){
        if (ave==respma[i]&&respma[i]>respma[i+1]){
           printf("%d\n",etime[i]);
       }
       }
    free(etime);
    free(resp);
    free(respma);
    free(sum2);

    /* ending */
        fclose(fp);
    }
