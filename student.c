#include <stdio.h>
#include <stdlib.h>
#define TRUE  1
#define FALSE  0
#define OK   1
#define ERROR  0
#define INFEASIBLE -1
#define OVERFLOW  -2
#define N 500
struct student
{
	int ID;
	char name[25];
	char sex[25];
	int eng_sco;
	int math_sco;
}Stu[N];



int main()
{
	int i=0,j;

	struct student Stu[500];
	
	FILE *fp;
	if((fp=fopen("./student_2.txt","r"))==NULL)			// 打开文件并且让fp指向 文件 
	{
		printf("不能打开文件\n");
		exit(ERROR);
	}
	
	
	while(!feof(fp))                     //读取一组数据后指针指向下一组数据，并且判断是否指向最后一行 
	//while(i<20)
	{ 
		//fscanf(fp,"%d,%[^,],%[^,],%d,%d",&Stu[i].ID,&Stu[i].name,&Stu[i].sex,&Stu[i].eng_sco,&Stu[i].math_sco);
		fscanf(fp,"%d %s %s %d %d",&Stu[i].ID,Stu[i].name,Stu[i].sex,&Stu[i].eng_sco,&Stu[i].math_sco);
		//printf("%d,%s,%s,%d,%d\n",Stu[i].ID,Stu[i].name,Stu[i].sex,Stu[i].eng_sco,Stu[i].math_sco);
		i++;
	}             //%[^,]  字符串以，为结束标志 
	j=i;
	//printf("%d\n",i);
	for(i=0;i<j;i++)
	{
		printf("%d,%s,%s,%d,%d\n",Stu[i].ID,Stu[i].name,Stu[i].sex,Stu[i].eng_sco,Stu[i].math_sco);
	}
	fclose(fp);//关闭文件； 
	return OK;
}
