#include"eu0165.h"

#include"principal.h"

void eu0165 :: solucion(){
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


void eu0165 :: printsolution(){
	cout << "Euler 0165\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
