//#include <iostream>
//#include<string>
//using namespace std;
//
////string容器
//void test(){
////初始化容器
////默认构造一个空字符串
//	string str1;
////用字符串给容器赋值
//	const char* str="孙悟空";
//	string str2=str;
////拷贝构造
//	string str3(str2);
////n个ele
//  string str4(5,'q');
//
//  cout<<"str1="<<str1<<endl;
//  cout<<"str2="<<str2<<endl;
//  cout<<"str3="<<str4<<endl;
//  cout<<"str4="<<str4<<endl;
//
//  //赋值
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
//	str1="我喜欢";
//	//+=后面跟追加的内容
//	str1+="玩游戏";
//   cout<<"str1="<<str1<<endl;
//   string str2;
//	str2="王者荣耀";
//	//+=后面加追加的字符串
//	str1+=str2;
//	cout<<"str1="<<str1<<endl;
//
//	//成员函数append
//	str2.append("timi");
//	cout<<"str2="<<str2<<endl;
//	string str3;
//	str3="天美";
//	str2.append(str3);
//	cout<<"str2="<<str2<<endl;
//
//	//只追加字符串子串
//	str2.append("工作室急急急",7);
//	cout<<"str2="<<str2<<endl;
//}
//
//void test3(){
////查找替换字符串
//	string str1;
//	str1="abcdefg";
//	int pos=str1.find("de");//从左往右
//	int rpos=str1.rfind("de");//从右往左
//	cout<<"pos="<<pos<<endl;
//	cout<<"rpos="<<rpos<<endl;
//
//	//从0号位起2个字符替换成3333
//	/*str1.replace(0,2,"3333");
//	cout<<str1<<endl;*/
//
//	//从左到右一个个比较ASCII码值，大于返回1，小于-1，等于0
//	string str2;
//	str2="abcdefg";
//	cout<<str1.compare(str2)<<endl;
//
//	//字符存取，[]与成员函数at();
//	//子串截取
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