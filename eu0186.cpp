#include"eu0186.h"

#include"principal.h"

void eu0186 :: solucion(){
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


void eu0186 :: printsolution(){
	cout << "Euler 0186\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
