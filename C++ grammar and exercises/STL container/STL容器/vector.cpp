//#include <iostream>
//#include<string>
//#include<vector>
//using namespace std;
//
////vector容器：单端动态数组，随机访问迭代器
//void printVector(vector<int>&v){
//	for(vector<int>::iterator it=v.begin();it!=v.end();it++){
//	cout<<*it<<" "; 
//	}
//	cout<<endl;
//}
//
////void test(){
////	vector<int>v1;
////	v1.push_back(89);
////	v1.push_back(56);
////	v1.push_back(27);
////	v1.push_back(100);
////	printVector(v1);
////	//构造函数
////	printVector(v2);
////	//区间方式构造
////	vector<int>v3(v2.begin(),v2.end());
////	printVector(v3);
////	//几个ele
////	vector<int>v4(5,100);
////	printVector(v4);
////	//拷贝构造
////	vector<int>v5(v4);
////	printVector(v5);
////
////}
////赋值：operator 或者 成员函数assign()
////capacity和size
//
////插入和删除
//void test2(){
//	vector<int>v1;
//	v1.push_back(89);
//	v1.push_back(56);
//	v1.push_back(27);
//	v1.push_back(100);
//	//插入一个元素
//	v1.insert(v1.begin(),10);
//	printVector(v1);
//	//插入一个区间
//	v1.insert(v1.begin(),v1.begin(),v1.end());
//	printVector(v1);
//
//}
//
//void test3(){
//	vector<int>v1;
//	v1.push_back(89);
//	v1.push_back(56);
//	v1.push_back(27);
//	v1.push_back(100);
//
//	vector<int>v4(5,100);
//	//互换容器
//	v1.swap(v4);
//    printVector(v1);
//
//}
//
//void test4(){
////预留空间
//vector<int>v1;
////为v1预留空间，避免放入元素期间一直扩展空间
//v1.reserve(200000);
//  int num=0;
//  int *p=NULL;
//  for(int i=0;i<200000;i++){ 
//	  v1.push_back(i);
//	  if(p!=&v1[0]){
//  p=&v1[0];
//  num++;
//     }
//  }
//  cout<<"num="<<num<<endl;
//}
//
//
//int main(){
//	test4();
//
//system("pause");
//return 0;
//}