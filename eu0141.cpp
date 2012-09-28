#include"eu0141.h"

#include"principal.h"

void eu0141 :: solucion(){
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


void eu0141 :: printsolution(){
	cout << "Euler 0141\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
