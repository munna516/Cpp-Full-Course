//                  Output Formatting

#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
    //  New line / endl

    cout << "Hello ";
    cout << "World !";
    cout << endl;
    cout << "--------------" << endl;
    cout << "Hello " << endl;
    cout << "World !" << endl;
    cout << endl;
    cout << "Hello\n";
    cout << "World !\n";
    cout << endl;

    // ==================================================

    // flush :: Flushes the output buffer to its final destination

    cout << "This is a nice message...." << endl
         << std::flush;
    //====================================================
    cout << endl;

    //std::setw() : Adjusts the field with for the item about to be printed. 
    //The setw() manipulator only affects the next value to be printed.
    
    cout << "Unformatted table : " << endl;
    cout << "Daniel" << " " << "Gray" << " 25" << endl;
    cout << "Stanley" <<" "  << "Woods" << " 33" << endl;
    cout << "Jordan" << " "  << "Parker" << " 45" <<endl;
    cout << "Joe" << " " << "Ball" << " 21" << endl;
    cout << "Josh" << " " << "Carr" << " 27" <<endl;
    cout << "Izaiah" << " " << "Robinson" << " 29" << endl;

    cout << endl;

    cout << "Formatted table : " << endl;
    cout << std::setw(10) <<  "Lastname"  << std::setw(10) << "Firstname" << std::setw(5) << "Age" << std::endl;
    cout << std::setw(10) << "Daniel"  << std::setw(10) << "Gray" << std::setw(5) << "25" << std::endl;
    cout << std::setw(10) << "Stanley" << std::setw(10)  << "Woods" << std::setw(5) <<  "33" << std::endl;
    cout << std::setw(10) <<  "Jordan" << std::setw(10)  << "Parker" << std::setw(5) << "45" << std::endl;
    cout << std::setw(10) <<  "Joe" << std::setw(10) << "Ball" << std::setw(5) << "21" << std::endl;
    cout << std::setw(10) << "Josh" << std::setw(10) << "Carr" << std::setw(5) <<"27" << std::endl;
    cout << std::setw(10) << "Izaiah" << std::setw(10) << "Robinson" << std::setw(5) << "29" << std::endl;
    cout << std::endl;
    cout << "Formatted table with variables: " << std::endl;
    
    int col_width{14};
    
    
    cout << std::setw(col_width) <<  "Lastname"  << std::setw(col_width) << "Firstname" << std::setw(col_width/2) << "Age" << std::endl;
    cout << std::setw(col_width) << "Daniel"  << std::setw(col_width) << "Gray" << std::setw(col_width/2) << "25" << std::endl;
    cout << std::setw(col_width) << "Stanley" << std::setw(col_width)  << "Woods" << std::setw(col_width/2) <<  "33" << std::endl;
    cout << std::setw(col_width) <<  "Jordan" << std::setw(col_width)  << "Parker" << std::setw(col_width/2) << "45" << std::endl;
    cout << std::setw(col_width) <<  "Joe" << std::setw(col_width) << "Ball" << std::setw(col_width/2) << "21" << std::endl;
    cout << std::setw(col_width) << "Josh" << std::setw(col_width) << "Carr" << std::setw(col_width/2) <<"27" << std::endl;
    cout << std::setw(col_width) << "Izaiah" << std::setw(col_width) << "Robinson" << std::setw(col_width/2) << "29" << std::endl;

   //===================================================================
    std::cout << std::endl;

    //Justify : Values can be justified in their fields. There are three manipulators
    //          for adjusting the justification: left, right, and internal. 
    
    //right justified
    cout << endl;
    cout << "Right justified table(default) :  " << endl;
    
    col_width = 20;
    
    cout << std::right;
    cout << std::setw(col_width) <<  "Lastname"  << std::setw(col_width) << "Firstname" << std::setw(col_width/2) << "Age" << endl;
    cout << std::setw(col_width) << "Daniel"  << std::setw(col_width) << "Gray" << std::setw(col_width/2) << "25" << endl;
    cout << std::setw(col_width) << "Stanley" << std::setw(col_width)  << "Woods" << std::setw(col_width/2) <<  "33" << endl;
    cout << std::setw(col_width) <<  "Jordan" << std::setw(col_width)  << "Parker" << std::setw(col_width/2) << "45" << endl;
    cout << std::setw(col_width) <<  "Joe" << std::setw(col_width) << "Ball" << std::setw(col_width/2) << "21" << endl;
    cout << std::setw(col_width) << "Josh" << std::setw(col_width) << "Carr" << std::setw(col_width/2) <<"27" << endl;
    cout << std::setw(col_width) << "Izaiah" << std::setw(col_width) << "Robinson" << std::setw(col_width/2) << "29" << endl;
    


    //Left justified
    cout << endl;
    cout << "Left justified table :  " << endl;
    
    col_width = 20;
    
    cout << std::left;
    cout << std::setw(col_width) <<  "Lastname"  << std::setw(col_width) << "Firstname" << std::setw(col_width/2) << "Age" << endl;
    cout << std::setw(col_width) << "Daniel"  << std::setw(col_width) << "Gray" << std::setw(col_width/2) << "25" << endl;
    cout << std::setw(col_width) << "Stanley" << std::setw(col_width)  << "Woods" << std::setw(col_width/2) <<  "33" << endl;
    cout << std::setw(col_width) <<  "Jordan" << std::setw(col_width)  << "Parker" << std::setw(col_width/2) << "45" << endl;
    cout << std::setw(col_width) <<  "Joe" << std::setw(col_width) << "Ball" << std::setw(col_width/2) << "21" << endl;
    cout << std::setw(col_width) << "Josh" << std::setw(col_width) << "Carr" << std::setw(col_width/2) <<"27" <<endl;
    cout << std::setw(col_width) << "Izaiah" << std::setw(col_width) << "Robinson" << std::setw(col_width/2) << "29" << endl;
    

    //Internal justified : sign is left justified , data is right justified
    cout << endl;
    cout << "Internal justified : " << endl;
    cout << std::right;
    cout << std::setw(10) << -123.45 << endl;
    cout << std::internal;
    cout << std::setw(10) << -123.45 << endl;
    
    //===================================================================
    cout << endl;  

    //setfill
    
    cout << endl;
    cout << "Table with fill characters :  " << endl;
    
    
    col_width = 20;
    
    cout << std::left;
    cout << std::setfill('*'); // The fill character
    cout << std::setw(col_width) <<  "Lastname"  << std::setw(col_width) << "Firstname" << std::setw(col_width/2) << "Age" << endl;
    cout << std::setw(col_width) << "Daniel"  << std::setw(col_width) << "Gray" << std::setw(col_width/2) << "25" << endl;
    cout << std::setw(col_width) << "Stanley" << std::setw(col_width)  << "Woods" << std::setw(col_width/2) <<  "33" << endl;
    cout << std::setw(col_width) <<  "Jordan" << std::setw(col_width)  << "Parker" << std::setw(col_width/2) << "45" << endl;
    cout << std::setw(col_width) <<  "Joe" << std::setw(col_width) << "Ball" << std::setw(col_width/2) << "21" << endl;
    cout << std::setw(col_width) << "Josh" << std::setw(col_width) << "Carr" << std::setw(col_width/2) <<"27" << endl;
    cout << std::setw(col_width) << "Izaiah" << std::setw(col_width) << "Robinson" << std::setw(col_width/2) << "29" << endl;
    
    //===================================================================
    cout << endl; 

    //boolalpha and noboolapha : control bool output format : 1/0 or true/false
    
    bool condition {true};
    bool other_condition {false};
    
    cout << "condition : " << condition << endl;
    cout << "other_condition : " << other_condition << endl;
    cout << endl;
    cout << std::boolalpha;
    cout << "condition : " << condition << endl;
    cout << "other_condition : " << other_condition << endl;
    cout << endl;
    cout << std::noboolalpha;
    cout << "condition : " << condition << endl;
    cout << "other_condition : " << other_condition << endl;
    
    //===================================================================
    cout << endl;

    //showpos and noshowpos : show or hide the +  sign for positive numbers
    
    int pos_num {34};
    int neg_num {-45};
    
    cout << "pos_num : " << pos_num << endl;
    cout << "neg_num : " << neg_num <<endl;
    cout << endl;
    cout << std::showpos;
    cout << "pos_num : " << pos_num << endl;
    cout << "neg_num : " << neg_num << endl;
    cout << endl;
    cout << std::noshowpos;
    cout << "pos_num : " << pos_num <<endl;
    cout << "neg_num : " << neg_num <<endl;   


    //===================================================================
    cout << endl; 


    //different number systems : std::dec, std::hex, std::oct
    
    int pos_int {717171};
    int neg_int {-47347};
    double double_var {498.32};
    
    cout << endl;
    cout << "default base format : " << endl;
    cout << "pos_int : " << pos_int << endl;
    cout << "neg_int : " << neg_int << endl;
    cout << "double_var : " << double_var << endl;
    
    cout << endl;
    cout << "pos_int in different bases : " << endl;
    cout << "pos_int (dec) : " << std::dec << pos_int << endl;
    cout << "pos_int (hex) : " << std::hex << pos_int << endl;
    cout << "pos_int (oct) : " << std::oct << pos_int << endl;
    cout << endl;
    cout << "neg_int in different bases : " << endl;
    cout << "neg_int (dec) : " << std::dec << neg_int << endl;
    cout << "neg_int (hex) : " << std::hex << neg_int << endl;
    cout << "neg_int (oct) : " << std::oct << neg_int << endl;
    
    cout << endl;
    cout << "double_var in different bases : " << endl;
    cout << "double_var (dec) : " << std::dec << double_var << endl;
    cout << "double_var (hex) : " << std::hex << double_var << endl;
    cout << "double_var (oct) : " << std::oct << double_var << endl;
    
    
    //===================================================================
    cout << endl;


    //uppercase and nouppercase

    pos_int = 717171;
    
    cout << "pos_int (nouppercase : default) : " << endl;
    cout << "pos_int (dec) : " << std::dec << pos_int << endl;
    cout << "pos_int (hex) : " << std::hex << pos_int << endl;
    cout << "pos_int (oct) : " << std::oct << pos_int << endl;
    
    cout << endl;
    cout << "pos_int (uppercase) : " << endl;
    cout << std::uppercase;
    cout << "pos_int (dec) : " << std::dec << pos_int << endl;
    cout << "pos_int (hex) : " << std::hex << pos_int << endl;
    cout << "pos_int (oct) : " << std::oct << pos_int << endl;
    
    
    //===================================================================
    std::cout << std::endl;


    //fixed and scientific : for floating point values
    
    double a{ 3.1415926535897932384626433832795 };
    double b{ 2006.0 };
    double c{ 1.34e-10 };
    
    cout << endl;
    cout << "double values (default : use scientific where necessary) : " << endl;
    cout << "a : " << a << endl;
    cout << "b : " << b << endl;
    cout << "c : " << c << endl;
    
    cout << endl;
    cout << "double values (fixed) : " << endl;
    cout << std::fixed;
    cout << "a : " << a << endl;
    cout << "b : " << b << endl;
    cout << "c : " << c << endl;
    
    cout << endl;
    cout << "double values (scientific) : " << endl;
    cout << std::scientific;
    cout << "a : " << a << endl;
    cout << "b : " << b << endl;
    cout << "c : " << c << endl;

    cout << endl;
    cout << "double values (back to defaults) : " << endl;
    cout.unsetf(std::ios::scientific | std::ios::fixed); // Hack
    cout << "a : " << a << endl;
    cout << "b : " << b << endl;
    cout << "c : " << c << endl;
    
    
    //===================================================================
    cout << endl;

    //setprecision() : the number of digits printed out for a floating point. Default is 6
    
    a = 3.1415926535897932384626433832795;
    
    cout << endl;
    cout << "a (default precision(6)) : " << a <<  endl;
    cout << std::setprecision(10);
    cout << "a (precision(10)) : " << a << endl;
    cout << std::setprecision(20);
    cout << "a (precision(20)) : " << a << endl;
    
    //If the precision is bigger than supported by the type, you'll just print garbage.
    
    //===================================================================
    cout << endl;


    //showpoint and noshowpoint : show trailing zeros if necessary
    //Force output of the decimal point
    
    double d {34.1};
    double e {101.99};
    double f {12.0};
    int    g {45};
    
    cout << endl;
    cout << "noshowpoint (default) : " << endl;
    cout << "d : " << d << endl;
    cout << "e : " << e << endl;
    cout << "f : " << f << endl; // 12
    cout << "g : " << g << endl;
    
    cout << endl;
    cout << "showpoint: " << endl;
    cout << std::showpoint;
    cout << "d : " << d << endl;
    cout << "e : " << e << endl;
    cout << "f : " << f << endl; // 12.0
    cout << "g : " << g << endl;

    return 0;
}