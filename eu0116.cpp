#include"eu0116.h"

#include"principal.h"

void eu0116 :: solucion(){
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


void eu0116 :: printsolution(){
	cout << "Euler 0116\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
