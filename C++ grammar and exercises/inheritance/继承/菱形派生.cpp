#include <iostream>
#include<string>
using namespace std;

//���μ̳У��������������Դ�˷ѵ�����
class animal
{
public:
	//�Ǿ�̬��Ա����ֻ�������ڳ�ʼ��
	animal(){
		this->age=10;
	}
int age;
};
//��virtual���ö��߱����̳У�animal�������࣬��ʱyangtuo��̳е�ֻ��һ�ݣ�
//sheep��tuo���ݸ�yangtuo��Ϊvbtprָ��ָ��ͬһ������age

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
//ָ��age����һ��������������������
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
