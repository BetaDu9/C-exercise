#include <iostream>
#include<string>
using namespace std;

////抽象类，制作饮品公共步骤
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
////制作各类饮品的子类
//class coffee:public abstractDrink{
//public:
//	void boil(){
//	cout<<"煮水"<<endl;
//	}
//	void brew(){
//	cout<<"冲泡咖啡"<<endl;
//	}
//	void condiment(){
//	cout<<"加入糖和伴侣"<<endl;
//	}
//	void pour(){
//	cout<<"倒杯"<<endl;
//	}
//
//
//};
//
//class tea:public abstractDrink{
//public:
//	void boil(){
//	cout<<"煮水"<<endl;
//	}
//	void brew(){
//	cout<<"冲泡茶叶"<<endl;
//	}
//	void condiment(){
//	cout<<"加入枸杞蜂蜜"<<endl;
//	}
//	void pour(){
//	cout<<"倒杯"<<endl;
//	}
//
//};
//
////制作饮品的实例化
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