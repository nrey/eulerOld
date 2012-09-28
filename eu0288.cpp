#include"eu0288.h"

#include"principal.h"

void eu0288 :: solucion(){
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


void eu0288 :: printsolution(){
	cout << "Euler 0288\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
