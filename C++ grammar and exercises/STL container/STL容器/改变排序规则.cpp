//#include <iostream>
//#include<string>
//#include<set>
//using namespace std;
//
////自定义数据类型的排序规则定义
//class person{
//public:
//	//提供接口初始化成员属性
//	person(string name,int age){
//	this->m_name=name;
//	this->m_age=age;
//	
//	}
//	string m_name;
//	int m_age;
//};
//
////仿函数，自定义排序规则
//class compare{
//public:
//	//重定义()
//	bool operator()(const person&p1,const person&p2){
//	return p1.m_age<p2.m_age;
//	
//	}
//
//};
//
//void test(){
//person p1("唐僧",34);
//person p2("孙悟空",60);
//person p3("猪八戒",18);
//person p4("沙和尚",19);
//
//set<person,compare>s;
//s.insert(p1);
//s.insert(p2);
//s.insert(p3);
//s.insert(p4);
//
//for(set<person,compare>::iterator it=s.begin();it!=s.end();it++){
//	cout<<"姓名："<<it->m_name<<" "<<"\t年龄："<<it->m_age<<endl;
//}
//
//}
//
//int main(){
//
//	test();
//
//system("pause");
//return 0;
//
//}