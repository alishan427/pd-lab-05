#include <iostream>
using namespace std;
main()
{
  float number_of_hours;
  float number_of_days;
  float number_of_workers;
  float working_days;
  float hours_of_working;
  float result;

  cout << "Enter number of hours: ";
  cin >> number_of_hours;
  cout << "Enter number of days: ";
  cin >> number_of_days;
  cout << "Enter number of workers: ";
  cin >> number_of_workers;

  working_days = number_of_days - (number_of_days * 10 / 100);
  hours_of_working = working_days * 10 * number_of_workers;
  result = 0;

  result = hours_of_working - number_of_hours;
  if (number_of_hours < result)
  {
    cout << "Yes!" << result << "hours left";
  }
  if (number_of_hours > result)
    result = number_of_hours - hours_of_working;
  {
    cout << "No!" << result << "hours needed";
  }
}