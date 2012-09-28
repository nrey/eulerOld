#include"eu0149.h"

#include"principal.h"

void eu0149 :: solucion(){
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


void eu0149 :: printsolution(){
	cout << "Euler 0149\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
