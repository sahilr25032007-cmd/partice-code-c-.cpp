wap to  program to print current day and date 
#include <iostream>
#include <ctime>
using namespace std;

int main() {
    
    time_t now = time(0);

    
    tm *ltm = localtime(&now);

    
    const char* days[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

    
    const char* months[] = {"January", "February", "March", "April", "May", "June",
                            "July", "August", "September", "October", "November", "December"};

    
    cout << "Today is: " << days[ltm->tm_wday] << endl;
    cout << "Date: " << ltm->tm_mday << " " << months[ltm->tm_mon] << " " << 1900 + ltm->tm_year << endl;

    return 0;
}