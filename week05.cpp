// week05.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void ShowUsage()
{
    cout << "please enter selection: ";
}
void MakePurchase(int& iTotalSmall ,int& iTotalMedium, int& iTotalLarge)
{
    
    cin >> iTotalSmall >> iTotalMedium >> iTotalLarge;
    
}
void DisplayPurchase(const int iTotalSmall, const int iTotalMedium, const int iTotalLarge)
{
    //cout << "total number of" + quantity  + type;
}
void DisplayTotal(const int iTotalSmall, const int iTotalMedium, const int iTotalLarge)
{

}
int main()
{
    char input=0;
    cout << "to show program usage 's'" << endl;
    cout << "to purchase a surf board press 'p'" << endl;
    cout << "to display current purchases press 'c'" << endl;
    cout << "to display purchase amount due press 't'" << endl;
    cout << "to quit the program press 'q'" << endl;
    //ShowUsage();
    //cin >> input;
    while (input != 'q') {
        ShowUsage();
        cin >> input;
        //if (input == 's') {
        //    ShowUsage();
         //   cin >> input;
        //}
         if (input == 'p') {
            int iTotalSmall;
            int iTotalMedium;
            int iTotalLarge;
            cout << "please enter the quantity and type of surfboard (s=small/m=medium/l=large)";
            cin >> iTotalSmall >> iTotalMedium >> iTotalLarge;
            MakePurchase(iTotalSmall, iTotalMedium, iTotalLarge);
            break;
            
        
        }
        else if (input == 'c') {

        }
        else if (input == 't') {

        }
        
    }
    return 0;
}


