#include"eu0266.h"

#include"principal.h"

void eu0266 :: solucion(){
	// ---------------------------------------------------- //
	tstart = (double)clock()/CLOCKS_PER_SEC;
	// ---------------------------------------------------- //
	
	output = 0;
	
	// ---------------------------------------------------- //
	
	
	
	// ---------------------------------------------------- //
	tstop = (double)clock()/CLOCKS_PER_SEC;
	ttime= tstop-tstart;
	// ---------------------------------------------------- //
}


void eu0266 :: printsolution(){
	cout << "Euler 0266\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
