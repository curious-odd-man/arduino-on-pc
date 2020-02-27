
#include "JavaComm.h"
#include "Arduino.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <inttypes.h>
#include <stdint.h>

JavaComm g_JavaComm;

#define BUFFER 4096

//set outfile to FIFO name
static const char *outFile = "tojava";

JavaComm::JavaComm() {

}

void JavaComm::send(const char *data) {
	Serial.println("JavaComm::Here");
	FILE *fp_out = fopen(outFile, "w+");
	Serial.println("JavaComm::Created");

	fprintf(fp_out, "HelloJava!");
	Serial.println("JavaComm::Wrote");
	/**
	 * close output FIFO, this leaves the FIFO but closes the
	 * file pointer
	 */
	fclose(fp_out);
	Serial.println("JavaComm::Exited");
}

JavaComm::~JavaComm() {
}
