#include <iostream>
#include<string>
using namespace std;
#include <fstream>

class person{
public:
	char m_name[64];
	int m_age;
};

int main(){	
////д
//	//����������
//	ofstream ofs;
//	//���ļ�
//	ofs.open("person.txt",ios::binary|ios::out);
//	//д�ļ�
//	person p={"����",18};//�ำֵ
//	ofs.write((const char*)&p,sizeof(p));
//	//�ر��ļ�
//	ofs.close();

//���ļ�
	person p;

	ifstream ifs;
	
	ifs.open("person.txt",ios::binary|ios::in);
	if(!ifs.is_open()){
	cout<<"�ļ���ʧ��"<<endl;
	}
	
	ifs.read((char*)&p,sizeof(p));
	cout<<p.m_name<<endl;
	cout<<p.m_age<<endl;
	
	//�ر��ļ�
	ifs.close();
system("pause");
return 0;
}