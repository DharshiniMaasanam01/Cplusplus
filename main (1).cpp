/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>

using namespace std;

int main() {
    string email, location, reportType;
    /*
    Name:Dharshini M
    college name: Vivekanandha College Of Engineering for women
    datas used:Email,location,reporttype
    methods used:if else
    */
    cout << "Enter your email address: ";
    cin>>email;
    cout << "Enter your location: ";
    cin>>location;
    cout << "Do you want the weather for a specific day or for the week? (Enter 'day' or 'week'): ";
    cin>>reportType;
    cout << "Here's the " << reportType << " report for " << location << ":\n";
    if (reportType == "day") {
        int date;
        cout<<"enter date:\n";
        cin>>date;
        cout<<"The climate is:\n";
        cout<<"date:"<<date<<"\n";
        cout << "weather: Sunny\n";
        cout<<"TEMPERATURE:\n";
        cout << "High: 75°F\n";
        cout << "Low: 55°F\n";
    } else if (reportType == "week") {
        cout << "Date: May 7, 2023\n";
        cout << "Conditions: Sunny\n";
        cout << "High: 75°F\n";
        cout << "Low: 55°F\n";
        cout << "\n";
        cout << "Date: May 8, 2023\n";
        cout << "Conditions: Partly Cloudy\n";
        cout << "High: 70°F\n";
        cout << "Low: 52°F\n";
        cout << "Date: May 9, 2023\n";
        cout << "Conditions: Partly Cloudy\n";
        cout << "High: 70°F\n";
        cout << "Low: 52°F\n";
        cout << "Date: May 10, 2023\n";
        cout << "Conditions: Partly Cloudy\n";
        cout << "High: 70°F\n";
        cout << "Low: 52°F\n";
        cout << "Date: May 11, 2023\n";
        cout << "Conditions: Partly Cloudy\n";
        cout << "High: 70°F\n";
        cout << "Low: 52°F\n";
        cout << "Date: May 12, 2023\n";
        cout << "Conditions: Partly Cloudy\n";
        cout << "High: 70°F\n";
        cout << "Low: 52°F\n";

    } else {
        cout << "Invalid report type entered.\n";
    }

    return 0;
}