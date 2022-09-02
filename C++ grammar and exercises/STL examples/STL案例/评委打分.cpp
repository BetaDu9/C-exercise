#include <iostream>
#include<string>
#include<deque>
using namespace std;
#include<algorithm>
#include<vector>
#include<ctime>

//vector容器存放选手信息，其中平均分通过deque容器排序去掉高低分求平均分

class person{
public:
	person(string name,int score){
		this->m_name=name;
		this->m_score=score;
	}

	string m_name;
	int m_score;

};

//选手放入容器
void setName(vector<person>&v){
	string nameSeed="ABCDE";
	
	for(int i=0;i<5;i++){
	string name="选手";
	name+=nameSeed[i];
	person p(name,0);
	v.push_back(p);
	}

}

//遍历每个选手，给每个选手打分
void setScore(vector<person>&v){
	for(vector<person>::iterator it=v.begin();it!=v.end();it++){
		//创建容器以放分数
		deque<int>d;
		for(int i=0;i<10;i++){
		int sco=rand()%41+60;
		d.push_back(sco);
		}
		//对容器中的数据进行排序
		sort(d.begin(),d.end());
		d.pop_back();
		d.pop_front();
		//求平均分
		int sum=0;
		for(deque<int>::iterator pos=d.begin();pos!=d.end();pos++){
		  sum=sum+(*pos);
		}
		int ave=0;
		ave=sum/8;
		it->m_score=ave;
	}  
}



void printPerson(vector<person>&v){
	for(vector<person>::const_iterator it=v.begin();it!=v.end();it++){
		cout<<"选手姓名："<<it->m_name<<"  "<<"选手分数："<<it->m_score<<endl;
		cout<<endl;
	
	}
}



int main(){
	srand((unsigned int)time(NULL));
//创建5个选手
	vector<person>v;
	setName(v);
//给每个选手给分
	setScore(v);
printPerson(v);

system("pause");
return 0;


}