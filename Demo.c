#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//INSERT-MYTABLE1("1001","Jack","b")INSERT-MYTABLE1("1001","Jack","b")
/*
��������ʱ��ֻ��Ҫ����������д���һ�鸴�ƽ��ַ����棬�ûس��Ϳ����ˣ�Ҳ���Ը���������������д��� 
C:\Users\Administrator\Desktop\Demo(MYTABLE2).txt
INSERT-MYTABLE2("
","Jack","b")
*/
int main(){
	FILE *fp;
	char File_Path[50];
	char First[50];
	char Last[50];
	char Number_char[20]={'\0'}; 
	char SQL[100]={'\0'}; 
	int i=0,j=0;
	int Number=10001;
	printf("������·��:\n"); 
	scanf("%s",File_Path); 
	if((fp = fopen(File_Path,"w+"))== NULL){
		printf("Cannot open file.\n");
		exit(0); 
	} 
	
	
	
	
	printf("������ǰ���:\n"); 
	scanf("%s",First);
	printf("���������:\n");
	scanf("%s",Last);
	
	
	
	for(;Number<=20001;Number++){
		sprintf(Number_char, "%d",Number);
		//printf("%s",First);
		//printf("%s",Number_char);
		//printf("%s\n",Last);
		
		
		for(i=0;i<strlen(SQL);i++){
			SQL[i]='\0'; 
		} 
		strcat(SQL,First);
		strcat(SQL,Number_char);
		strcat(SQL,Last);
		SQL[strlen(SQL)]='\0'; 
		//printf("ƴ�Ӻ��SQL�����:\n%s\n\n\n",SQL); 
		fputs(SQL,fp); 
		//fwrite(&Number_char,sizeof(Number_char),6,fp); 
		//fwrite("",sizeof(""),0,fp);
		//fputs(Last,fp); 
		//fwrite("\n",sizeof("\n"),1,fp);
		//fwrite(&Last,sizeof(Last),12,fp); 
		//fwrite("\n",sizeof("\n"),1,fp);
		fprintf(fp,"\n");
	} 
	fclose(fp); 
} 
