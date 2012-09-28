#include"eu0368.h"

#include"principal.h"

void eu0368 :: solucion(){
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


void eu0368 :: printsolution(){
	cout << "Euler 0368\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
