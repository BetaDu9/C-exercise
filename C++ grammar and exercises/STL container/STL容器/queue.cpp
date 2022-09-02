//#include <iostream>
//#include<string>
//#include<queue>
//using namespace std;
//
////队列，先进先出
//class person{
//public:
//	//提供接口初始化成员属性
//	person(string name,int age){
//	this->m_name=name;
//	this->m_age=age;
//	
//	}
//
//	string m_name;
//	int m_age;
//
//};
//
//
//void test(){
//	//创建类对象
//	person p1("唐僧",34);
//	person p2("孙悟空",60);
//	person p3("猪八戒",18);
//	person p4("沙和尚",19);
//	//队列中元素为类对象
//	queue<person>q;
//	q.push(p1);//入队
//	q.push(p2);
//	q.push(p3);
//	q.push(p4);
//	//获取队列中元素个数
//	cout<<"队里人数："<<q.size()<<endl;
//
//	while(!q.empty()){
//	cout<<"队头："<<q.front().m_name<<" "<<q.front().m_age<<endl;//返回队列中首尾元素
//	cout<<"队尾："<<q.back().m_name<<" "<<q.back().m_age<<endl;
//	q.pop();//出队
//	
//	}
//	cout<<"队里人数："<<q.size()<<endl;
//
//}
//
//int main(){
//
//	test();
//system("pause");
//return 0;
//}