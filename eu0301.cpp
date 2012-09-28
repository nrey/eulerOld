#include"eu0301.h"

#include"principal.h"

void eu0301 :: solucion(){
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


void eu0301 :: printsolution(){
	cout << "Euler 0301\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
