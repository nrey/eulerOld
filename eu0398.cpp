#include"eu0398.h"

#include"principal.h"

void eu0398 :: solucion(){
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


void eu0398 :: printsolution(){
	cout << "Euler 0398\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
