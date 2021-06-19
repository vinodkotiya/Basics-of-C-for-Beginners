//balagurusamy example
//read() & write() handle the data in binary form

#include<iostream.h>
#include<fstream.h>
#include<iomanip.h>

const char * filenm = "c:\\cdata\\binary.vin";

int main()
{
 float ht[4] = {175.4,156.3,123.8,212.4} ;

 ofstream Write;
 Write.open(filenm);
 Write.write((char *) & ht, sizeof(ht));
 Write.close();
 for(int i = 0;i<4;i++)
  ht[i] = 0;               //clear arry from memory

  ifstream Read;
  Read.open(filenm);

  Read.read((char* )& ht,sizeof(ht));
  for(i=0;i<4;i++)
  {
   cout.setf(ios::showpoint);
   cout<<setw(10)<<setprecision(2)<<ht[i];
  }
  Read.close();
  return 0;
}