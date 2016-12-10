 #include<iostream>
using namespace std;
int sum(int a, int b)
{
	return a+b;
}
int diff(int a,int b)
{
	return a-b;
}
int product(int a, int b)
{
	return a*b;
}
int quotient(int a,int b)
{
	return a/b;
}
int main()
{	
	int a,b;
	cout <<"Enter number 1: ";
	cin>>a;
	cout <<"Enter number 2: ";
	cin>>b;
	cout<<"Sum is:"<<sum(a,b)<<endl;
	cout<< "Difference is:"<<diff(a,b)<<endl;
	cout<<"Product is:"<<product(a,b)<<endl;
	cout<< "Quotient is:"<<quotient(a,b)<<endl;
	return 0;	
}
