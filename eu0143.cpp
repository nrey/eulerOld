#include"eu0143.h"

#include"principal.h"

void eu0143 :: solucion(){
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


void eu0143 :: printsolution(){
	cout << "Euler 0143\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
