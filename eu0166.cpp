#include"eu0166.h"

#include"principal.h"

void eu0166 :: solucion(){
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


void eu0166 :: printsolution(){
	cout << "Euler 0166\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
