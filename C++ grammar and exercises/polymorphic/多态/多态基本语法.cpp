#include <iostream>
#include<string>
using namespace std;

//class Animal{
//public:
//	//变成虚函数取消地址早绑定，避免speak函数提前绑定Animal的地址
//	void virtual speak(){
//	cout<<"动物说话"<<endl;
//	}
//
//};
//
//class Cat: public Animal{
//public:
//	void speak(){
//	cout<<"猫咪说话"<<endl;
//	}
//};
//
//class Dog: public Animal{
//public:
//	void speak(){
//	cout<<"狗狗说话"<<endl;
//	}
//};
//
////父子类都有speak函数，此时的speak函数地址已经绑定了animal类
////void doSpeak(Animal& animal){
//// 
////  animal.speak();
////}
////
////void test(){
////	Cat cat;
////	Dog dog;
////	doSpeak(dog);
////}
//
//int main(){
//	Cat cat;
//	cat.speak();
//
//system("pause");
//return 0;
//}