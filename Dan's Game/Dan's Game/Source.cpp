#include <iostream>
#include <random>
#include <fstream>

using namespace std;
struct Object
{
	int strength;
	int health;
};
const int monCount = 4;

void loadMonsters(Object monsters, int & numMonsters);
char fight(Object player, const Object monsters[], int numMonsters);
void attack(Object attacker, Object & defender);
void heal(int healingPower, Object & player);
void bringOutYourDead(Object monsters[],int & numMonsters);
bool isGameOver(Object player, int numMonsters);
void gameOver(Object player, int numMonsters);


int main()
{
	int numMonsters = monCount;
	Object player;
	Object monsters[monCount];
	char input;
	bool valid = true;

	cout << "A monster approaches!\n\n";
	while ((playerHealth >= 0) && (monsterHealth >= 0))
	{
		cout << " The monster readies itself...\n Your Health: "<<playerHealth<<"\n Please select action...\n  (a)ttack  (h)eal:  ";
		cin >> input;
		switch (input)
		{
		case 'a':
		case 'A':
			attack(player, &numMonsters)
			break;
		case 'h':
		case 'H':
			playerHealth += playerStrength/2;
			cout << "\nYou recover " << playerStrength/2 << " Health\n\n";
			break;
		default:
			valid = false;
			break;
		}
		if (valid)
		{
			playerHealth -= monsterStrength;
			cout<<"You take " << monsterStrength << " damage...\n\n";
		}
		else
		{
			cout << "You can do that...\n\n";
			valid = true;
		}

	} while ((playerHealth > 0) && (monsterHealth > 0));
	
	if (playerHealth > 0)
		cout << "The monster falls at your feet.\n";
	else if (monsterHealth <= 0)
		cout << "The monster falls at your feet.\n";
	else
		cout << "You journey is at an end...\n\n\n\n";


				system("PAUSE");
				
	return 0;
}

void loadMonsters(Object monsters[monCount], int & numMonsters)
{
	ifstream fin;
	fin.open(Monsters.txt);
	for (int i = 0; i < monCount; i++)
	{
		fin >> monsters[i].health;
		fin >> monsters[i].strength;
	}

}

char fight(Object player, const Object monsters[], int numMonsters)
{
	char input;
	cout << "ENEMY       HP  STR";
	for (int i = 0; i < numMonsters; i++)
	{
		cout << "Monster " << i + 1 << ": " << monsters[i].health << "  " << monsters[i].strength<<endl;
	}

}
void attack(Object attacker, Object & defender)
{
	defender.health -= attacker.strength;
}
void heal(int healingPower, Object & player)
{
	healingPower = 2 * player.strength;
}
void bringOutYourDead(Object monsters[], int & numMonsters)
{

}
bool isGameOver(Object player, int numMonsters)
{
	return (player.health <= 0 || numMonsters <= 0);
}
void gameOver(Object player, int numMonsters)
{
	if (player.health <= 0)
		cout << "You fall, and rise no more.";
	if (numMonsters <= 0)
		cout << "You emerge Victorious!";
	return;
}