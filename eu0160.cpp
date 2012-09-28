#include"eu0160.h"

#include"principal.h"

void eu0160 :: solucion(){
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


void eu0160 :: printsolution(){
	cout << "Euler 0160\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
