#include <iostream>
#include<string>
using namespace std;

////�����������(��Ҫ�ǹ���)
//class cpu{
//public:
//	virtual void calculate()=0;
//};
//
//class videoCard{
//public:
//	virtual void display()=0;
//};
//
//class memoryCard{
//public:
//	virtual void storage()=0;
//};
//
////�����࣬��������������γɿɵ��õ�computer���ܺ����ӿ�
//class computer{
//public:
//	//ͨ��ָ����װ��������ɵ���
//	//��Ա������ʼ�������캯��
//	computer(cpu *cpu,videoCard *vc,memoryCard *mc){
//	   m_cpu=cpu;
//	   m_vc=vc;
//	   m_mc=mc;
//	}
//	
//	//computer��������,��������������ܺ���
//	void work(){
//		m_cpu->calculate();
//		m_vc->display();
//		m_mc->storage();
//	}
//	
//	//�ͷ��������ָ��
//	~computer(){
//	if(m_cpu!=0){
//	  delete m_cpu;
//	  m_cpu=NULL;
//	}
//	if(m_vc!=0){
//	  delete m_vc;
//	  m_vc=NULL;
//	}
//	if(m_mc!=0){
//	  delete m_mc;
//	  m_mc=NULL;
//	}
//
//	}
//private:
//	//���������ָ��
//	//�����಻��ʵ����������ָ���ַ���ݵ�������
//	cpu* m_cpu;//cpuָ���д�ŵ�m_cpu�ĵ�ַ��*cpu��m_cpu
//	videoCard* m_vc;
//	memoryCard* m_mc;
//
//};
//
////��ͬ���̾���ʵ���������
////Intel
//class intelCPU:public cpu{
//public:
//	void calculate(){
//	cout<<"intel CPU��ʼ������"<<endl;
//	}
//};
//
//class intelVideoCard:public videoCard{
//public:
//	void display(){
//	cout<<"intel�Կ���ʼ������"<<endl;
//	}
//};
//
//class intelMemoryCard:public memoryCard{
//public:
//	void storage(){
//	cout<<"intel�ڴ�����ʼ������"<<endl;
//	}
//};
//
////Lenovo
//class LenovoCPU:public cpu{
//public:
//	void calculate(){
//	cout<<"LenovoCPU��ʼ������"<<endl;
//	}
//};
//
//class LenovovideoCard:public videoCard{
//public:
//	void display(){
//	cout<<"Lenovo�Կ���ʼ������"<<endl;
//	}
//};
//
//class LenovoMemoryCard:public memoryCard{
//public:
//	void storage(){
//	cout<<"Lenovo�ڴ�����ʼ������"<<endl;
//	}
//};
//
//void test(){
//    cout<<"��һ̨����"<<endl;
////��һ̨�������������ָ��*CPUָ���������new intelCPU,��̬��ʽ
//	cpu *intelcpu=new intelCPU;
//	videoCard *intelvc=new intelVideoCard;
//	memoryCard *intelmc=new intelMemoryCard;
//
////��װ��һ̨����
//	//�������󣬿��ٶ����ڴ�洢����
//	computer *c1=new computer(intelcpu,intelvc,intelmc);
//	c1->work();
//	delete c1;
//
////��װ�ڶ�̨����
//	 cout<<"-------------------------"<<endl;
//	 cout<<"�ڶ�̨����"<<endl;
//	 
//	computer* c2=new computer(new LenovoCPU,new LenovovideoCard,new intelMemoryCard);
//	 c2->work();
//	 delete c2;//�ͷŶ����ڴ�洢������
//
////��װ����̨����
//	 cout<<"-------------------------"<<endl;
//	 cout<<"����̨����"<<endl;
//	 
//	computer* c3=new computer(new LenovoCPU,new LenovovideoCard,new LenovoMemoryCard);
//	 c3->work();
//	 delete c3;//�ͷŶ����ڴ�洢������
//}
//
//int main(){
//	test();
//
//system("pause");
//return 0;
//}