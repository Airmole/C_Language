#include"Player.h"
#include"Group.h"
int main()
{
	FILE* fout = fopen("info.txt", "r");
	Player *p = new Player[32];
	char name[20];
	char sex[10];
	size_t age;
	int i = 0;
	Group G;

	if (fout != NULL)
	{
		while (fscanf(fout, "%s %s %d\n", name, sex, &age) != EOF)
		{
			p[i].Set(name, sex, age);
			i++;
		}
		G.SetGroup(p, 32);
		G.Match();
	}
	return 0;
}
