//#include <iostream>
//#include<string>
//#include<map>
//using namespace std;
//
////map����key����ֵ��valueʵֵ��keyֵ��һ�޶�
//void printMap(map<int,int>&m){
//for(map<int,int>::const_iterator it=m.begin();it!=m.end();it++){
//cout<<"key: "<<(*it).first<<" "<<"value: "<<it->second<<endl;
//}
//cout<<endl;
//}
//
//
//void test(){
//	//����map���ԶԵ���ʽ���֣�keyֵ�����ظ�
//map<int,int>m;
////���룬�����ӵ���ʽ
//m.insert(pair<int,int>(3,9));
//m.insert(make_pair(6,4));
//m.insert(pair<int,int>(5,66));
//m[1]=9;
//printMap(m);
//
////������ʽ����
//map<int,int>m2(m);
//printMap(m2);
//
////ɾ��
////��������ֵ ɾ��
//m2.erase(6);
////���յ�����ֵ ɾ��
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