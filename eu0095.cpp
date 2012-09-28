#include"eu0095.h"

#include"principal.h"

void eu0095 :: solucion(){
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


void eu0095 :: printsolution(){
	cout << "Euler 0095\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
