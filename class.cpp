#include<iostream>
 #include<iostream>
 #include<string>
 using namespace std;
 
 class info{
 	public:
 		string name;
		int id_num;  
 };

 class student: public info{
 	public:
 		int num_of_subjects;
 		int num_books;	
};
 
 class Prof: public info{
 	public:
 		int tin;
 };
 class Staff: public info{
 	public:
 	int sss;
 };
 
 int main(){
 	student stud;
 	cout<<"Student Name:";
 	cin>> stud.name;
 	cout<<"Student ID Number:";
 	cin>> stud.id_num;
 	cout<< "Number Of Subjects:";
 	cin>> stud.num_of_subjects;
 	cout<< "Number Of Books:";
 	cin>> stud.num_books;
 	cout<<endl;
 	
 	Prof prof;
 	cout<<"Prof Name:";
 	cin>> prof.name;
 	cout<<"Student ID Number:";
 	cin>> prof.id_num;
 	cout<< "Enter TIN:";
 	cin>> prof.tin;
 	cout<<endl;
 	
 	Staff staf;
 	cout<<"Staff Name:";
 	cin>> staf.name;
 	cout<<"Staff ID Number:";
 	cin>> staf.id_num;
 	cout<< "Enter SSS:";
 	cin>> staf.sss;
 	cout<<endl;
 	
 	return 0;
}
