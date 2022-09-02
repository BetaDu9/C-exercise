//#include <iostream>
//#include<string>
//#include<map>
//using namespace std;
//#include<algorithm>
//#include<vector>
//#include<ctime>
//
////创建员工信息，放入vector容器，map容器嵌套vector容器加入dep作为索引以分部门显示
//class Employee{
//public:
//Employee(string name,int salary){
//		this->m_name=name;
//		this->m_salary=salary;
//		
//	}
//
//	string m_name;
//	int m_salary;
//
//};
//
//void createEmployee(vector<Employee>&v){
//	//放入姓名和工资
//	string nameSeed="ABCDEFGHIJ";
//
//	for(int i=0;i<10;i++){
//	 string name="员工";
//	 name+=nameSeed[i];
//	 int sal=rand()%8000+10000;
//
//	Employee e(name,sal);
//	v.push_back(e);
//	}
//
//}
//
//void setDep(vector<Employee>&v,multimap<int,Employee>&m){
//	for(vector<Employee>::const_iterator it=v.begin();it!=v.end();it++){
//	 int dep=rand()%3+1;
//	 //将员工部门作为key，员工信息作为value放入multimap容器
//	 m.insert(make_pair(dep,*it));
//	}
//
//
//}
//
//void showEmployee(multimap<int,Employee>&m){
//	cout<<"策划部门："<<endl;
//
//	//找到第一个策划部员工位置
//	multimap<int,Employee>::iterator pos=m.find (1);
//	int count=m.count(1);//策划部员工人数
//	int num=0;
//	for(;pos!=m.end()&&num<count;pos++,num++){
//		cout<<"员工姓名："<<pos->second.m_name<<" "<<"工资："<<pos->second.m_salary<<endl;
//	}
//	cout<<endl;
//
//	cout<<"美术部门："<<endl;
//	pos=m.find (2);
//	count=m.count(2);//策划部员工人数
//	num=0;
//	for(;pos!=m.end()&&num<count;pos++,num++){
//		cout<<"员工姓名："<<pos->second.m_name<<" "<<"工资："<<pos->second.m_salary<<endl;
//	}
//	cout<<endl;
//
//	cout<<"研发部门："<<endl;
//	 pos=m.find (2);
//	count=m.count(2);//策划部员工人数
//	num=0;
//	for(;pos!=m.end()&&num<count;pos++,num++){
//		cout<<"员工姓名："<<pos->second.m_name<<" "<<"工资："<<pos->second.m_salary<<endl;
//	}
//	cout<<endl;
//
//
//}
//
//
//
//
//int main(){
//	srand((unsigned int)time(NULL));
//
////创建员工容器
//	vector<Employee>v;
//	createEmployee(v);
////对员工进行分组
//	multimap<int,Employee>m;
//	setDep(v,m);
//	//按照部门（即为multimap的key值作为索引）显示员工信息
//	showEmployee(m);
//
//
//system("pause");
//return 0;
//}