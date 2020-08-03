#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void){
    FILE *file1;
    FILE *file2;
    char s[40];
    char ts[15],as[15],bs[15];
    double time[51],a[51],b[51],c[51],d[51];
    
    int  t,i,j;

    /* file open */
    if((file1 = fopen("inputdata_win.txt","r"))==NULL){
        
        printf("can't open file inputdata_win.txt\n");

        exit(1);
    }
    else{
        printf("open file inputdata_win.txt\n");
    }

    if((file2 = fopen("outputdate.csv","w"))==NULL){
        
        printf("can't open file outputdate.csv\n");

        exit(1);
    }
    /* load date */
    fgets(s,39,file1);
    
    for(t=0;t<51;t++){
        fgets(s,39,file1);
        printf("%s\n",s);  /*check*/
        
    i=0;
    for(j=0;s[i]!='\t';j++,i++){
        ts[j]=s[i];
        ts[j]='\0';
    }
    time[t]=atof(ts);
    
    printf("%s\n",ts);
    printf("%f\n",time[t]); 
    }

    /*  close data */
    fclose(file1);
    printf("close file inputdate_win.txt\n");

    fclose(file2);
    printf("close file outputdate.csv\n");
    
    return 0;
    
}
    
    

