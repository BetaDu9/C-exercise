//#include <iostream>
//#include<string>
//#include<vector>
//using namespace std;
//
////vector���������˶�̬���飬������ʵ�����
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
////	//���캯��
////	printVector(v2);
////	//���䷽ʽ����
////	vector<int>v3(v2.begin(),v2.end());
////	printVector(v3);
////	//����ele
////	vector<int>v4(5,100);
////	printVector(v4);
////	//��������
////	vector<int>v5(v4);
////	printVector(v5);
////
////}
////��ֵ��operator ���� ��Ա����assign()
////capacity��size
//
////�����ɾ��
//void test2(){
//	vector<int>v1;
//	v1.push_back(89);
//	v1.push_back(56);
//	v1.push_back(27);
//	v1.push_back(100);
//	//����һ��Ԫ��
//	v1.insert(v1.begin(),10);
//	printVector(v1);
//	//����һ������
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
//	//��������
//	v1.swap(v4);
//    printVector(v1);
//
//}
//
//void test4(){
////Ԥ���ռ�
//vector<int>v1;
////Ϊv1Ԥ���ռ䣬�������Ԫ���ڼ�һֱ��չ�ռ�
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