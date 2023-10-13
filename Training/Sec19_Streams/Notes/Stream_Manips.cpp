/*
*
*   Stream Manipulator
*       - Streams have useful member functions to control formatting
*       - Can be used on input and output streams
*       - The time of the effect on the stream varies
*       - Can be used as member functions or as a manipulator
*
*   Example:
*       std::cout.width(10); //Member function
*       std::cout << std::setw(10); //Manipulator - overloading - must include iomanip
*
*   Common Stream Mnipulators
*       Boolean:
*           - boolalpha - outputs true as "True" and false as "False"
*           - noboolalpha - outputs true as "1" and false as "0"
*       Integer
*           - dec - decimal form
*           - hex - hex form
*           - oct - oct form
*           - showbase - output base as well
*           - noshowbase - don't ouput base
*           - others
*       Floating Point
*           - fixed - rounding to a certain decimal
*           - scientific - output fp number as scientific
*           - others
*       Field Width, Justification, and fill
*           - setw - sets width of output
*           - left/right - sets text left or right justified
*           - internal
*           - setfill - fills the entire stream with a character besides what you have in the stream
*/