#include"eu0279.h"

#include"principal.h"

void eu0279 :: solucion(){
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


void eu0279 :: printsolution(){
	cout << "Euler 0279\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
