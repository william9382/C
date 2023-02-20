#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#define MAX(X,Y)(X>Y?X:Y)
struct Book{
	char name[20];
	short price;
};
int main(){
	//结构体
	//struct Book b1={"c语言程序设计",55};
	///*printf("书名:%s\n价格：%d\n",b1.name,b1.price);*/
	//strcpy(b1.name,"C++");
	//struct Book* pb=&b1;
	//printf("价格：%d\n",(*pb).price);
	//printf("价格：%d\n",pb->price);
	//printf("书名:%s\n价格：%d\n",b1.name,b1.price);
	//b1.price=15;
	//printf("修改后价格：%d\n",b1.price);
	//指针大小
	/*char ch='w';
	char* pc=&ch;
	printf("%d\n",sizeof(pc));*/
	/**pc='a';
	printf("%c\n",ch);*/
	////取地址
	//int a=10;
	//int* p=&a;
	//printf("%p\n",&a);
	//printf("%p\n",p);
	//宏的使用
	//int a=10;
	//int b=20;
	//int max=MAX(a,b);
	/*printf("max=%d\n",max);*/
	//extern关键字在函数中的使用
	/*extern int Add(int x,int y);
	int a=10;
	int b=20;
	int sum=Add(a,b);
	printf("sum=%d\n",sum);*/
	//extern关键字
	/*extern int g_val;
	printf("g_val=%d\n",g_val);*/
	//static关键字
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