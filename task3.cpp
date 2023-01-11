#include <iostream>
using namespace std;
main()
{
   char character;
   float item_price;
   float tax_amount;
   float final_price;

   cout << "Enter character: ";
   cin >> character;
   cout << "Enter item price";
   cin >> item_price;
 

   if (character == 'M')

   {
      tax_amount = item_price * (0.06);
      final_price = item_price + tax_amount;
      cout << "The Final Price of the vechile type motor cycle after adding the tax is " << final_price;
   }

   if (character == 'E')

   {
      tax_amount = item_price *  (0.08);
      final_price = item_price + tax_amount;
      cout << "The Final Price of the vechile type Electric after adding the tax is " << final_price;
   }

   if (character == 'S')

   {
      tax_amount = item_price * ( 0.1);
      final_price = item_price + tax_amount;
      cout << "The Final Price of the vechile type Sedan after adding the tax is " << final_price;
   }

   if (character == 'V')

   {
      tax_amount = item_price * ( 0.12);
      final_price = item_price + tax_amount;
      cout << "The Final Price of the vechile type Van after adding the tax is " << final_price;
   }

   if (character == 'T')

   {
      tax_amount = item_price * ( 0.15 );
      final_price = item_price + tax_amount;
      cout << "The Final Price of the vechile type Truck after adding the tax is " << final_price;
   }
}
