#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#define MAX(X,Y)(X>Y?X:Y)
struct Book{
	char name[20];
	short price;
};
int main(){
	//�ṹ��
	//struct Book b1={"c���Գ������",55};
	///*printf("����:%s\n�۸�%d\n",b1.name,b1.price);*/
	//strcpy(b1.name,"C++");
	//struct Book* pb=&b1;
	//printf("�۸�%d\n",(*pb).price);
	//printf("�۸�%d\n",pb->price);
	//printf("����:%s\n�۸�%d\n",b1.name,b1.price);
	//b1.price=15;
	//printf("�޸ĺ�۸�%d\n",b1.price);
	//ָ���С
	/*char ch='w';
	char* pc=&ch;
	printf("%d\n",sizeof(pc));*/
	/**pc='a';
	printf("%c\n",ch);*/
	////ȡ��ַ
	//int a=10;
	//int* p=&a;
	//printf("%p\n",&a);
	//printf("%p\n",p);
	//���ʹ��
	//int a=10;
	//int b=20;
	//int max=MAX(a,b);
	/*printf("max=%d\n",max);*/
	//extern�ؼ����ں����е�ʹ��
	/*extern int Add(int x,int y);
	int a=10;
	int b=20;
	int sum=Add(a,b);
	printf("sum=%d\n",sum);*/
	//extern�ؼ���
	/*extern int g_val;
	printf("g_val=%d\n",g_val);*/
	//static�ؼ���
	/*void test();
	int i=1;
	while(i<5){
		test();
		i++;
	}*/
	return 0;
}
//void test(){
//	static int a=1;
//	a++;
//	printf("a=%d\n",a);
//}