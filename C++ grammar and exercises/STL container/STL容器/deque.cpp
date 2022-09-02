//#include <iostream>
//#include<string>
//#include<deque>
//using namespace std;
//#include<algorithm>
//
////deque容器，双端数组，头尾都可操作
////中控器+缓冲区
//void print(const deque<int>&d){
//	for(deque<int>::const_iterator it=d.begin();it!=d.end();it++){
//		cout<<*it<<" ";
//
//}
//	cout<<endl;
//}
//
//void test(){
////初始化方式
//	//默认构造
//	deque<int>d1;
//	
//	for(int i=0;i<10;i++){
//	d1.push_back(i);
//	}
//	print(d1);
//	//区间赋值
//	deque<int>d2(d1.begin(),d1.end());
//	print(d2);
//	//拷贝构造
//	deque<int>d3(d2);
//	print(d3);
//	//n个ele
//	deque<int>d4(10,199);
//	print(d4);
//
//}
//
//void test2(){
////赋值
//	deque<int>d1;
//	
//	for(int i=0;i<10;i++){
//	d1.push_back(i);
//	}
//	print(d1);
//	//直接赋值
//	deque<int>d2;
//	d2=d1;
//	print(d2);
//	//区间赋值
//	deque<int>d3;
//	d3.assign(d2.begin(),d2.end());
//	print(d3);
//	//n个元素
//	deque<int>d4;
//	d4.assign(5,99);
//	print(d4);
////大小操作
//	cout<<d4.size()<<endl;
//	d4.resize(10,0);
//	print(d4);
//
////插入删除
//	d4.push_back(44);
//	d4.push_front(55);
//	print(d4);
//
//	d4.pop_back();
//	d4.pop_front();
//	print(d4);
//	//一个pos插入元素
//	deque<int>::iterator it=d4.begin();
//	it++;
//	d4.insert(it,77);
//	print(d4);
//	//一个pos插入一个区间
//	d4.insert(d4.begin(),d1.begin(),d1.end());
//	print(d4);
//	//删除某个pos上的元素
//	d4.erase(d4.begin());
//	print(d4);
//	//删除一个区间
//	d4.erase(d4.begin(),d4.end());
//	print(d4);
//
//}
//
//void test3(){
//	//访问容器元素
//	deque<int>d1;
//	for(int i=0;i<10;i++){
//	d1.push_back(i);
//	}
//	//[]方式
//	for(int i=0;i<d1.size();i++){
//	cout<<d1[i]<<" ";
//	}
//	cout<<endl;
//	//成员函数at()方式访问
//	for(int i=0;i<d1.size();i++){
//	cout<<d1.at(i)<<" ";
//	}
//	cout<<endl;
//
//}
//
//
//void test4(){
//	deque<int>d1;
//	d1.push_back(50);
//	d1.push_back(7);
//    d1.push_back(15);
//    d1.push_back(100);
//	cout<<"排序前："<<endl;
//	print(d1);
//	//排序，算法中。默认升序，所有随机访问迭代器的容器皆可用sort排序
//	sort(d1.begin(),d1.end());
//	cout<<"排序后："<<endl;
//	print(d1);
//
//}
//
//
//int main(){
//	test4();
//
//system("pause");
//return 0;
//}