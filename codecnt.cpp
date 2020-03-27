#include<iostream>
using namespace std;

class test
{
	int code;
	static int cnt;
	public:
		void setcode()
		{
			code=++cnt;
			
		}
		void showcode()
		{
			cout<<code;
		}
		static void showcnt()
		{
			cout<<cnt;
		}
};
int test::cnt;
int main()
{
	test t1,t2;
	t1.setcode();
	t2.setcode();
	
	test::showcnt();
	test t3;
	t3.setcode();
	test::showcnt();
	t1.showcode();
	t2.showcode();
	t3.showcode();
	
	return 0;
}

