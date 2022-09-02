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
////写
//	//创建流对象
//	ofstream ofs;
//	//打开文件
//	ofs.open("person.txt",ios::binary|ios::out);
//	//写文件
//	person p={"李四",18};//类赋值
//	ofs.write((const char*)&p,sizeof(p));
//	//关闭文件
//	ofs.close();

//读文件
	person p;

	ifstream ifs;
	
	ifs.open("person.txt",ios::binary|ios::in);
	if(!ifs.is_open()){
	cout<<"文件打开失败"<<endl;
	}
	
	ifs.read((char*)&p,sizeof(p));
	cout<<p.m_name<<endl;
	cout<<p.m_age<<endl;
	
	//关闭文件
	ifs.close();
system("pause");
return 0;
}