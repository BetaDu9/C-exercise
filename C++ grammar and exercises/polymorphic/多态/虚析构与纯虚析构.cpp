#include <iostream>
#include<string>
using namespace std;

////�������п����˴洢�ڶ���������֮����Ҫʹ���������봿������
////�������������ָ���޷��ͷ������������ڴ������
//class animal{
//public:
//	animal(){
//	cout<<"animal�Ĺ��캯������"<<endl;
//	}
//	//������������Ҫ����ʵ��
//	/* virtual ~animal(){
//  cout<<"animal����������������"<<endl;
//  }*/
//	//��������������Ҫ����������ʵ��
//	//�д���������������Ϊ������
//	virtual ~animal()=0;
//  virtual void speak()=0 ;
//};
//
//class cat:public animal{
//public:
//	//������������ڴ洴��һ������
//	cat(string name){
//	cout<<"cat�Ĺ��캯������"<<endl;
//	m_name=new string(name);
//	}
//	void speak(){
//	cout<<*m_name<<"Сè˵��"<<endl;
//	}
//	string *m_name;
//	//�ֶ��ͷŶ�������
//	~cat(){
//		if(m_name!=NULL){
//			delete m_name;
//			m_name=NULL;
//cout<<"cat��������������"<<endl;
//}
//	}
//};
//
////��������������ʵ��
//animal::~animal(){
//  cout<<"animal�Ĵ���������������"<<endl;
//}
//
//void test(){
//	//���ӹ��캯������
//animal* animal=new cat("tom");
////speak��������
//animal->speak();
////animal��virtual��Ϊ������֮��cat������������
////animal��������
//delete animal;
//}
//
//int main(){
//	test();
//
//system("pause");
//return 0;
//}