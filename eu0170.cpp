#include"eu0170.h"

#include"principal.h"

void eu0170 :: solucion(){
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


void eu0170 :: printsolution(){
	cout << "Euler 0170\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
