#include"eu0392.h"

#include"principal.h"

void eu0392 :: solucion(){
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


void eu0392 :: printsolution(){
	cout << "Euler 0392\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
