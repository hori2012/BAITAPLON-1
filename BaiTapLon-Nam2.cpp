#include<iostream>
#include<string>
using namespace std;
class Profile{
	private:
		string fullname, mssv, province;
		float gpa;
	public:
		friend istream& operator >> (istream& is, Profile &pf1);
		friend ostream& operator << (ostream& os, Profile &pf1);
		float getGpa();
};
class Practise{
	private:
		float lesson, allow, n_allow;
		float practise;
		float s_lesson;
	public:
		friend istream& operator >> (istream& is , Practise &pt1);
		friend ostream& operator << (ostream& os, Practise &pt1);
		float point();
		void setPractise();
		float getPractise();
};
class Scholarship{
	private:
		string namebank;
		int numberbank;
	public:
		friend istream& operator >> (istream& is, Scholarship &ip1);
		friend ostream& operator << (ostream& os, Scholarship &ip1);	
};
istream& operator >> (istream& is, Profile &pf1){
	cout<<"Enter of the name: ";
	fflush(stdin);
	getline(is, pf1.fullname);
	cout<<endl;
	cout<<"Enter of the mssv: ";
	fflush(stdin);
	getline(is, pf1.mssv);
	cout<<endl;
	cout<<"Enter of the province: ";
	fflush(stdin);
	getline(is, pf1.province);
	cout<<endl;
	cout<<"Enter of the gpa: ";
	is>>pf1.gpa;
	cout<<endl;
	return is;
}
ostream& operator << (ostream& os, Profile &pf1){
	os<<"Fullname: "<<pf1.fullname<<endl;
	os<<"Mssv: "<<pf1.mssv<<endl;
	os<<"Provice: "<<pf1.province<<endl;
	os<<"GPA: "<<pf1.gpa<<endl;
	return os;
}
float Profile::getGpa(){
	return this->gpa;
}
istream& operator >> (istream& is, Practise &pt1){
	cout<<"Enter of the sum lesson: ";
	is>>pt1.s_lesson;
	cout<<endl;
	cout<<"Enter of the lesson: ";
	is>>pt1.lesson;
	cout<<endl;
	cout<<"Enter of the allow: ";
	is>>pt1.allow;
	cout<<endl;
	cout<<"Enter of the not allow: ";
	is>>pt1.n_allow;
	cout<<endl;
	return is;
}
ostream& operator << (ostream& os, Practise &pt1){
	os<<"Sum lesson: "<<pt1.s_lesson<<endl;
	os<<"Lesson: "<<pt1.lesson<<endl;
	os<<"Allow: "<<pt1.allow<<endl;
	os<<"Not allow: "<<pt1.n_allow<<endl;
	return os;
}
float Practise::point(){
	float cur;   
	float pre;
	float temp;
	cur= allow + n_allow;
	if(cur > (s_lesson * 0.15)){
		temp=0;
	}
	else{
		pre=lesson + allow*3 + n_allow*2;
		temp=(pre/s_lesson);
	}
	return temp;
} 
void Practise::setPractise(){
	this->practise=point();
}
float Practise::getPractise(){
	return this->practise;
}
istream& operator >> (istream& is, Scholarship &ip1){
	cout<<"Enter of the name bank: ";
	fflush(stdin);
	getline(is, ip1.namebank);
	cout<<endl;
	cout<<"Enter of the number bank: ";
	is>>ip1.numberbank;
	cout<<endl;
	return is;
}
ostream& operator << (ostream& os, Scholarship &ip1){
	os<<"Name bank: "<<ip1.namebank<<endl;
	os<<"Number bank: "<<ip1.numberbank<<endl;
	return os;
}
int main(){
	/*Profile a;
	cin>>a;
	cout<<a;*/
	Practise b;
	cin>>b;
	cout<<b;
	cout<<"Practise: "<<b.getPractise()<<endl;
/*	Scholarship c;
	cin>>c;
	cout<<c;*/
	return 0;
}
