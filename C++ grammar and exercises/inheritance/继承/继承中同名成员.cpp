#include <iostream>
#include<string>
using namespace std;

//class base{
//public:
//	base(){
//	m_a=10;
//	}
//
//	void func(){
//	cout<<"基类成员函数输出"<<endl;
//	}
//
//int m_a;
//};
//
//class son:public base{
//public:
//	son(){
//	m_a=20;
//	
//	}
//	void func(){
//	cout<<"派生类成员函数输出"<<endl;
//	}
//	int m_a;
//};
//
//void test(){
//	//非静态成员变量：通过对象调用函数
//	son s;
//	//默认调用子类同名函数
//	s.func();
//	//加作用域以访问基类同名函数
//	s.base::func();
//	cout<<s.base::m_a<<endl;
//	
//}
//
//int main(){
//
//	test();
//	system("pause");
//return 0;
//}


////继承中同名静态成员
//class base{
//public:
//
//	static void func(){
//	cout<<"基类成员函数输出"<<endl;
//	}
//
//static int m_a;
//};
//
//class son:public base{
//public:
//	
//	static void func(){
//	cout<<"派生类成员函数输出"<<endl;
//	}
//	static int m_a;
//};
//
////静态成员属性类外初始化
//int base::m_a=10;
//int son::m_a=30;
//
//void test(){
//	//静态成员属性调用：通过对象
//	/*son s;
//	cout<<s.m_a<<endl;*/
//	//静态成员属性调用：通过类名
//	//两次：：一次为类名访问方式，一次为作用域声明
//	cout<<son::m_a<<endl;
//	cout<<son::base::m_a<<endl;
//
//	//静态成员函数
//	    //通过类名调用
//	son::func();
//	son::base::func();
//	   //通过对象调用
//	son s;
//	s.func();
//	s.base::func();
//}
//
//int main(){
//
//	test();
//	system("pause");
//return 0;
//}