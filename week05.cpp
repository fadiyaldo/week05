#include <iostream>
using namespace std;

void ShowUsage()
{
    cout << "please enter selection: ";
}
void MakePurchase(int& iTotalxxxs, int& iTotalSmall, int& iTotalMedium, int& iTotalLarge)
{
    // function determines the amount of purchase and the type
    int quantity=0;
    string size;

    cout << " please enter the quantity and type(s=small/m=medium/L=large)";
    cin >> quantity >> size;

    if (size == "s" || size == "S") {
        iTotalSmall = +quantity;
    }
    else if (size == "x") {
        iTotalxxxs = +quantity;
    }
    else if (size == "m" || size =="M") {
        iTotalMedium = +quantity;
    }
    else if (size == "l" || size=="L") {
        iTotalLarge = +quantity;
    }


}
void DisplayPurchase(const int iTotalxxxs,const int iTotalSmall, const int iTotalMedium, const int iTotalLarge)
{
    // if there are more than one type during the purchase it will display all of them having the if statment with all of them and working 
    // down will keep the conditions right
    if (iTotalLarge > 0 && iTotalSmall > 0 && iTotalMedium > 0) {
        cout << "the total number of large surfs is: " << iTotalLarge << endl;
        cout << "the total number of small surfs is: " << iTotalSmall << endl;
        cout << "the total number of medium surfs is: " << iTotalMedium << endl;
    }
   
     else if (iTotalSmall > 0 && iTotalMedium > 0) {
        cout << "the total number of small surfs is: " << iTotalSmall << endl;
        cout << "the total number of medium surfs is: " << iTotalMedium << endl;
    }
    else if (iTotalLarge > 0 && iTotalSmall > 0) {
        cout << "the total number of large surfs is: " << iTotalLarge << endl;
        cout << "the total number of small surfs is: " << iTotalSmall << endl;
    }
    else if (iTotalLarge > 0 && iTotalMedium > 0) {
        cout << "the total number of large surfs is: " << iTotalLarge << endl;
        cout << "the total number of medium surfs is: " << iTotalMedium << endl;
    }
    
    else if (iTotalSmall > 0) {
        cout << "the total number of small surfs is: " << iTotalSmall << endl;
    }

    else if (iTotalMedium > 0) {
        cout << "the total number of medium surfs is: " << iTotalMedium << endl;
    }
    else if (iTotalLarge > 0) {
        cout << "the total number of large surfs is: " << iTotalLarge << endl;
    }
    else if (iTotalxxxs > 0) {
        cout << "the total number of large surfs is: " << iTotalxxxs << endl;
    }
    
}
void DisplayTotal(const int iTotalxxxs, const int iTotalSmall, const int iTotalMedium, const int iTotalLarge)
{
    //intialing consts 
    int small = 175;
    int medium = 190;
    int large = 200;
    int xxxs = 50;
    // doing calculations for the total of each type then the total of all
    int total_large= large * iTotalLarge;
    int total_medium= medium * iTotalMedium;
    int total_small= small * iTotalSmall;
    int total_xxxs = xxxs * iTotalxxxs;
    int total = total_small + total_large + total_medium + iTotalxxxs;

    if (iTotalLarge > 0 && iTotalSmall > 0 && iTotalMedium > 0) {
        cout << "the total number of large surfs is: " << iTotalLarge << " at the total: "<< large* iTotalLarge << endl;
        cout << "the total number of small surfs is: " << iTotalSmall << " at the total: " << small * iTotalSmall << endl;
        cout << "the total number of medium surfs is: " << iTotalMedium << " at the total: " << medium * iTotalMedium << endl;
    }

    else if (iTotalSmall > 0 && iTotalMedium > 0) {
        cout << "the total number of small surfs is: " << iTotalSmall << " at the total: " << small * iTotalSmall << endl;
        cout << "the total number of medium surfs is: " << iTotalMedium << " at the total: " << medium * iTotalMedium << endl;
    }
    else if (iTotalLarge > 0 && iTotalSmall > 0) {
        cout << "the total number of small surfs is: " << iTotalLarge << " at the total: " << large * iTotalLarge << endl;        
        cout << "the total number of small surfs is: " << iTotalSmall << " at the total: " << small * iTotalSmall << endl;
    }
    else if (iTotalLarge > 0 && iTotalMedium > 0) {
        cout << "the total number of small surfs is: " << iTotalLarge << " at the total: " << large * iTotalLarge << endl;
        cout << "the total number of medium surfs is: " << iTotalMedium << " at the total: " << medium * iTotalMedium << endl;
    }

    else if (iTotalSmall > 0) {
        cout << "the total number of small surfs is: " << iTotalSmall << " at the total: " << small * iTotalSmall << endl;
    }

    else if (iTotalMedium > 0) {
        cout << "the total number of small surfs is: " << iTotalMedium << " at the total: " << medium * iTotalMedium << endl;
    }
    else if (iTotalLarge > 0) {
        cout << "the total number of small surfs is: " << iTotalLarge << " at the total: " << large * iTotalLarge << endl;
    }
    else if (iTotalxxxs > 0) {
        cout << "the total number of large surfs is: " << iTotalxxxs << "at the Total: "<< total_xxxs<< endl;
    }
    cout << "the total amount is: $" << total << endl;

}
int main()
{
    // main function call all the functions when the condition is met 
    int iTotalSmall=0;
    int iTotalMedium=0;
    int iTotalLarge=0;
    int iTotalxxxs = 0;
    char input = 0;
    cout << "to show program usage 's'" << endl;
    cout << "to purchase a surf board press 'p'" << endl;
    cout << "to display current purchases press 'c'" << endl;
    cout << "to display purchase amount due press 't'" << endl;
    cout << "to quit the program press 'q'" << endl;
    // the while loop will always run until q is pressed which will end the loop
    while (true) {
        cout << "please enter a selection: ";
        cin >> input;
       
        if (input == 'p') {
            MakePurchase(iTotalxxxs, iTotalSmall, iTotalMedium, iTotalLarge);


        }
        else if (input == 'c') {
            DisplayPurchase(iTotalxxxs, iTotalSmall, iTotalMedium, iTotalLarge);
        }
        else if (input == 't') {
            DisplayTotal(iTotalxxxs,  iTotalSmall,  iTotalMedium,  iTotalLarge);
        }
        else if (input == 'q') {
            cout << "thank you";
            break;
        }

    }
    return 0;
}

