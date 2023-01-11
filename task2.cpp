#include <iostream>
using namespace std;

main()
{
   int length;
   int width;
   int height;
   int volume;
   float cubic_millimeters_volume;
   float cubic_meters_volume;
   float cubic_kilometers_volume;
   float cubic_centimeters_volume;
   string output_unit;
   cout << "Enter Length: ";
   cin >> length;
   cout << "Enter width: ";
   cin >> width;
   cout << "Enter height: ";
   cin >> height;
   cout << "Enter output_unit (e.g: cubic millimeters , cubic meters . cubic kilometers): ";
   cin >> output_unit;

   volume = (length * width * height) / 3;

   if (output_unit == "cubic_millimeters")
   {
      cubic_millimeters_volume = (volume * 1000000000);
      cout << "Volume in cubic millimeters is : " << cubic_millimeters_volume;
   }

   if (output_unit == "cubic_meters")
   {
      cubic_meters_volume = volume;
      cout << "Volume in cubic meters is : " << cubic_meters_volume;
   }

   if (output_unit == "cubic_kilometers")
   {
      cubic_kilometers_volume = (volume * 0.000000001);
      cout << "Volume in cubic kilometers is : " << cubic_kilometers_volume;
   }
   if (output_unit == "cubic_centimeters")
   {
      cubic_centimeters_volume = (volume * 1000000);
      cout << "Volume in cubic centimeters is : " << cubic_centimeters_volume;
   }
}
