#include"eu0142.h"

#include"principal.h"

void eu0142 :: solucion(){
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


void eu0142 :: printsolution(){
	cout << "Euler 0142\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
