class CRect : public CShape
{
	CPoint   lt;      //���Ͻ�����
	int length, width;       //����
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
