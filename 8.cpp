#include "iostream"

using namespace std;
class item
{
    int code;
    float price;
public:
    void getdata(int a, float b)
    {
        code = a;
        price = b;
    }
    void show(void)
    {
        cout <<"Code :"<<code<<"\n";
        cout <<"Price :"<<price<<"\n";
    }
};

const int size = 2;

int main()
{
    item *p = new item[size];
    item *d = p;
    int x,i;
    float y;
    for(i=0; i<size;i++)
    {
        cout <<"Input Code and price for Item " << i+1;
        cin >> x >> y;
        p->getdata(x,y);
        p++;
    }
    for(i=0; i<size;i++)
    {
        cout << "item: " << i+1 << "\n";
        d ->show () ;
        d++;
    }
    system("pause");
    return 0;
}
