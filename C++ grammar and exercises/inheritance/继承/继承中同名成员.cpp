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
//	cout<<"�����Ա�������"<<endl;
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
//	cout<<"�������Ա�������"<<endl;
//	}
//	int m_a;
//};
//
//void test(){
//	//�Ǿ�̬��Ա������ͨ��������ú���
//	son s;
//	//Ĭ�ϵ�������ͬ������
//	s.func();
//	//���������Է��ʻ���ͬ������
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


////�̳���ͬ����̬��Ա
//class base{
//public:
//
//	static void func(){
//	cout<<"�����Ա�������"<<endl;
//	}
//
//static int m_a;
//};
//
//class son:public base{
//public:
//	
//	static void func(){
//	cout<<"�������Ա�������"<<endl;
//	}
//	static int m_a;
//};
//
////��̬��Ա���������ʼ��
//int base::m_a=10;
//int son::m_a=30;
//
//void test(){
//	//��̬��Ա���Ե��ã�ͨ������
//	/*son s;
//	cout<<s.m_a<<endl;*/
//	//��̬��Ա���Ե��ã�ͨ������
//	//���Σ���һ��Ϊ�������ʷ�ʽ��һ��Ϊ����������
//	cout<<son::m_a<<endl;
//	cout<<son::base::m_a<<endl;
//
//	//��̬��Ա����
//	    //ͨ����������
//	son::func();
//	son::base::func();
//	   //ͨ���������
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