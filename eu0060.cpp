#include"eu0060.h"

#include"principal.h"

void eu0060 :: solucion(){
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


void eu0060 :: printsolution(){
	cout << "Euler 0060\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
