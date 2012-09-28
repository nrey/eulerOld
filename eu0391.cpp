#include"eu0391.h"

#include"principal.h"

void eu0391 :: solucion(){
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


void eu0391 :: printsolution(){
	cout << "Euler 0391\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
