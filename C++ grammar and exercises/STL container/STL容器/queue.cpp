//#include <iostream>
//#include<string>
//#include<queue>
//using namespace std;
//
////���У��Ƚ��ȳ�
//class person{
//public:
//	//�ṩ�ӿڳ�ʼ����Ա����
//	person(string name,int age){
//	this->m_name=name;
//	this->m_age=age;
//	
//	}
//
//	string m_name;
//	int m_age;
//
//};
//
//
//void test(){
//	//���������
//	person p1("��ɮ",34);
//	person p2("�����",60);
//	person p3("��˽�",18);
//	person p4("ɳ����",19);
//	//������Ԫ��Ϊ�����
//	queue<person>q;
//	q.push(p1);//���
//	q.push(p2);
//	q.push(p3);
//	q.push(p4);
//	//��ȡ������Ԫ�ظ���
//	cout<<"����������"<<q.size()<<endl;
//
//	while(!q.empty()){
//	cout<<"��ͷ��"<<q.front().m_name<<" "<<q.front().m_age<<endl;//���ض�������βԪ��
//	cout<<"��β��"<<q.back().m_name<<" "<<q.back().m_age<<endl;
//	q.pop();//����
//	
//	}
//	cout<<"����������"<<q.size()<<endl;
//
//}
//
//int main(){
//
//	test();
//system("pause");
//return 0;
//}