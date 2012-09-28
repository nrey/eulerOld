#include"eu0192.h"

#include"principal.h"

void eu0192 :: solucion(){
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


void eu0192 :: printsolution(){
	cout << "Euler 0192\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
