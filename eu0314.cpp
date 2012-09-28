#include"eu0314.h"

#include"principal.h"

void eu0314 :: solucion(){
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


void eu0314 :: printsolution(){
	cout << "Euler 0314\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
