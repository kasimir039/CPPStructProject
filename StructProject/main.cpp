#include <iostream>


using namespace std;


typedef struct student {

	char name[50] = "";
	char surName[50] = "";
	double point = -1;

}Student;


#define SIZE 2


enum Choices {

	AddStudent = 1,
	DisplayStudent,
	Exit


};

void inputStudentInfo(Student*);
void displayStudentInfo(Student*);
void displayProgramInfo();



int main()
{
	Student stud[SIZE];
	Student* studPtr = stud;

	int choice = 0;

	while (choice != Exit) {
		displayProgramInfo();

		cin >> choice;



		switch (choice)
		{
		case AddStudent:
			if (choice == AddStudent)
				inputStudentInfo(studPtr);
			break;
		case DisplayStudent:
			if (studPtr->point == -1)
				cout << ("No student please add student!\n");
			else if (choice == DisplayStudent)
				displayStudentInfo(studPtr);
			break;
		case Exit:
			if (choice == Exit)
				cout << "Cikis basarili";
			break;
		default:
			cout << "Yanlis secim " << endl;
			break;
		}
	}

}

void inputStudentInfo(Student* studPtr)
{
	char Name[50] = "";
	char SurName[50] = "";

	for (int i = 0; i < SIZE; i++)
	{
		cout << i + 1 << "." "Student Name: ";
		cin >> Name;
		strcpy_s(studPtr[i].name, Name);
		cout << i + 1 << "." "Student Surname: ";
		cin >> SurName;
		strcpy_s(studPtr[i].surName, SurName);
		cout << i + 1 << "." "Student point: ";
		cin >> studPtr[i].point;

	}
	cout << endl;
}

void displayStudentInfo(Student* studPtr)
{
	cout << "STUDENT LIST" << endl;
	cout << "------------------------" << endl;
	for (int i = 0; i < SIZE; i++)
	{
		cout << "Student Name: " << studPtr[i].name << endl;
		cout << "Student Surname: " << studPtr[i].surName << endl;
		cout << "Student point: " << studPtr[i].point << endl;
		cout << "--------------------------------------\n";

	}


}

void displayProgramInfo()
{
	cout << "Choice:\n1)Ogrenci Ekle\n2)Ogrenci Goster\n3)Cikis\n";
}

