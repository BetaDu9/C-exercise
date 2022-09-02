#include <iostream>
#include<string>
using namespace std;
#include <fstream>

//步骤: 包含头文件，创建对象流，指定文件打开方式，读写文件，关闭文件


//int main(){
//	//写文件
//	/*ofstream ofs;
//	ofs.open("text.txt",ios::out);
//	ofs<<"姓名：李四"<<endl;
//	ofs<<"毕业于2019"<<endl;
//	ofs.close();*/
//	//读文件
//	//创建对象流
//	ifstream ifs;
//	//打开文件
//	ifs.open("text.txt",ios::in);
//	//判断是否打开成功
//	if(!ifs.is_open()){
//	cout<<"文件打开失败"<<endl;
//	}
	//读数据
	  //方式一
	/*char buf[1024]={0};
	while(ifs>>buf){
	cout<<buf<<endl;
	}*/
	  //方式二
	/*char buf[1024]={0};
	while(ifs.getline(buf,sizeof(buf))){
	cout<<buf<<endl;
	}*/
	//方式三
	/*string buf;
	while(getline(ifs,buf)){
	cout<<buf<<endl;
	}*/
	//方式四
	/*char c;
	while((c=ifs.get())!=EOF){
	cout<<c;
	}
	ifs.close();*/


//system("pause");
//return 0;
//}