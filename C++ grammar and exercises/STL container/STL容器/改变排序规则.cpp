//#include <iostream>
//#include<string>
//#include<set>
//using namespace std;
//
////�Զ����������͵����������
//class person{
//public:
//	//�ṩ�ӿڳ�ʼ����Ա����
//	person(string name,int age){
//	this->m_name=name;
//	this->m_age=age;
//	
//	}
//	string m_name;
//	int m_age;
//};
//
////�º������Զ����������
//class compare{
//public:
//	//�ض���()
//	bool operator()(const person&p1,const person&p2){
//	return p1.m_age<p2.m_age;
//	
//	}
//
//};
//
//void test(){
//person p1("��ɮ",34);
//person p2("�����",60);
//person p3("��˽�",18);
//person p4("ɳ����",19);
//
//set<person,compare>s;
//s.insert(p1);
//s.insert(p2);
//s.insert(p3);
//s.insert(p4);
//
//for(set<person,compare>::iterator it=s.begin();it!=s.end();it++){
//	cout<<"������"<<it->m_name<<" "<<"\t���䣺"<<it->m_age<<endl;
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