//0028
#include<iostream>
using namespace std;

string teamName[4];
int score[4][4], totalScore[4], raking[4];


void getName();
void getScore();
void processScore();
void ranking();
void show();

int main()
{
	getName();
	getScore();
	processScore();
	ranking();
	show();

	return 0;
}

void getName()
{
	for (int i = 0; i < 4; i++)
	{
		cin >> teamName[i];
	}
}

void getScore()
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cin >> score[i][j];
		}
	}
}

void processScore()
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (i != j)
			{
				if (score[i][j] > score[j][i])
				{
					totalScore[i] += 3;
				}
				else if (score[i][j] == score[j][i])
				{
					totalScore[i] += 1;
				}

			}
		}
	}
}

void ranking()
{
	int temp;
	string temp2;
	for (int i = 0; i < 4; i++)
	{
		for (int j = i + 1; j < 4; j++)
		{
			if (totalScore[i] < totalScore[j])
			{
				temp = totalScore[i];
				totalScore[i] = totalScore[j];
				totalScore[j] = temp;

				temp2 = teamName[i];
				teamName[i] = teamName[j];
				teamName[j] = temp2;

			}
		}
	}
}

void show()
{
	for (int i = 0; i < 4; i++)
	{
		if (totalScore[i] != totalScore[i + 1])
		{
			cout << teamName[i] << " " << totalScore[i] << endl;
		}
		else
		{

			cout << "no " << i << endl;
		}

	}
}