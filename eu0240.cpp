#include"eu0240.h"

#include"principal.h"

void eu0240 :: solucion(){
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


void eu0240 :: printsolution(){
	cout << "Euler 0240\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
