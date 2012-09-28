#include"eu0133.h"

#include"principal.h"

void eu0133 :: solucion(){
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


void eu0133 :: printsolution(){
	cout << "Euler 0133\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
