//#include <iostream>
//#include<string>
//#include<set>
//using namespace std;
//
////����ʽ�������Զ�����
////���������ظ�Ԫ��
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
//	//set����ʹ��push��Ա�������Ҳ��ɰ��������
//	//set���ɲ����ظ�Ԫ��
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
//	//����Ԫ�أ����ص�������ֵ
//	set<int>::iterator pos=s1.find(1);
//	if(pos!=s1.end()){
//	cout<<"�ҵ���Ԫ��"<<*pos<<endl;
//	}
//	else{
//	cout<<"δ�ҵ���Ԫ��"<<endl;
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
////��������
//	//��ʽһ
//pair<int,int>p1(4,20);
//    //��ʽ��
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