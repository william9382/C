#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//#define MAX 10
//enum Sex{
//	MALE,
//	FEMLE,
//	SECERT
//};
int main()
{	int arr[10]={0};
	int sz=0;
	printf("%d\n",sizeof(arr));
	sz=sizeof(arr)/sizeof(arr[0]);
	printf("%d\n",sz);
	/*int a=2;
	int b=a>>2;
	printf("%d\n%d\n",a,b);*/
	/*int arr[10]={1,2,3,4,5,6,7,8,9,0};
	int i=0;
	while(i<10){
		printf("%d ",arr[i]);
		i++;
	}*/

	/*int line=0;
	printf("Ŭ��ѧϰ����̤ʵ��");
	while(line<100){
		printf("дһ�д��룬д���ܴ���Ϊ��%d\n",line);
		line++;
	}*/
	/*char coding;
	printf("���д�����𣿡������� ���� �� ��\n");
	scanf("%d",&coding);
	if(coding==){
		printf("��ã���������\n");
	}else{
	    printf("���ź���\n");
	}*/
	/*char arr1[]="abc";
	char arr2[]={'a','b','c'};
	printf("%d\n %d\n",strlen(arr1),strlen(arr2));*/
	/*printf("%d %d %d\n",MALE,FEMLE,SECERT);*/
	/*int arr[MAX]={0};
	printf("%d\n",MAX);*/
	return 0;
	/*int num1,num2,sum;
	scanf("%d%d",&num1,&num2);
	sum=num1+num2;
	printf("sum=%d\n",sum);
	return 0;*/
}