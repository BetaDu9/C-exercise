#include <iostream>
#include<string>
using namespace std;

//菱形继承，解决二义性与资源浪费的问题
class animal
{
public:
	//非静态成员变量只能在类内初始化
	animal(){
		this->age=10;
	}
int age;
};
//加virtual可让二者变成虚继承，animal变成虚基类，此时yangtuo类继承的只有一份，
//sheep与tuo传递给yangtuo的为vbtpr指针指向同一份数据age

class sheep:virtual public animal{
	
};

class tuo:virtual public animal{

};

class yangtuo:public sheep,public tuo{


};

void test(){
yangtuo yt;
animal a;
sheep s;
//指出age从哪一个父类来，消除二义性
cout<<yt.sheep::age<<endl;
cout<<s.age<<endl;
cout<<a.age<<endl;
cout<<yt.age<<endl;
}

int main(){
	test();

system("pause");
return 0;

}
