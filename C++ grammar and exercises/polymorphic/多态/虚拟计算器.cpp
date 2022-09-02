#include <iostream>
#include<string>
using namespace std;

////普通实现方式
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


//利用多态搭建架构
//创建抽象总函数
class abstractCalculator{
public:
	virtual int getresult(){
	return 0;
	}

	int m_num1;
    int m_num2;
};

//加减乘除通过子类继承基类，分别实现
//架构清晰，易于扩展维护
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
	//加法
	abstractCalculator* abs=new addCalculator;//基类指针指向子函数对象
	abs->m_num1=100;
	abs->m_num2=10;
	cout<<abs->m_num1<<"+"<<abs->m_num2<<"="<<abs->getresult()<<endl;
	delete abs;   //释放指针指向的数据，指针任然存在
	//减法
	 abs=new subCalculator;//重新赋值指针指向的内存
	abs->m_num1=100;
	abs->m_num2=10;
	cout<<abs->m_num1<<"-"<<abs->m_num2<<"="<<abs->getresult()<<endl;
	delete abs;
	//乘法
	 abs=new mulCalculator;
	abs->m_num1=45;
	abs->m_num2=2;
	cout<<abs->m_num1<<"*"<<abs->m_num2<<"="<<abs->getresult()<<endl;
	delete abs;
	//除法
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