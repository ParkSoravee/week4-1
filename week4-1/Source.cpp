//0028
#include <iostream>
using namespace std;

class team
{
public:
	string name;
	int score[4];
	int subKickScore;
	int kickScore;

/*	team()
	{
		name = "no";
		score = 0;
		subKickScore = 0;
		kickScore = 0;
	}
	team(string aName, int aScore, int aSubKickScore, int aKickScore)
	{
		name = aName;
		score = aScore;
		subKickScore = aSubKickScore;
		kickScore = aKickScore;
	}*/
};

string getName();
int getScore();

int main2()
{
	team team1, team2, team3, team4;
	team1.name = getName();
	team2.name = getName();
	team3.name = getName();
	team4.name = getName();
	
	for (int i=0;i<4;i++)
	{
		team1.score[i] = getScore();
	}
	for (int i = 0; i < 4; i++)
	{
		team2.score[i] = getScore();
	}
	for (int i = 0; i < 4; i++)
	{
		team3.score[i] = getScore();
	}for (int i = 0; i < 4; i++)
	{
		team4.score[i] = getScore();
	}
	
	
	

	return 0;
}

string getName()
{
	string name;
	cin >> name;
	return name;
}

int getScore()
{
	int input;
	cin >> input;
	return input;
}