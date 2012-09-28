#include"eu0196.h"

#include"principal.h"

void eu0196 :: solucion(){
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


void eu0196 :: printsolution(){
	cout << "Euler 0196\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
