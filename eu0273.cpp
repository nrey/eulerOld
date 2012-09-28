#include"eu0273.h"

#include"principal.h"

void eu0273 :: solucion(){
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


void eu0273 :: printsolution(){
	cout << "Euler 0273\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
