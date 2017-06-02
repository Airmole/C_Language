class CCircle : public CShape
{
private:
	CPoint    Center;           
	int    Radius;
public:
	CCircle(CPoint ctr, int r, char *c): CShape(c), Center(ctr)
	{
     	Radius = r;
	}
	void Draw()
	{
	     cout << "Draw a circle at center (" << Center.GetX() << "," ;
	     cout << Center.GetY()<< ") with radius " << Radius ;
          cout << " and color ";
	     PrintColor();
	}
}; 
