#include <iostream>
#include<string>
using namespace std;

////��ͨʵ�ַ�ʽ
//class calculator{
//public: int getresult(string oper){
//			if(oper=="+"){
//			return m_num1+m_num2;
//			}
//			else if(oper=="-")
//			{
//				return m_num1-m_num2;
//			}
//			else if(oper=="*")
//			{
//			return m_num1*m_num2;
//			}
//			else if(oper=="/")
//			{
//			return m_num1/m_num2;
//			}
//
//		}
//	int m_num1;
//	int m_num2;
//};
//
//void test(){
//  calculator cal;
//  cal.m_num1=100;
//  cal.m_num2=10;
//  cout<<cal.m_num1<<"+"<<cal.m_num2<<"="<<cal.getresult("+")<<endl;
//cout<<cal.m_num1<<"-"<<cal.m_num2<<"="<<cal.getresult("-")<<endl;
//cout<<cal.m_num1<<"*"<<cal.m_num2<<"="<<cal.getresult("*")<<endl;
//cout<<cal.m_num1<<"/"<<cal.m_num2<<"="<<cal.getresult("/")<<endl;
//}
//
//int main(){
//	test();
//
//	system("pause");
//return 0;
//}


//���ö�̬��ܹ�
//���������ܺ���
class abstractCalculator{
public:
	virtual int getresult(){
	return 0;
	}

	int m_num1;
    int m_num2;
};

//�Ӽ��˳�ͨ������̳л��࣬�ֱ�ʵ��
//�ܹ�������������չά��
class addCalculator:public abstractCalculator{
public:	
	virtual int getresult(){
	return m_num1+m_num2;
	}
};

class subCalculator:public abstractCalculator{
public:
	int getresult(){
	return m_num1-m_num2;
	}
};

class mulCalculator:public abstractCalculator{
public:
	int getresult(){
	return m_num1*m_num2;
	}
};

class divCalculator:public abstractCalculator{
public:
	int getresult(){
	return m_num1/m_num2;
	}
};

void test(){
	//�ӷ�
	abstractCalculator* abs=new addCalculator;//����ָ��ָ���Ӻ�������
	abs->m_num1=100;
	abs->m_num2=10;
	cout<<abs->m_num1<<"+"<<abs->m_num2<<"="<<abs->getresult()<<endl;
	delete abs;   //�ͷ�ָ��ָ������ݣ�ָ����Ȼ����
	//����
	 abs=new subCalculator;//���¸�ֵָ��ָ����ڴ�
	abs->m_num1=100;
	abs->m_num2=10;
	cout<<abs->m_num1<<"-"<<abs->m_num2<<"="<<abs->getresult()<<endl;
	delete abs;
	//�˷�
	 abs=new mulCalculator;
	abs->m_num1=45;
	abs->m_num2=2;
	cout<<abs->m_num1<<"*"<<abs->m_num2<<"="<<abs->getresult()<<endl;
	delete abs;
	//����
    abs=new divCalculator;
	abs->m_num1=100;
	abs->m_num2=10;
	cout<<abs->m_num1<<"/"<<abs->m_num2<<"="<<abs->getresult()<<endl;
	delete abs;

}

int main(){
	test();

system("pause");
return 0;
}