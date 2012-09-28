#include"eu0375.h"

#include"principal.h"

void eu0375 :: solucion(){
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


void eu0375 :: printsolution(){
	cout << "Euler 0375\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
