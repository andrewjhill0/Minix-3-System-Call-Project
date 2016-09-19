#include "kernel/system.h"
#include <minix/endpoint.h>
#include <proc.h>
#include <glo.h>

/*===========================================================================*
 *                                do_sample                                  *
 *===========================================================================*/
int do_sample(struct proc *caller_ptr, message *m_ptr)
{
	struct proc *process;
	int i;
	
	if(!isokendpt(m_ptr->PR_ENDPT, &i))
	{
		return EINVAL;
	}
	process = proc_addr(i);

	u64_t time_rem = process->p_cpu_time_left;
	int ticksleft = 5;
	ticksleft = (int)time_rem;
	//printf( "Kernal Call!! \n");
        return(ticksleft);
}