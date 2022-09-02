#include <iostream>
#include<string>
using namespace std;

////抽象三个零件(主要是功能)
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
////电脑类，集合三个零件，形成可调用的computer功能函数接口
//class computer{
//public:
//	//通过指针组装三个零件成电脑
//	//成员变量初始化，构造函数
//	computer(cpu *cpu,videoCard *vc,memoryCard *mc){
//	   m_cpu=cpu;
//	   m_vc=vc;
//	   m_mc=mc;
//	}
//	
//	//computer工作函数,调用三个零件功能函数
//	void work(){
//		m_cpu->calculate();
//		m_vc->display();
//		m_mc->storage();
//	}
//	
//	//释放三个零件指针
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
//	//三个零件的指针
//	//抽象类不可实例化，利用指针地址传递到函数中
//	cpu* m_cpu;//cpu指针中存放的m_cpu的地址，*cpu是m_cpu
//	videoCard* m_vc;
//	memoryCard* m_mc;
//
//};
//
////不同厂商具体实现三个零件
////Intel
//class intelCPU:public cpu{
//public:
//	void calculate(){
//	cout<<"intel CPU开始工作了"<<endl;
//	}
//};
//
//class intelVideoCard:public videoCard{
//public:
//	void display(){
//	cout<<"intel显卡开始工作了"<<endl;
//	}
//};
//
//class intelMemoryCard:public memoryCard{
//public:
//	void storage(){
//	cout<<"intel内存条开始工作了"<<endl;
//	}
//};
//
////Lenovo
//class LenovoCPU:public cpu{
//public:
//	void calculate(){
//	cout<<"LenovoCPU开始工作了"<<endl;
//	}
//};
//
//class LenovovideoCard:public videoCard{
//public:
//	void display(){
//	cout<<"Lenovo显卡开始工作了"<<endl;
//	}
//};
//
//class LenovoMemoryCard:public memoryCard{
//public:
//	void storage(){
//	cout<<"Lenovo内存条开始工作了"<<endl;
//	}
//};
//
//void test(){
//    cout<<"第一台电脑"<<endl;
////第一台电脑零件，父类指针*CPU指向子类对象new intelCPU,多态方式
//	cpu *intelcpu=new intelCPU;
//	videoCard *intelvc=new intelVideoCard;
//	memoryCard *intelmc=new intelMemoryCard;
//
////组装第一台电脑
//	//创建对象，开辟堆区内存存储对象
//	computer *c1=new computer(intelcpu,intelvc,intelmc);
//	c1->work();
//	delete c1;
//
////组装第二台电脑
//	 cout<<"-------------------------"<<endl;
//	 cout<<"第二台电脑"<<endl;
//	 
//	computer* c2=new computer(new LenovoCPU,new LenovovideoCard,new intelMemoryCard);
//	 c2->work();
//	 delete c2;//释放堆区内存存储的数据
//
////组装第三台电脑
//	 cout<<"-------------------------"<<endl;
//	 cout<<"第三台电脑"<<endl;
//	 
//	computer* c3=new computer(new LenovoCPU,new LenovovideoCard,new LenovoMemoryCard);
//	 c3->work();
//	 delete c3;//释放堆区内存存储的数据
//}
//
//int main(){
//	test();
//
//system("pause");
//return 0;
//}