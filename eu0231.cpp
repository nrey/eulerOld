#include"eu0231.h"

#include"principal.h"

void eu0231 :: solucion(){
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


void eu0231 :: printsolution(){
	cout << "Euler 0231\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
