//#include <iostream>
//#include<string>
//#include<map>
//using namespace std;
//
////map包含key索引值和value实值，key值独一无二
//void printMap(map<int,int>&m){
//for(map<int,int>::const_iterator it=m.begin();it!=m.end();it++){
//cout<<"key: "<<(*it).first<<" "<<"value: "<<it->second<<endl;
//}
//cout<<endl;
//}
//
//
//void test(){
//	//创建map，以对的形式出现，key值不可重复
//map<int,int>m;
////插入，创建队的形式
//m.insert(pair<int,int>(3,9));
//m.insert(make_pair(6,4));
//m.insert(pair<int,int>(5,66));
//m[1]=9;
//printMap(m);
//
////拷贝方式创建
//map<int,int>m2(m);
//printMap(m2);
//
////删除
////按照索引值 删除
//m2.erase(6);
////按照迭代器值 删除
//m2.erase(m2.begin());
//printMap(m2);
//
//}
//
//int main(){
//
//test();
//
//system("pause");
//return 0;
//}