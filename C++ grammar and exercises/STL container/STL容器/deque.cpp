//#include <iostream>
//#include<string>
//#include<deque>
//using namespace std;
//#include<algorithm>
//
////deque������˫�����飬ͷβ���ɲ���
////�п���+������
//void print(const deque<int>&d){
//	for(deque<int>::const_iterator it=d.begin();it!=d.end();it++){
//		cout<<*it<<" ";
//
//}
//	cout<<endl;
//}
//
//void test(){
////��ʼ����ʽ
//	//Ĭ�Ϲ���
//	deque<int>d1;
//	
//	for(int i=0;i<10;i++){
//	d1.push_back(i);
//	}
//	print(d1);
//	//���丳ֵ
//	deque<int>d2(d1.begin(),d1.end());
//	print(d2);
//	//��������
//	deque<int>d3(d2);
//	print(d3);
//	//n��ele
//	deque<int>d4(10,199);
//	print(d4);
//
//}
//
//void test2(){
////��ֵ
//	deque<int>d1;
//	
//	for(int i=0;i<10;i++){
//	d1.push_back(i);
//	}
//	print(d1);
//	//ֱ�Ӹ�ֵ
//	deque<int>d2;
//	d2=d1;
//	print(d2);
//	//���丳ֵ
//	deque<int>d3;
//	d3.assign(d2.begin(),d2.end());
//	print(d3);
//	//n��Ԫ��
//	deque<int>d4;
//	d4.assign(5,99);
//	print(d4);
////��С����
//	cout<<d4.size()<<endl;
//	d4.resize(10,0);
//	print(d4);
//
////����ɾ��
//	d4.push_back(44);
//	d4.push_front(55);
//	print(d4);
//
//	d4.pop_back();
//	d4.pop_front();
//	print(d4);
//	//һ��pos����Ԫ��
//	deque<int>::iterator it=d4.begin();
//	it++;
//	d4.insert(it,77);
//	print(d4);
//	//һ��pos����һ������
//	d4.insert(d4.begin(),d1.begin(),d1.end());
//	print(d4);
//	//ɾ��ĳ��pos�ϵ�Ԫ��
//	d4.erase(d4.begin());
//	print(d4);
//	//ɾ��һ������
//	d4.erase(d4.begin(),d4.end());
//	print(d4);
//
//}
//
//void test3(){
//	//��������Ԫ��
//	deque<int>d1;
//	for(int i=0;i<10;i++){
//	d1.push_back(i);
//	}
//	//[]��ʽ
//	for(int i=0;i<d1.size();i++){
//	cout<<d1[i]<<" ";
//	}
//	cout<<endl;
//	//��Ա����at()��ʽ����
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
//	cout<<"����ǰ��"<<endl;
//	print(d1);
//	//�����㷨�С�Ĭ����������������ʵ������������Կ���sort����
//	sort(d1.begin(),d1.end());
//	cout<<"�����"<<endl;
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