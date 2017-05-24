class CPoint
{
    int x,y;
public:
    CPoint(int x,int y)
    {
        this->x=x;
        this->y=y;
    }
    CPoint(CPoint &p)
    {
        this->x=p.x;
        this->y=p.y;
    }
    int GetX()
    {
        return x;
    }
    int GetY()
    {
        return y;
    }
};