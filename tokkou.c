  /*  問題1　　*/
#include <stdio.h>
int main (void){
 char dept[] = "medsys";

 printf("配列の先頭アドレス = %p\n",&dept[0]);
 printf("学科 = %s\n",dept);

 return 0;
}

/* 問題2　*/
#include <stdio.h>
void print_n(char str[], int num);
int main (void){
    
    char str[127]; 
    int x;

    printf("文字列は？："); scanf("%s",str);
    printf("繰り返し回数は？："); scanf("%d",&x);

    print_n(str,x);

    return 0;
}

void print_n(char str[], int num){
  int i;

  for(i=0;i<num;i++){
    printf("%s",str);
  }
  printf("\n");

  return 0;
}

/* 問題3　*/
#include <stdio.h>
void count_n(char str[]);
int main(void){
  
  char str[127];

  printf("文字列は？："); scanf("%s",str);
  printf("文字数は%d個\n：",count_n(str));

  return 0;
}

int count_n(char str[]){
  int i;

  for(i=0;str[i],i++);

  return i;
}

/* 問題4　*/
#include <stdio.h>
int count_c(char str[],char c);
int main(void){
  
  char str[127];
  char ky;

  printf("文字列は？："); scanf("%s",str);
  printf("探す文字は？："）; scanf("%s",&ky);

  printf("文字%cはの%s中に%d個あります。\n",ky,str,count_n(str,ky));

  return 0;
}
int count_c(char str[],char c){

  int i;
  int k=0;

  for(i=0;str[i];i++){
    if (str[i]==c){
      k++;
    }
  }
  return k;
}

/* 問題5　*/
#include <stdio.h>
int count_c(char str[],char c);
int main(void){
  
  char str[127];

  printf("文字列は？："); scanf("%s",str);
  
  reverse(str);

  printf("%c\n",str);

  return 0;
}
void reverse(char* str){
	int size = strlen(str);
	int i,j;
	char tmp = {0};
	
	for(i = 0, j = size - 1; i < size / 2; i++, j--){
		tmp = str[i];
		str[i] = str[j];
		str[j] = tmp;
	}
	
	return;	
}

/* 問題6　*/
#include <stdio.h>
int compare(char str1[],char str2[]);
int main(void){
  
  char str1[127];
  char str2[127];
  
  printf("1つ目の文字列は？："); scanf("%s",str1);
  printf("2つ目の文字列は？："); scanf("%s",str2);

  printf("%d\n",compare(str1,str2));

  return 0;

}

int compare(char str1[],str2[]){
  int i;
  int j=1;

  for(i=0;str1[i]||str2[i];i++){
    if(str1[i]!=str2[i]){
      j--;
      break;
    }
  }
  return j;
}

}










