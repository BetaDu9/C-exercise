#include <iostream>
#include<string>
using namespace std;

//int* func(){
//  int* p=new int(200);
//  return p;
//}
//
//
//int main(){
//	int* a=func();
//	cout<<*a<<endl;
//	cout<<*a<<endl;
//
//	delete a;//释放堆区数据
//	//cout<<*a<<endl;//访问不到数据，出现乱码
//
//	//堆区开辟数组
//	int* arr=new int[10];
//	for(int i=0;i<10;i++){
//	   arr[i]=i+99;
//	}
//	for(int i=0;i<10;i++){
//	   cout<<arr[i]<<endl;
//	}
//	delete[] arr; //释放堆区数组
//
//system("pause");
//return 0;
//}