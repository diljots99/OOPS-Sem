/*
*using switch 
*         - Days of week
*/
#include "iostream"

using namespace std;



int main()
{
    int num;
    cout<<"\t\t\tDAYS OF WEEK\n";
    cout<<"Enter number :- ";
    ab:
    cin>>num;
    
    switch (num)
    {
        case 1: cout<<"\n Monday \n";
                break;
        case 2: cout<<"\n Tuesday \n";
                break;
        case 3: cout<<"\n Wednesday \n";
                break;
        case 4: cout<<"\n Thursday \n";
                break;
        case 5: cout<<"\n Friday \n";
                break;
        case 6: cout<<"\n Saturday \n";
                break;
        case 7: cout<<"\n Sunday \n";
                break;
        default:cout<<"WORNG CHOICE\nEnter choice again:-  ";
                goto ab;
                break;
    }
    system("pause");
    return 0;
}

