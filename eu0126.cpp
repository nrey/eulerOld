#include"eu0126.h"

#include"principal.h"

void eu0126 :: solucion(){
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


void eu0126 :: printsolution(){
	cout << "Euler 0126\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
