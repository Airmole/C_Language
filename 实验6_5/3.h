class CRect : public CShape
{
	CPoint   lt;      //×óÉÏ½Ç×ø±ê
	int length, width;       //³¤¿í
public:
	 CRect (CPoint s, int len, int wid, char *c) : CShape(c), lt(s)
	{  length = len;   width = wid;   } 
	void Draw()
	{
	   cout << "Draw a Rect at  leftTop  (" << lt.GetX() <<","<< lt.GetY()
	   	   << ") with length "<< length << ", width" << width
		  << " , color ";
        PrintColor();
	}
};
