#include<iostream>
#include<fstream>   // ifstream/ofstream
#include<string>    // getline

using namespace std;

int main()
{
  ifstream fin;       // input file stream
  ofstream fout;      // output stream
  string instr;

  // Open the streams
  fin.open("input.txt");
  fout.open("output.txt");

  cout << "Testing streams" << endl;
  fin >> instr;
  cout << "  First read (fin): " << instr << endl;

  getline(fin, instr);
  cout << "  Next read (getline): "<< instr << endl;

  // Read rest of file
  while(getline(fin, instr)) {
      if (instr.find("Scheme", 0) != string::npos) {
          cout << "  Example search: " << instr << endl;
      }
  }

  cout << "Done.  Writing output to file" << endl;

  fout << "Example writing to file" << endl;

  // Close the streams
  fin.close();
  fout.close();

  return 0;
}

