#include <iostream>
#include <cstdlib>
#include <math.h>
#include <fstream>

	using namespace std;

	int main()
	{
		char tab[] = {1,32,10,17,4};
		ofstream o( "bin.tmp", ios::binary );
		o.write( tab, 5 );
		o.close();

	}
