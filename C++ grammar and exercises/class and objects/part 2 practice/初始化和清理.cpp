#include<iostream>
#include<string>
using namespace std;

////���캯�����༰����
//class person{
//public:
//	//���캯�����ࣺ�޲Σ��вΣ�����
//	person() {
//	
//	cout <<"�޲ι��캯���ĵ���"<<endl;
//	};
//	person(int a){
//		age=a;
//	cout <<"�вι��캯���ĵ���"<<endl;
//	};
//	person(const person &p){
//		age=p.age;
//	cout <<"�������캯���ĵ���"<<endl;
//	};
//
//~person(){
//	cout <<"���������ĵ���"<<endl;
//	};
//int age;
//};
//
////���캯���ĵ���
//void test01(){
// //1.���ŷ�
//  person p1;
//  person p2(10);
//  person p3 (p1);
//  //2.��ʾ��
//  person p4= person(10);
//  person p5= person (p1);
//  //3.��ʽת����
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

//��ʼ���б�

//class person{
//public:
	//��ͳ���캯������Ա��������ֵ
	/*person(int a,int b,int c){
	 m_a=a;
	 m_b=b;
	 m_c=c;
	 }*/

//	//��ʼ���б���ֵ
//	person(int a,int b,int c): m_a(a),m_b(b),m_c(c)
//	{
//	 
//	 };
//	//��Ա����
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


//�������Ϊ���Ա
class phone{
	
public:	
	
	phone(string pName){
	cout<<"phone ���캯������"<<endl;
	m_pName=pName;
	}
	~phone(){
	cout<<"phone ������������"<<endl;
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
//	//��ʼ���б���ʼ��
//	/*person(string name,string pName):m_name(name),m_phone(pName){
//	
//		cout<<"person ���캯������"<<endl;
//	}*/
//
//	~person(){
//	cout<<"person ������������"<<endl;
//	}
//
//	string m_name;
//	//���ԱΪһ����
//	phone m_phone;
//
//
//};
//
//void test(){
//person p("������","max");
//cout<< p.m_name<<"ʹ�ã� "<<p.m_phone.m_pName<<endl;
//}
//
//int main(){
//test();
//
//
//system("pause");
//return 0;
//}


////��̬��Ա����
//class person{
//public:
//	static void func(){
//		cout<<"��̬��Ա�����ĵ���"<<endl;
//		//��̬����ֻ�ܷ��ʾ�̬����
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
//	//��̬��Ա��������ͨ��
//	//1.��������
//	person p;
//	p.func();
//	 //2.���� ���е���
//	/*person ::func();*/
//}
//
//int main(){
//	test();
//
//system("pause");
//return 0;
//}

////��Ա�����ͳ�Ա�����ֿ��洢
////�ն���ռ��һ���ֽڣ�ռλ�����Ǿ�̬��Ա����intռ��4���ֽ�
////��̬��Ա����������Ӱ�����ռ���ڴ棬�����������
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


////thisָ��ָ�򱻵��õĳ�Ա������ָ��Ķ���
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
//	cout<<"p������Ϊ�� "<<p.age<<endl;
//
//}
//int main(){
//test();
//
//system("pause");
//return 0;
//}