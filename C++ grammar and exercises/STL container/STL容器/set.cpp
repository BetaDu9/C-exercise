//#include <iostream>
//#include<string>
//#include<set>
//using namespace std;
//
////关联式容器，自动排序
////不可输入重复元素
//void printSet(set<int>&s){
//	for(set<int>::const_iterator it=s.begin();it!=s.end();it++){
//	cout<<*it<<" ";
//	}
//	cout<<endl; 
//}
//
//
//void test(){
//	set<int>s1;
//	//set不可使用push成员函数，且不可按区间插入
//	//set不可插入重复元素
//	s1.insert(10);
//	s1.insert(5);
//	s1.insert(34);
//	s1.insert(100);
//	s1.insert(55);
//	printSet(s1);
//	
//	s1.erase(s1.begin());
//	printSet(s1);
//	s1.erase(100);
//	printSet(s1);
//	//查找元素，返回迭代器的值
//	set<int>::iterator pos=s1.find(1);
//	if(pos!=s1.end()){
//	cout<<"找到该元素"<<*pos<<endl;
//	}
//	else{
//	cout<<"未找到该元素"<<endl;
//	}
//}
//
////void printPair(pair<int,int>&p){
////	for(pair<int,int>::const_iterator it=p.begin();it!=p.end();it++){
////	
////		cout<<"key: "<<(*it).first<<" "<<"value: "<<it->second<<" ";
////	}
////	cout<<endl;
////}
//
//void test2(){
////创建对组
//	//方式一
//pair<int,int>p1(4,20);
//    //方式二
//pair<int,int>p2=make_pair(2,57);
//pair<string,int>p3("sun",10);
//cout<<"first: "<<p1.first<<" "<<"second: "<<p1.second<<endl;
//cout<<"first: "<<p2.first<<" "<<"second: "<<p2.second<<endl;
//cout<<"first: "<<p3.first<<" "<<"second: "<<p3.second<<endl;
//}
//
//
//int main(){
//	test();
//
//system("pause");
//return 0;
//
//}