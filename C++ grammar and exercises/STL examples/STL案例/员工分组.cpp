//#include <iostream>
//#include<string>
//#include<map>
//using namespace std;
//#include<algorithm>
//#include<vector>
//#include<ctime>
//
////����Ա����Ϣ������vector������map����Ƕ��vector��������dep��Ϊ�����Էֲ�����ʾ
//class Employee{
//public:
//Employee(string name,int salary){
//		this->m_name=name;
//		this->m_salary=salary;
//		
//	}
//
//	string m_name;
//	int m_salary;
//
//};
//
//void createEmployee(vector<Employee>&v){
//	//���������͹���
//	string nameSeed="ABCDEFGHIJ";
//
//	for(int i=0;i<10;i++){
//	 string name="Ա��";
//	 name+=nameSeed[i];
//	 int sal=rand()%8000+10000;
//
//	Employee e(name,sal);
//	v.push_back(e);
//	}
//
//}
//
//void setDep(vector<Employee>&v,multimap<int,Employee>&m){
//	for(vector<Employee>::const_iterator it=v.begin();it!=v.end();it++){
//	 int dep=rand()%3+1;
//	 //��Ա��������Ϊkey��Ա����Ϣ��Ϊvalue����multimap����
//	 m.insert(make_pair(dep,*it));
//	}
//
//
//}
//
//void showEmployee(multimap<int,Employee>&m){
//	cout<<"�߻����ţ�"<<endl;
//
//	//�ҵ���һ���߻���Ա��λ��
//	multimap<int,Employee>::iterator pos=m.find (1);
//	int count=m.count(1);//�߻���Ա������
//	int num=0;
//	for(;pos!=m.end()&&num<count;pos++,num++){
//		cout<<"Ա��������"<<pos->second.m_name<<" "<<"���ʣ�"<<pos->second.m_salary<<endl;
//	}
//	cout<<endl;
//
//	cout<<"�������ţ�"<<endl;
//	pos=m.find (2);
//	count=m.count(2);//�߻���Ա������
//	num=0;
//	for(;pos!=m.end()&&num<count;pos++,num++){
//		cout<<"Ա��������"<<pos->second.m_name<<" "<<"���ʣ�"<<pos->second.m_salary<<endl;
//	}
//	cout<<endl;
//
//	cout<<"�з����ţ�"<<endl;
//	 pos=m.find (2);
//	count=m.count(2);//�߻���Ա������
//	num=0;
//	for(;pos!=m.end()&&num<count;pos++,num++){
//		cout<<"Ա��������"<<pos->second.m_name<<" "<<"���ʣ�"<<pos->second.m_salary<<endl;
//	}
//	cout<<endl;
//
//
//}
//
//
//
//
//int main(){
//	srand((unsigned int)time(NULL));
//
////����Ա������
//	vector<Employee>v;
//	createEmployee(v);
////��Ա�����з���
//	multimap<int,Employee>m;
//	setDep(v,m);
//	//���ղ��ţ���Ϊmultimap��keyֵ��Ϊ��������ʾԱ����Ϣ
//	showEmployee(m);
//
//
//system("pause");
//return 0;
//}