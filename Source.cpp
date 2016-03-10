#include <iostream>
#include <list>
#include <map>
#include <fstream>
#include <string>
#include <algorithm>
using namespace std;

void main()
{
	// code to read from file, you'll need it in the experiment report
	// redirecting standard input (cin) to read from external file
	// instead of reading from the console window
	// replace "yourfilepathgoeshere.txt" with a complete path to the names file
	// if the file in C:\h.txt
	// you should write it as "C:\\h.txt" --> note the double \, a scape character followed by the actual letter
	ifstream in("Q6ReportInput.txt");
	//cin.rdbuf(in.rdbuf());
	string line;
	ofstream out;
    out.open ("output.txt");
	map< string, int > dB;  // empty map
    if (in.is_open())
    {
		while ( getline (in,line) )
		{
		// cout << line << '\n';
			if( dB.empty() )
			{
				dB[line]= 0;
				out << line<<endl;
			}
		else
		{
			if ( dB.find(line) == dB.end() ) {
			// not found
				dB[line]=0;
				out << line <<endl;
			}
			else 
			{
			// found
				dB[line]+=1;
				out<< line<<dB[line]<<endl;
			}

		}
    }
    in.close();
  }

  else cout << "Unable to open file"; 



	// now cin won't read from the console window
	// instead it'll read directly from the file names


	// Your gode goes here

	// End
  system("pause");
}