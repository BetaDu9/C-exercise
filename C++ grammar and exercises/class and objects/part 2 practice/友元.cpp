#include<iostream>
using namespace std;
#include<string>

////友元，一个类访问另一个类私密属性的特殊权限
////全局函数做友元
//class building{
//	//全局函数作为类的friend可以访问私有属性
//	friend void goodfriend (building& building);	
//public: 
//	building(){
//	m_sittingroom="客厅";
//	m_bedroom="卧室";
//
//	}
//
//string m_sittingroom;
//private:string m_bedroom;
//
//};
//
//void goodfriend (building& building){
//	cout<<"朋友正在访问： "<<building.m_sittingroom<<endl;
//	cout<<"朋友正在访问： "<<building.m_bedroom<<endl;
//	
//}
//
//int main(){
//	
//	building building;
//	goodfriend(building);
//
//system("pause");
//return 0;
//}

//类作为类的friend可以访问私有属性
class Building{
	
	friend class goodfriend; 	
public: 
	Building(){
	m_sittingroom="客厅";
	m_bedroom="卧室";
	}//成员函数初始化成员变量

	//成员变量
string m_sittingroom;
private:string m_bedroom;

};

class goodfriend{
public:
	//成员函数
	void visit();
	goodfriend();
	Building *building;

};

//类外构造函数
goodfriend::goodfriend(){
	building =new Building ;
}

void goodfriend::visit(){
	cout<<"朋友正在访问： "<<building->m_sittingroom<<endl;
	cout<<"朋友正在访问： "<<building->m_bedroom<<endl;
}


int main(){
	goodfriend gg;
	gg.visit();
	
system("pause");
return 0;
}