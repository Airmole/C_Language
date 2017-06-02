class CShape
{
	char Color[10];
public:
	CShape(char *c)
	{
		strcpy(Color, c);
	}
	void Draw()
	{
		cout << "Draw a shape, color is"<< Color << endl;
	}
	void PrintColor()
	{
		cout << Color << endl;
	}
}; 
