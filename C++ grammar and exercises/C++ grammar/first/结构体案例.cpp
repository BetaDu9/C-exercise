#include<iostream>
using namespace std;
#include<string>
#include<ctime>

//�ṹ�尸�����������
//1.������ʦѧ���ṹ��
struct student {
	  string sName;
	  float score;
	};

struct teacher{
string tName;
 student sArray[5];
};





//2.��ֵ�ṹ������:ͨ�����ú���
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
//��ӡ����
void printInfo(struct teacher tArray[],int len){
     for(int i=0;i<len;i++){	
		
		 cout<< "��ʦ������ "<<tArray[i].tName<<endl;
         for(int j=0;j<5;j++){
			 cout<<"ѧ��������"<< tArray[i].sArray[j].sName<<" ѧ�������� "<< tArray[i].sArray[j].score<<endl;
		 }
	 }

}

//������
int main(){
struct teacher tArray[3];
//int len=sizeof(tArray)/sizeof(tArray[0]);
int len=3;
allocateSpace(tArray,len);
printInfo(tArray,len);

system("pause");
return 0;

}


