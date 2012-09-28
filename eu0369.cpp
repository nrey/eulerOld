#include"eu0369.h"

#include"principal.h"

void eu0369 :: solucion(){
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


void eu0369 :: printsolution(){
	cout << "Euler 0369\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
