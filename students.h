#include <string>
#include <iostream>
using namespace std;
class Students
{
public:
	void set_name(string student_name)
	{ 
		name = student_name;
	}
	string get_name() 
	{
		return name; 
	}
	void set_lastname(string student_lastname)
	{
		lastname = student_lastname; 
	}
	string get_lastname()
	{ 
		return lastname;
	}
	void set_scores(int student_scores[])
	{
		for (int i = 0; i < 5; ++i)
		{
			scores[i] = student_scores[i];
		}
	}

	void set_average_ball(float ball)
	{
		average_ball = ball;
	};
	float get_average_ball()
	{
		return average_ball; 
	}

private:
	int scores[5];
	float average_ball;
	string name, lastname;
};
