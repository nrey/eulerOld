#include"eu0329.h"

#include"principal.h"

void eu0329 :: solucion(){
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


void eu0329 :: printsolution(){
	cout << "Euler 0329\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
