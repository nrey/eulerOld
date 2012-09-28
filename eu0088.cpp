#include"eu0088.h"

#include"principal.h"

void eu0088 :: solucion(){
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


void eu0088 :: printsolution(){
	cout << "Euler 0088\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
