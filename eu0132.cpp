#include"eu0132.h"

#include"principal.h"

void eu0132 :: solucion(){
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


void eu0132 :: printsolution(){
	cout << "Euler 0132\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
