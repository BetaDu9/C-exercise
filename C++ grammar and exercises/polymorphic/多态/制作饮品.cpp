#include <iostream>
#include<string>
using namespace std;

////�����࣬������Ʒ��������
//class abstractDrink{
//public:
//	void makedrink(){
//		 boil();
//	      brew();
//		  condiment();
//		  pour();
//	}
//virtual void boil()=0;
//virtual void brew()=0;
//virtual void condiment()=0;
// virtual void pour()=0;
//
//};
//
////����������Ʒ������
//class coffee:public abstractDrink{
//public:
//	void boil(){
//	cout<<"��ˮ"<<endl;
//	}
//	void brew(){
//	cout<<"���ݿ���"<<endl;
//	}
//	void condiment(){
//	cout<<"�����ǺͰ���"<<endl;
//	}
//	void pour(){
//	cout<<"����"<<endl;
//	}
//
//
//};
//
//class tea:public abstractDrink{
//public:
//	void boil(){
//	cout<<"��ˮ"<<endl;
//	}
//	void brew(){
//	cout<<"���ݲ�Ҷ"<<endl;
//	}
//	void condiment(){
//	cout<<"������轷���"<<endl;
//	}
//	void pour(){
//	cout<<"����"<<endl;
//	}
//
//};
//
////������Ʒ��ʵ����
//void doWork(abstractDrink* abs){   //abstractDrink* abs=new coffee
//	abs->makedrink();
//}
//
//void test(){
//
//  doWork(new coffee);
//  cout<<"------------------------"<<endl;
// doWork(new tea);
//
//}
//
//int main(){
//	test();
//
//system("pause");
//return 0;
//}