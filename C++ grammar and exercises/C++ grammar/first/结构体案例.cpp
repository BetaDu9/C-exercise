#include<iostream>
using namespace std;
#include<string>
#include<ctime>

//结构体案例：毕设分组
//1.定义老师学生结构体
struct student {
	  string sName;
	  float score;
	};

struct teacher{
string tName;
 student sArray[5];
};





//2.赋值结构体数组:通过调用函数
void allocateSpace( struct teacher tArray[],int len){
	string nameSeed="ABCDE";
	for(int i=0;i<3;i++){	
	tArray[i].tName="Teacher_";
	tArray[i].tName+=nameSeed[i];
	   for(int j=0; j<5;j++){
		  tArray[i].sArray[j].sName="Student_";
		  tArray[i].sArray[j].sName+=nameSeed[j]; 
		  tArray[i].sArray[j].score=80;
	                      };
	       }
}
//打印数据
void printInfo(struct teacher tArray[],int len){
     for(int i=0;i<len;i++){	
		
		 cout<< "老师姓名： "<<tArray[i].tName<<endl;
         for(int j=0;j<5;j++){
			 cout<<"学生姓名："<< tArray[i].sArray[j].sName<<" 学生分数： "<< tArray[i].sArray[j].score<<endl;
		 }
	 }

}

//主函数
int main(){
struct teacher tArray[3];
//int len=sizeof(tArray)/sizeof(tArray[0]);
int len=3;
allocateSpace(tArray,len);
printInfo(tArray,len);

system("pause");
return 0;

}


