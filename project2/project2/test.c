#include<stdio.h>
#define MAX(X,Y)(X>Y?X:Y)
int main(){

	//��Ķ���
	int a=10;
	int b=20;
	int max=MAX(a,b);
	printf("%d\n",max);
	/*printf("hollow c����");*/

	/*extern int g_val;
	extern int Add(int x,int y);
	printf("%d\n",g_val);
	int a=10;
	int b=20;
	int sum=Add(a,b);*/
	/*printf("%d\n",sum);*/
	////��Ŀ��������Ƚϴ�С
	//int a=10;
	//int b=20;
	//int max=0;
	//max=(a>b?a:b);
	//if(a>b){
	//	max=a;
	//}else{
	//	max=b;
	//}
	//printf("%d\n",max);
	////�߼�������
	///*int a=0;
	//int b=3;
	//int c=a&&b;
	//int d=a&b;
	//int e=a||b;
	//int f=!b;*/
	//printf("%d %d %d %d",c,d,e,f);
	//void bubble_sort(int arr[],int sz);
	////ð������
	//int arr[]={8,6,3,7,9,5,3,6,8,5,4};
	//int i=0;
	//int sz=sizeof(arr)/sizeof(arr[0]);
	//bubble_sort(arr,sz);
	//for(i=0;i<sz;i++){
	//	printf("%d ",arr[i]);
	//}
	//��ά����ı���
	/*int arr[3][4]={{1,2,3},{4,5}};
	int i;
	for(i=0;i<3;i++){
		int j;
		for(j=0;j<4;j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}*/
	//����ȡ��ַ
	/*int arr[]={1,2,3,4,5,6,7,8,9,0};
	int sz=sizeof(arr)/sizeof(arr[0]);
	int i=0;
	for(i=0;i<sz;i++){
		printf("&arr[%d]=%p\n",i,&arr[i]);
	}*/
	return 0;
}
//ð�����򷽷�
void bubble_sort(int arr[],int sz){
	int i;
	for(i=0;i<sz-1;i++){
		int j;
		int flag=1;
		for(j=0;j<sz-1-i;j++){
		if(arr[j]>arr[j+1]){
			int tmp=arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=tmp;
			flag=0;
		}
		}
		if(flag==1){
			break;
		}
	}
}