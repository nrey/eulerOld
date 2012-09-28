#include"eu0298.h"

#include"principal.h"

void eu0298 :: solucion(){
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


void eu0298 :: printsolution(){
	cout << "Euler 0298\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
