#include"eu0294.h"

#include"principal.h"

void eu0294 :: solucion(){
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


void eu0294 :: printsolution(){
	cout << "Euler 0294\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
