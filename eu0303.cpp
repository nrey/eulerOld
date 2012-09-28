#include"eu0303.h"

#include"principal.h"

void eu0303 :: solucion(){
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


void eu0303 :: printsolution(){
	cout << "Euler 0303\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
