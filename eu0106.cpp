#include"eu0106.h"

#include"principal.h"

void eu0106 :: solucion(){
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


void eu0106 :: printsolution(){
	cout << "Euler 0106\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
