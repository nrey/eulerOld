#include"eu0380.h"

#include"principal.h"

void eu0380 :: solucion(){
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


void eu0380 :: printsolution(){
	cout << "Euler 0380\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
