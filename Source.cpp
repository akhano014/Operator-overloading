#include<iostream>
#include<list>
using namespace std;
struct University {
	string name;
	int studentcount;
	University(string na,int sc) {
		name = na;
		studentcount = sc;
	}
	bool operator==(const University& Name)const {
		return this->name == Name.name;
	}
};
ostream& operator<<(ostream& Cout, University& bahria) {
	Cout << "Name: " << bahria.name << endl;
	Cout << "Student Count:" << bahria.studentcount << endl;
	Cout << endl;
	return Cout;
}
struct Topuniversity {
	list<University>UniversityDetalis;
	void operator+=(University& bahrian) {
		this->UniversityDetalis.push_back(bahrian);
	}
	void operator-=(University& islamic) {
		this->UniversityDetalis.remove(islamic);
	}
};
void operator<<(ostream& COUT, Topuniversity& Top) {
	for (University detalis : Top.UniversityDetalis) {
		COUT << detalis;
	}
}
int main() {
	University Bahria = University("Bahria H-11", 4000);
	University Islamic = University("Islamic H-10", 50000);
	Topuniversity top5;
	top5 += Bahria;
	top5 += Islamic;
	top5 -= Islamic;
	cout << top5;
}