#include"eu0319.h"

#include"principal.h"

void eu0319 :: solucion(){
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


void eu0319 :: printsolution(){
	cout << "Euler 0319\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
