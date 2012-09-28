#include"eu_write_table.h"

#include"principal.h"

void eu_write_table :: solucion(){
	// ---------------------------------------------------- //
	tstart = (double)clock()/CLOCKS_PER_SEC;
	// ---------------------------------------------------- //
	
	output = 0;
	
	// ---------------------------------------------------- //
	
	temp_1 = 100000000;
	write_primefile(temp_1);
	
	// ---------------------------------------------------- //
	tstop = (double)clock()/CLOCKS_PER_SEC;
	ttime= tstop-tstart;
	// ---------------------------------------------------- //
}


void eu_write_table :: printsolution(){
	cout << "\nEuler 0025\n";
	cout << "Time: " << ttime << "\n";
// 	cout << output;
}