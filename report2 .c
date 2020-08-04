/* Advanced Computer Programming I
   19T0821U
   大久保春陽
   8/4  */

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
    /* name */
    printf("19T0821U\t大久保春陽\n");

    /* file open */
    if((file1 = fopen("inputdata_win.txt","r"))==NULL){
        
        printf("can't open file inputdata_win.txt\n");
        exit(1);
    }
    else{
        printf("open file inputdata_win.txt\n");
    }

    if((file2 = fopen("outputdata.csv","w"))==NULL){
        
        printf("can't open file outputdata.csv\n");

        exit(1);
    }
    /* load date */
    fgets(s,39,file1);
    
    for(t=0;t<51;t++){
        fgets(s,39,file1);

        /*  time  */
        i=0;
        for(j=0;s[i]!='\t';j++,i++){
            ts[j]=s[i]+'\0';
        }
        time[t]=atof(ts);
    

        /*  signal_a  */
        i+=1;
        for(j=0;s[i]!='\t';j++,i++){
            as[j]=s[i]+'\0';
        }
        a[t]=atof(as);
        
        /*  signal_b  */
        for(j=0;s[i]!='\n';j++,i++){
            bs[j]=s[i]+'\0';
        }
        b[t]=atof(bs);

        /* c[t],d[t] */
        c[t]=a[t]+b[t];
        d[t]=(a[t]*a[t])+(b[t]*b[t]);

        if(t==0){
            fprintf(file2,"time,c[t],d[t]\n");
        }
        fprintf(file2,"%f,%f,%f\n",time[t],c[t],d[t]);
        
    } 
    /*  close data */
    fclose(file1);
    printf("close file inputdata_win.txt\n");

    fclose(file2);
    printf("close file outputdata.csv\n");
    
    return 0;
    
}
    
    

