#include"eu0336.h"

#include"principal.h"

void eu0336 :: solucion(){
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


void eu0336 :: printsolution(){
	cout << "Euler 0336\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
