#include "people.h"

using namespace std;

int main()
{
	Student stud;
	Professor prof;
	Administrative_Worker adm_worker;
	Course course;
	Enrolled enrl;
	menu m;

	vector < Student > s;
	vector < Professor > p;
	vector < Administrative_Worker > a;
	vector < Course > c;
	vector < Enrolled > e;

	m.loadDatabase(s,p,a,c,e);
	m.gen(s);


	//enrl.showEnrolled(e);

	system("pause");
    return 0;
}
