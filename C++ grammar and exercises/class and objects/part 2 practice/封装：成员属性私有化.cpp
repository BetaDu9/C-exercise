//#include<iostream>
//using namespace std;
//#include<string>
//
//class person{
//
//成员属性私有化
//private:
//	string p_name;
//	int p_age;
//	int p_phone;
//
//设置公共接口方便操作属性读写性质
//姓名可读可写
//public:
//	写姓名
//	void setname(string name){
//	 p_name=name;
//	}
//	读姓名
//	string getname(){
//	return p_name;
//	}
//
//年龄只可写
//
//	void setAge(int age){
//		if ((age<0)|(age>120)){
//		cout<<"年龄输入错误"<<endl;
//		}
//		else{
//		p_age=age;
//		}
//	
//	}
//
//	
//	电话只可读
//int getPhone(){
//	p_phone = 133444;
//	return p_phone;
//}
//
//};
//
//
//int main(){
//	person p;
//	p.setname("iji");
//	p.setAge(100);
//	
//
//     cout<< "姓名: "<<p.getname()<<endl;
//	 
//	 cout<< "电话: "<<p.getPhone()<<endl;
//	
//system("pause");
//	return 0;
//}