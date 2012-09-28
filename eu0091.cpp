#include"eu0091.h"

#include"principal.h"

void eu0091 :: solucion(){
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


void eu0091 :: printsolution(){
	cout << "Euler 0091\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
