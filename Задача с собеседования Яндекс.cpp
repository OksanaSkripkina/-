

#include <iostream>
#include<list>
using namespace std;


struct Disc
{
	string name;
	string count;
	list <Student> array;
};

struct Student 
{
	string name;
	string disk;
	string score;
	string fine;
	

};



string* cutStr(string str) {   //
	int count = 1;
	for (int i = 0; i < str.size(); i++)
	{
		if (str[i] == ',') count++;
	}
	string* array = new string[count];
	for(int i = 0, k=0; i < count; i++) 
	{
		for (int j = k; str[j] != ','&& j<str.size(); j++, k++)
		{
			array[i] += str[j];
		}
	k++;
	}
	return array;
}

int main()
{
	//string str;
	//cin >> str;
	//string* array = cutStr(str);
	//int size = 4;
	//for (int i = 0; i < size; i++)
	//{
	//	cout << array[i]<<" ";
	//}
	list<Disc> discs;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		string str;
		cin >> str;
		string* array = cutStr(str);
		discs.push_back(Disc{ array[0], array[1] });

	}

	list <Student> students;
	int k;
	cin >> k;
	for (int i = 0; i < 0; i++)
	{
		string str;
		cin >> str;
		string* array = cutStr(str);
		students.push_back( Student{array[0], array[1], array[2], array[3] });

	}

	/*list<Student>::iterator it;
	it = students.begin();*/
	for (list<Disc>::iterator it = discs.begin(); it != discs.end(); ++it)
	{
		cout << it->name<<" "<<it->count<<endl;
	}
	cout << endl;
	for (list<Student>::iterator it = students.begin(); it != students.end(); ++it)
	{
		cout << it->id << " " << it->disc << " " << it->score << " " << it->fine << " "<<endl;
	}
	
	cout << endl;

}


