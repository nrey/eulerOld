#include"eu0320.h"

#include"principal.h"

void eu0320 :: solucion(){
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


void eu0320 :: printsolution(){
	cout << "Euler 0320\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
