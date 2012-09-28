#include"eu0163.h"

#include"principal.h"

void eu0163 :: solucion(){
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


void eu0163 :: printsolution(){
	cout << "Euler 0163\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
