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
////list��������
////void test01(){
//////��������
//////Ĭ�Ϲ��췽ʽ
////list<int>L1;
////L1.push_back(10);
////L1.push_back(20);
////L1.push_back(50);
////L1.push_back(100);
////
////printList(L1);
//////���乹��
////list<int>L2(L1.begin(),L1.end());
////printList(L2);
////
//////��������
////list<int>L3(L2);
////printList(L3);
////
////}
//
//void test02(){
////list��ֵ
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
////assign�������丳ֵ
//list<int>L3;
//L3.assign(L2.begin(),L2.end());
//printList(L3);
//
////n��element��ֵ
//list<int>L4;
//L4.assign(10,100);
//printList(L4);
//
//}
//
//void test03(){
////��������
//cout<<"����ǰ��"<<endl;
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
//cout<<"������"<<endl;
//L1.swap(L4);        //��������
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
//cout<<L1.empty()<<endl;//�ж������Ƿ�Ϊ��
//cout<<L1.size()<<endl;//��ӡ������Ԫ�ظ���
//
//L1.resize(10);//��дָ��Ԫ�ظ���
//printList(L1);
//L1.resize(15,33);//��дָ��Ԫ�ظ���
//printList(L1);
//L1.resize(3);//��дָ��Ԫ�ظ���
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
//L1.pop_back();//βɾ
//printList(L1);
//L1.pop_front();//ͷɾ
//printList(L1);
//L1.push_front(19);//ͷ��
//L1.push_front(45);
//L1.push_front(23);
//printList(L1);
////����
//list<int>::iterator it=L1.begin();
//L1.insert(++it,89);//�ڶ���λ�ò���89
//printList(L1);
////ɾ��
//it=L1.begin();
//L1.erase(it);
//printList(L1);
////�Ƴ�
//L1.push_front(100);
//L1.push_front(100);
//L1.push_front(100);
//printList(L1);
//L1.remove(100);//ɾ��L1������100
//printList(L1);
////���
//L1.clear();
//printList(L1);
//}
//
//void test06(){
////list�����ķ���
//list<int>L1;
//L1.push_back(10);
//L1.push_back(20);
//L1.push_back(55);
//L1.push_back(140);
//
////������β
//cout<<"��Ԫ�أ�"<<L1.front()<<endl;
//cout<<"βԪ�أ�"<<L1.back()<<endl;
//
////ͨ��˫������������ݼ����η���
//cout<<"����ǰ��"<<endl;
//for(list<int>::const_iterator it=L1.begin();it!=L1.end();it++){
//  cout<<*it<<" ";
//}
//cout<<endl;
//
//L1.reverse();
//cout<<"������"<<endl;
//for(list<int>::const_iterator it=L1.begin();it!=L1.end();it++){
//  cout<<*it<<" ";
//}
//cout<<endl;
//
////���򣬷�������ʵ�����������ʹ�ñ�׼�㷨
////ʹ����������ĳ�Ա����
//L1.sort();
//cout<<"�������У�"<<endl;
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