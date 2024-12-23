#include<iostream>
using namespace std;
class lecture_details
{
	private:
		string lecture_name;
		string sub_name;
		string course_name;
		int lecture_num;
	public:
		lecture_details()
		{
			
		}
		void add_details(string ln , string sn , string cn , int n)
		{
				lecture_name=ln;
				sub_name=sn;
				course_name=cn;
				lecture_num=n;
		}
		void display_details()
		{
				cout<<"\n\n\t Lecture name :- "<<lecture_name;
				cout<<"\n\n\t subject name :- "<<sub_name;
				cout<<"\n\n\t course name :- "<<course_name;
				cout<<"\n\n\t lecture number :- "<<lecture_num;
		}
			
};
main()
{
	lecture_details lc[5];
	string lecture_name;
	string sub_name;
	string course_name;
	int lecture_num;
	for(int i=0;i<5;i++)
	{
		cout<<"\n\n\t ___Enter Lecture Details["<<i+1<<"]__ ";
		
		cout<<"\n\n\t Enter Lecture name :- ";
		cin>>lecture_name;
		cout<<"\n\n\t Enter Subject name :- ";
		cin>>sub_name;
		cout<<"\n\n\t Enter Course name :- ";
		cin>>course_name;
		cout<<"\n\n\t Enter Lecture Number :- ";
		cin>>lecture_num;
		
		lc[i].add_details(lecture_name ,sub_name , course_name , lecture_num);
	}
	
	for(int i=0;i<5;i++)
	{
		cout<<"\n\n\t ___Lecture Details["<<i+1<<"]___ ";
		lc[i].display_details();
	}
	
}