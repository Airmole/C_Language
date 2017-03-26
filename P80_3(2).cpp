//默认构造函数初始化
class Rectangle
{
private:
    int length,width;
public:
    Rectangle();  //声明不带参数的构造函数
    Rectangle(int, int );  //使用参数列表声明带两个参数的构造函数
};
Rectangle::Rectangle (): length(0), width(0)  //定义不带参数的构造函数
{
    cout << "初始化默认值" << endl;
    return width * length;
}
Rectangle::Rectangle(int l, int w):  length(l),  width(w)  //定义带两个参数的构造函数
{
    cout <<"初始化..." <<l<< "," <<w<< endl;
    return width * length;
}
//拷贝构造函数初始化
class Rectangle
{
    int l,w;
public:
   Rectangle(const Rectangle & t)
   {
        this->l = t.l;
        this->w = t.w;
   }
   Rectangle(int a = 0, int b = 0): l(a), w(b)
    {
    }
    int Show()
    {
        cout <<l<< “,” <<w<< endl;
        return w * l;
    }
};
