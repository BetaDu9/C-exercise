#include<iostream>
using namespace std;
#include<string>

////��Ԫ��һ���������һ����˽�����Ե�����Ȩ��
////ȫ�ֺ�������Ԫ
//class building{
//	//ȫ�ֺ�����Ϊ���friend���Է���˽������
//	friend void goodfriend (building& building);	
//public: 
//	building(){
//	m_sittingroom="����";
//	m_bedroom="����";
//
//	}
//
//string m_sittingroom;
//private:string m_bedroom;
//
//};
//
//void goodfriend (building& building){
//	cout<<"�������ڷ��ʣ� "<<building.m_sittingroom<<endl;
//	cout<<"�������ڷ��ʣ� "<<building.m_bedroom<<endl;
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

//����Ϊ���friend���Է���˽������
class Building{
	
	friend class goodfriend; 	
public: 
	Building(){
	m_sittingroom="����";
	m_bedroom="����";
	}//��Ա������ʼ����Ա����

	//��Ա����
string m_sittingroom;
private:string m_bedroom;

};

class goodfriend{
public:
	//��Ա����
	void visit();
	goodfriend();
	Building *building;

};

//���⹹�캯��
goodfriend::goodfriend(){
	building =new Building ;
}

void goodfriend::visit(){
	cout<<"�������ڷ��ʣ� "<<building->m_sittingroom<<endl;
	cout<<"�������ڷ��ʣ� "<<building->m_bedroom<<endl;
}


int main(){
	goodfriend gg;
	gg.visit();
	
system("pause");
return 0;
}