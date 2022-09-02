#include<iostream>
using namespace std;
#include<string>

//调用sum函数
//int sum (int a,int b);
//
//int a;
//int b;

//int sum(int a,int b){
//    int sum= a+b;
//	return sum;
//}
//int main() {
//	
//	a=10;
//	b=20;
//	int c= a+b;
// cout<<"c= "<< c<<endl;
//		
// system("pause");
//return 0 ;
//}

//int main(){
//
//cout<< "hello world!"<<endl;
//
//system ("pause");
//return 0;
//
//
//}



//遍历数组
//int main(){
//	int arr[2][3]={
//		{1,2,3},
//		{4,5,6}
//	};
	/*for(int i=0; i<2; i++)
	{
		for(int j=0;j<3;j++){
		cout<<arr[i][j]<<" ";
	
		}
		cout<<endl;
	}*/
//
//	cout<<arr[1][2]<<endl;
//
//system ("pause");
//return 0;
//}


//电影评分
//int main(){
//	cout<<"请输入电影评分: "<<endl;
//	int score=0;
//	cin>>score;
//	cout<<"您的电影评分是："<<score<<endl;
//
//	switch(score){
//	case 10 :
//		cout<<"优秀电影"<<endl;
//		break;
//	case 5:
//		cout<<"一般电影"<<endl;
//		break;
//	default:
//		cout<<"烂片电影"<<endl;
//	break;
//	}
//
//
//
//
//
//system("pause");
//return 0;
//}


//九九乘法表
//int main(){
//
//	for (int i=1; i<10; i++){
//		for (int j=1; j<=i; j++){
//		cout<<i*j<<" ";
//		}
//		cout<<endl;
//	
//	
//	}
//
//system("pause");
//return 0;
//}

//int main(){
//	int arr[]={18,388,28,59,10,46,23,78};
//	int c= 0;
//	int max=0;
//	for(int i=0;i<8;i++){
//		if (c>arr[i]){
//		int max=c;
//		}
//		 else{
//		max= arr[i];
//		};
//		 c=max;
//	};
//cout<<"最重的小猪体重为："<<max<<endl;	
//
//system("pause");
//return 0;
//}

//结构体数组
//int main(){
//	struct student {
//	  string name;
//	  int age;
//	  float score;
//	};
//	struct student stuArray[3]={
//		{"去去 ",19 , 60.5},
//		{"yuyu ",89 , 90.5},
//		{"wubu ",67 , 89.6}
//
//	};
//	stuArray[2].score=67.77;
//
//	for(int i=0;i<3;i++){
//		cout<<"姓名： "<<stuArray[i].name << "年龄： "
//			<<stuArray[i].age << "分数： "<< stuArray[i].score <<endl;
//	};
//
//system("pause");
//return 0;
//
//}


//结构体嵌套结构体
//struct student {
//	  string name;
//	  int age;
//	  float score;
//	};
//
//	struct teacher{
//	 string name;
//	 int age;
//	 student stu;
//	};
//int main(){
//	teacher t;
//	t.name= "hueui ";
//	t.age= 48;
//	t.stu.name="defef ";
//	t.stu.age= 18;
//	t.stu.score= 98.87;
//
//	cout<<"老师姓名： "<< t.name << "老师所带的学生： "<<
//	t.stu.name <<"学生分数： "<< t.stu.score <<endl;
//
//
//system("pause");
//return 0;



