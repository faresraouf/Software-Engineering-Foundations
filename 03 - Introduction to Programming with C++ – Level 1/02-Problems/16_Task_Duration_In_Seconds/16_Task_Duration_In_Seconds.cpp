#include <iostream>
using namespace std;

struct strTaskDuration
{
    int NumberOfDays, NumberOfHours, NumberOfMinutes, NumberOfSeconds;
};

int ReadNumber(string message)
{
    int Number = 0;

    cout << message;
    cin >> Number;

    return Number;
}

strTaskDuration ReadTaskDuration()
{
    strTaskDuration TaskDuration;  

    
    TaskDuration.NumberOfDays = ReadNumber("Please Enter Number Of Days? ");
    TaskDuration.NumberOfHours = ReadNumber("Please Enter Number Of Hours? ");
    TaskDuration.NumberOfMinutes = ReadNumber("Please Enter Number Of Minutes? ");
    TaskDuration.NumberOfSeconds = ReadNumber("Please Enter Number Of Seconds? ");

    return TaskDuration;  
}

int TaskDurationInSeconds(strTaskDuration TaskDuration)
{
    int DurationInSeconds = 0;  

    DurationInSeconds = TaskDuration.NumberOfDays * 24 * 60 * 60;  
    DurationInSeconds += TaskDuration.NumberOfHours * 60 * 60; 
    DurationInSeconds += TaskDuration.NumberOfMinutes * 60;  
    DurationInSeconds += TaskDuration.NumberOfSeconds;  

    return DurationInSeconds;  
}



int main()
{

     cout << "\nTask Duration In Seconds: " << TaskDurationInSeconds(ReadTaskDuration());
    cout << endl;

    return 0;
}