//#include <iostream>
//#include<string>
//using namespace std;
//
////string����
//void test(){
////��ʼ������
////Ĭ�Ϲ���һ�����ַ���
//	string str1;
////���ַ�����������ֵ
//	const char* str="�����";
//	string str2=str;
////��������
//	string str3(str2);
////n��ele
//  string str4(5,'q');
//
//  cout<<"str1="<<str1<<endl;
//  cout<<"str2="<<str2<<endl;
//  cout<<"str3="<<str4<<endl;
//  cout<<"str4="<<str4<<endl;
//
//  //��ֵ
//  string str5;
//  str5=str4;
//   cout<<"str5="<<str5<<endl;
//
//  string str6("hello world!",7);
//   cout<<"str6="<<str6<<endl;
//
//   string str7;
//   str7.assign(str6);
//    cout<<"str7="<<str7<<endl;
//}
//
//void test2(){
//	string str1;
//	str1="��ϲ��";
//	//+=�����׷�ӵ�����
//	str1+="����Ϸ";
//   cout<<"str1="<<str1<<endl;
//   string str2;
//	str2="������ҫ";
//	//+=�����׷�ӵ��ַ���
//	str1+=str2;
//	cout<<"str1="<<str1<<endl;
//
//	//��Ա����append
//	str2.append("timi");
//	cout<<"str2="<<str2<<endl;
//	string str3;
//	str3="����";
//	str2.append(str3);
//	cout<<"str2="<<str2<<endl;
//
//	//ֻ׷���ַ����Ӵ�
//	str2.append("�����Ҽ�����",7);
//	cout<<"str2="<<str2<<endl;
//}
//
//void test3(){
////�����滻�ַ���
//	string str1;
//	str1="abcdefg";
//	int pos=str1.find("de");//��������
//	int rpos=str1.rfind("de");//��������
//	cout<<"pos="<<pos<<endl;
//	cout<<"rpos="<<rpos<<endl;
//
//	//��0��λ��2���ַ��滻��3333
//	/*str1.replace(0,2,"3333");
//	cout<<str1<<endl;*/
//
//	//������һ�����Ƚ�ASCII��ֵ�����ڷ���1��С��-1������0
//	string str2;
//	str2="abcdefg";
//	cout<<str1.compare(str2)<<endl;
//
//	//�ַ���ȡ��[]���Ա����at();
//	//�Ӵ���ȡ
//	string str3;
//	str3=str2.substr(0,3);
//	cout<<str3<<endl;
//}
//
//int main(){
//test3();
//
//system("pause");
//return 0;
//}