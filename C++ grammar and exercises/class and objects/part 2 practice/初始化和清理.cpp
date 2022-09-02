#include<iostream>
#include<string>
using namespace std;

////构造函数分类及调用
//class person{
//public:
//	//构造函数分类：无参，有参，拷贝
//	person() {
//	
//	cout <<"无参构造函数的调用"<<endl;
//	};
//	person(int a){
//		age=a;
//	cout <<"有参构造函数的调用"<<endl;
//	};
//	person(const person &p){
//		age=p.age;
//	cout <<"拷贝构造函数的调用"<<endl;
//	};
//
//~person(){
//	cout <<"析构函数的调用"<<endl;
//	};
//int age;
//};
//
////构造函数的调用
//void test01(){
// //1.括号法
//  person p1;
//  person p2(10);
//  person p3 (p1);
//  //2.显示法
//  person p4= person(10);
//  person p5= person (p1);
//  //3.隐式转换法
//  person p6= 10;
//  person p7= p6;
//}
//
//int main(){
//    test01();
//	
//	system("pause"); 
//	return 0;
//}

//初始化列表

//class person{
//public:
	//传统构造函数给成员变量赋初值
	/*person(int a,int b,int c){
	 m_a=a;
	 m_b=b;
	 m_c=c;
	 }*/

//	//初始化列表赋初值
//	person(int a,int b,int c): m_a(a),m_b(b),m_c(c)
//	{
//	 
//	 };
//	//成员变量
//	int m_a;
//	int m_b;
//	int m_c;
//};
//
//void test(){
//person p(3,2,1);
//cout<<"m_a= "<<p.m_a<<endl;
//cout<<"m_b= "<<p.m_b<<endl;
//cout<<"m_c= "<<p.m_c<<endl;
//}
//
//int main(){
//test();
//
//system("pause");
//return 0;
//
//}


//类对象作为类成员
class phone{
	
public:	
	
	phone(string pName){
	cout<<"phone 构造函数调用"<<endl;
	m_pName=pName;
	}
	~phone(){
	cout<<"phone 析构函数调用"<<endl;
	}
	string m_pName;

};


//class person{
//	
//public:
//	
//	person(string name,string pName){
//	m_name=name;
//	phone m_phone=pName;
//	
//	}
//	
//	//初始化列表法初始化
//	/*person(string name,string pName):m_name(name),m_phone(pName){
//	
//		cout<<"person 构造函数调用"<<endl;
//	}*/
//
//	~person(){
//	cout<<"person 析构函数调用"<<endl;
//	}
//
//	string m_name;
//	//类成员为一个类
//	phone m_phone;
//
//
//};
//
//void test(){
//person p("咚咚咚","max");
//cout<< p.m_name<<"使用： "<<p.m_phone.m_pName<<endl;
//}
//
//int main(){
//test();
//
//
//system("pause");
//return 0;
//}


////静态成员函数
//class person{
//public:
//	static void func(){
//		cout<<"静态成员函数的调用"<<endl;
//		//静态函数只能访问静态变量
//		//m_age=19;
//		
//
//	};
//
//	static int m_phone;
//	int m_age;
//
//};
//
//void test(){
//	//静态成员函数可以通过
//	//1.创建对象
//	person p;
//	p.func();
//	 //2.类名 进行调用
//	/*person ::func();*/
//}
//
//int main(){
//	test();
//
//system("pause");
//return 0;
//}

////成员变量和成员函数分开存储
////空对象占用一个字节（占位），非静态成员变量int占用4个字节
////静态成员变量或函数不影响对象占用内存，不属于类对象
//class person{
//	static void func(){
//	}
//	
//	int c;
//static int b;
//};
//
//void test(){
//	person p;
//	sizeof(p);
//cout<<sizeof(p)<<endl;
//}
//
//int main(){
//test();
//
//
//system("pause");
//return 0;
//}


////this指针指向被调用的成员函数所指向的对象
//class person{
//public:
//	person(int age){
//	this->age=age;
//	
//	}
//	int age;
//};
//
//void test(){
//	person p;
//	person p(18);
//	cout<<"p的年龄为： "<<p.age<<endl;
//
//}
//int main(){
//test();
//
//system("pause");
//return 0;
//}