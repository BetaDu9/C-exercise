//#include <iostream>
//#include<string>
//#include<list>
//using namespace std;
//
//void printList(const list<int>&L){
//	for(list<int>::const_iterator it=L.begin();it!=L.end();it++){
//	cout<<*it<<" ";
//	}
//	cout<<endl;
//
//}
//
////list容器链表
////void test01(){
//////容器构造
//////默认构造方式
////list<int>L1;
////L1.push_back(10);
////L1.push_back(20);
////L1.push_back(50);
////L1.push_back(100);
////
////printList(L1);
//////区间构造
////list<int>L2(L1.begin(),L1.end());
////printList(L2);
////
//////拷贝构造
////list<int>L3(L2);
////printList(L3);
////
////}
//
//void test02(){
////list赋值
////operator
//list<int>L1;
//L1.push_back(10);
//L1.push_back(20);
//L1.push_back(50);
//L1.push_back(100);
//
//list<int>L2;
//L2=L1;
//printList(L1);
//printList(L2);
//
////assign利用区间赋值
//list<int>L3;
//L3.assign(L2.begin(),L2.end());
//printList(L3);
//
////n个element赋值
//list<int>L4;
//L4.assign(10,100);
//printList(L4);
//
//}
//
//void test03(){
////交换容器
//cout<<"交换前："<<endl;
//list<int>L1;
//L1.push_back(10);
//L1.push_back(20);
//L1.push_back(50);
//L1.push_back(100);
//printList(L1);
//
//list<int>L4;
//L4.assign(10,100);
//printList(L4);
//
//cout<<"交换后："<<endl;
//L1.swap(L4);        //交换函数
//printList(L1);
//printList(L4);
//}
//
//void test04(){
//list<int>L1;
//L1.push_back(10);
//L1.push_back(20);
//L1.push_back(55);
//L1.push_back(140);
//
//cout<<L1.empty()<<endl;//判断容器是否为空
//cout<<L1.size()<<endl;//打印容器中元素个数
//
//L1.resize(10);//重写指定元素个数
//printList(L1);
//L1.resize(15,33);//重写指定元素个数
//printList(L1);
//L1.resize(3);//重写指定元素个数
//printList(L1);
//
//}
//
//void test05(){
//list<int>L1;
//L1.push_back(10);
//L1.push_back(20);
//L1.push_back(55);
//L1.push_back(140);
//printList(L1);
//
//L1.pop_back();//尾删
//printList(L1);
//L1.pop_front();//头删
//printList(L1);
//L1.push_front(19);//头插
//L1.push_front(45);
//L1.push_front(23);
//printList(L1);
////插入
//list<int>::iterator it=L1.begin();
//L1.insert(++it,89);//第二个位置插入89
//printList(L1);
////删除
//it=L1.begin();
//L1.erase(it);
//printList(L1);
////移除
//L1.push_front(100);
//L1.push_front(100);
//L1.push_front(100);
//printList(L1);
//L1.remove(100);//删除L1中所有100
//printList(L1);
////清空
//L1.clear();
//printList(L1);
//}
//
//void test06(){
////list容器的访问
//list<int>L1;
//L1.push_back(10);
//L1.push_back(20);
//L1.push_back(55);
//L1.push_back(140);
//
////访问首尾
//cout<<"首元素："<<L1.front()<<endl;
//cout<<"尾元素："<<L1.back()<<endl;
//
////通过双向迭代器递增递减依次访问
//cout<<"交换前："<<endl;
//for(list<int>::const_iterator it=L1.begin();it!=L1.end();it++){
//  cout<<*it<<" ";
//}
//cout<<endl;
//
//L1.reverse();
//cout<<"交换后："<<endl;
//for(list<int>::const_iterator it=L1.begin();it!=L1.end();it++){
//  cout<<*it<<" ";
//}
//cout<<endl;
//
////排序，非随机访问迭代器，不可使用标准算法
////使用容器自身的成员函数
//L1.sort();
//cout<<"升序排列："<<endl;
//printList(L1);
//
//}
//
//int main(){
//
////test01();
//	//test02();
//	//test03();
//	//test04();
//	//test05();
//	test06();
//
//system("pause");
//return 0;
//
//}