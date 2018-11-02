#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main ()
{
    const int MONTHS = 12;
    string name[MONTHS]= {"January","February","March","April","May","June","July","August","September","October","November","December"};
    int count= 0;
    double rain[MONTHS],avg,year=0,highest,lowest;
    string highMonth,lowMonth;
    for(count = 0; count < MONTHS; count++)
    {
        cout <<"How many inches of rain does "<< name[count]<< " have? \n";
        cin >> rain[count];

        while (rain[count] < 0)
        {
            cout << "Please enter a number greater than 0."<< endl;
            cin >> rain[count];
        }
    }

    for(int count=0; count<MONTHS; count++)
        year += rain[count];
        avg = year / MONTHS;

    for( int count = 0; count < MONTHS; count++)
    {
        cout << name[count]<< " has "<< rain[count] << " inches of rainfall.\n";
    }

    highest = rain[0];

    for (count = 1 ;count < MONTHS; count++)
    {
        if (rain[count] > highest)
        {
            highMonth = name[count];
            highest = rain[count];
        }
    }
    lowest = rain[0];

    for (count = 1 ;count < MONTHS; count++)
    {
        if (rain[count] < lowest)
        {
        lowMonth = name[count];
        lowest = rain[count];
        }
    }
    cout << endl;
    cout << setprecision(2) << fixed;
//cout <<"Total Rainfall throughout the year is " <<year << " inches" << endl;
cout <<"The average monthly rainfall is " << avg << " inches"<< endl;
cout <<"The month with the highest amount of rainfall is " << highMonth << " with " << highest<< " inches."<< endl;
cout <<"The month with the lowest amount of rainfall is " << lowMonth << " with " << lowest<< " inches."<< endl;
return 0;
}
