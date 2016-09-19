#include <lib.h>
#include <unistd.h>

PUBLIC int quantum_left(void)
{
	message m;
	return(_syscall(PM_PROC_NR,69,&m));
}