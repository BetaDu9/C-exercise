#include <iostream>
#include<string>
#include<deque>
using namespace std;
#include<algorithm>
#include<vector>
#include<ctime>

//vector�������ѡ����Ϣ������ƽ����ͨ��deque��������ȥ���ߵͷ���ƽ����

class person{
public:
	person(string name,int score){
		this->m_name=name;
		this->m_score=score;
	}

	string m_name;
	int m_score;

};

//ѡ�ַ�������
void setName(vector<person>&v){
	string nameSeed="ABCDE";
	
	for(int i=0;i<5;i++){
	string name="ѡ��";
	name+=nameSeed[i];
	person p(name,0);
	v.push_back(p);
	}

}

//����ÿ��ѡ�֣���ÿ��ѡ�ִ��
void setScore(vector<person>&v){
	for(vector<person>::iterator it=v.begin();it!=v.end();it++){
		//���������Էŷ���
		deque<int>d;
		for(int i=0;i<10;i++){
		int sco=rand()%41+60;
		d.push_back(sco);
		}
		//�������е����ݽ�������
		sort(d.begin(),d.end());
		d.pop_back();
		d.pop_front();
		//��ƽ����
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
		cout<<"ѡ��������"<<it->m_name<<"  "<<"ѡ�ַ�����"<<it->m_score<<endl;
		cout<<endl;
	
	}
}



int main(){
	srand((unsigned int)time(NULL));
//����5��ѡ��
	vector<person>v;
	setName(v);
//��ÿ��ѡ�ָ���
	setScore(v);
printPerson(v);

system("pause");
return 0;


}