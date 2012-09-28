#include"eu0234.h"

#include"principal.h"

void eu0234 :: solucion(){
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


void eu0234 :: printsolution(){
	cout << "Euler 0234\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
