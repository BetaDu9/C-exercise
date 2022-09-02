#include <iostream>
#include<string>
using namespace std;

////在子类中开辟了存储在堆区的属性之后需要使用虚析构与纯虚析构
////虚析构解决父类指针无法释放子类对象堆区内存的问题
//class animal{
//public:
//	animal(){
//	cout<<"animal的构造函数调用"<<endl;
//	}
//	//虚析构函数需要具体实现
//	/* virtual ~animal(){
//  cout<<"animal的虚析构函数调用"<<endl;
//  }*/
//	//纯虚析构函数需要声明和类外实现
//	//有纯虚析构函数的类为抽象类
//	virtual ~animal()=0;
//  virtual void speak()=0 ;
//};
//
//class cat:public animal{
//public:
//	//子类堆区开辟内存创建一个属性
//	cat(string name){
//	cout<<"cat的构造函数调用"<<endl;
//	m_name=new string(name);
//	}
//	void speak(){
//	cout<<*m_name<<"小猫说话"<<endl;
//	}
//	string *m_name;
//	//手动释放堆区数据
//	~cat(){
//		if(m_name!=NULL){
//			delete m_name;
//			m_name=NULL;
//cout<<"cat的析构函数调用"<<endl;
//}
//	}
//};
//
////纯虚析构的类外实现
//animal::~animal(){
//  cout<<"animal的纯虚析构函数调用"<<endl;
//}
//
//void test(){
//	//父子构造函数调用
//animal* animal=new cat("tom");
////speak函数调用
//animal->speak();
////animal加virtual成为虚析构之后cat析构函数调用
////animal析构函数
//delete animal;
//}
//
//int main(){
//	test();
//
//system("pause");
//return 0;
//}