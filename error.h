#ifndef ERROR_H
#define ERROR_H
#include <stdio.h>
#include <stdlib.h>
//defining error threw Macros to use them in codes
#define OK 0
#define ERROR_WSA 1
#define ERROR_SOCKET_CREATION 2
#define ERROR_BINDING 3
#define ERROR_SOCKET_LISTENING 4
#define ERROR_SERVER_ACCEPT 5
#define ERROR_GETTING_INPUT 6
#define ERROR_RECEIVING_DATA 7  
#define ERROR_SENDING_DATA 8
#define ERROR_GENERATING_RANDOM 9
#define ERROR_CLIENT_CONNECTION 10

/*
This function purpose is to print errors in main code`s
You can choose where to print error stderr or stdout by switching 
macro OUT.
*/
void exit_with_error(int error, char * err_string);
#endif