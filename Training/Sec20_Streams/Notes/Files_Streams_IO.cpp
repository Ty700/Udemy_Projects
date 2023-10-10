/*
*
*   C++ uses streams as an interface between the program and the input and output devices
*  
*   Program can code to the stream and not worry about the device plugged into it
*
*   Stream is independent of the actual device
*         - is a sequence of bytes
*         - Input stream provides data to the program
*         - Output stream receives data from the program to then output to the right device
*  
*   Typical CPP Header files for working wiht streams
*       - iostream - provides definitions for formatted input and output from/to streams
*       - fstream - provides definitions for formatted input and output from/to file streams
*       - iomanip - provides definitions for manipulators used to format stream I/O
*
*   Typical Stream classes within one of the three header files
*       - ios - provides basic support for formatted and unformatted I/O operations.
*       - ifstream - provides for high-level input operations on FILE BASED streams
*       - ofstream - provides for high-level output operations on FILE BASED streams
*       - fstream - Provides for high-level operations on FILE BASED systems
*                 - Derived from ofstream and ifstream
*       - stringstream - provides for high-level I/O operations on MEMORY based strings
*                      - derived from istringstream and ostringstream
*
*
*   Global stream objects
*       - using them this entire time wihtout worrying what they are is an example of why streams are good
*         for abstraction...
*
*       cin - standard input stream - by default 'connected' to the standard input device (keyboard)
*           - is an instance of istream
*       cout - standard output stream - by default 'connected' to the standard output device (console)
*            - instance of ostream
*       cerr - Standard error system - by default 'connected' to the standard output device (console)
*            - Instance of ostream (unbuffered)
*       clog - Standard log stream - by default 'connected' to the standard log device (console)
*            - instance of ostream(unbuffered)
*       
*       Best Practice:
*           - Use cerr for error messages (try blocks for example)
*           - Use clog for log messages
*/

