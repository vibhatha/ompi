/*
 * $HEADER$
 */

/*
 * THIS FILE IS SPECIAL: IT HAS NOT MULTIPLE-INCLUDE PROTECTION!
 *
 * It is designed to be included twice: once by mpi/f77/prototypes.h
 * to get all the "native" prototypes, then again by
 * mpi/f77/profile/prototypes after a bunch of #define's have been
 * applied to map mpi->pmpi and MPI->PMPI.
 *
 * This is necessary to get the profiling prototypes.  This is even
 * necessary when using weak symbols because some compilers will not
 * generate a weak symbol unless the "real" function is at least
 * prototyped.
 */

/*
 * This file prototypes all MPI fortran functions in all four fortran
 * symbol conventions as well as all the internal "real" LAM wrapper
 * functions (different from any of the four fortran symbol
 * conventions for clarity, at the cost of more typing for me...).
 */

/*
 * Zeroth, the LAM wrapper functions, with a "_f" suffix.
 */
void mpi_alloc_mem_f(int *size, int *info, char *baseptr, int *ierr);
void mpi_comm_get_name_f(int *comm, char *name, int *l, int *ierror, 
                         int charlen);
void mpi_comm_set_name_f(int *comm, char *name, int *ierror, int charlen);
void mpi_init_f(int *ierror);
void mpi_finalize_f(int *ierror);
void mpi_free_mem_f(char *baseptr, int *ierr);

/*
 * First, all caps.
 */
void MPI_ALLOC_MEM(int *size, int *info, char *baseptr, int *ierr);
void MPI_COMM_GET_NAME(int *comm, char *name, int *l, int *ierror, 
                       int charlen);
void MPI_COMM_SET_NAME(int *comm, char *name, int *ierror, int charlen);
void MPI_INIT(void *ierror);
void MPI_FINALIZE(int *ierror);
void MPI_FREE_MEM(char *baseptr, int *ierr);

/*
 * Second, all lower case.
 */
void mpi_alloc_mem(int *size, int *info, char *baseptr, int *ierr);
void mpi_comm_get_name(int *comm, char *name, int *l, int *ierror, 
                       int charlen);
void mpi_comm_set_name(int *comm, char *name, int *ierror, int charlen);
void mpi_init(int *ierror);
void mpi_finalize(int *ierror);
void mpi_free_mem(char *baseptr, int *ierr);

/*
 * Third, one trailing underscore.
 */
void mpi_alloc_mem_(int *size, int *info, char *baseptr, int *ierr);
void mpi_comm_get_name_(int *comm, char *name, int *l, int *ierror, 
                        int charlen);
void mpi_comm_set_name_(int *comm, char *name, int *ierror, int charlen);
void mpi_init_(int *ierror);
void mpi_finalize_(int *ierror);
void mpi_free_mem_(char *baseptr, int *ierr);

/*
 * Fourth, two trailing underscores.
 */
void mpi_alloc_mem__(int *size, int *info, char *baseptr, int *ierr);
void mpi_comm_get_name__(int *comm, char *name, int *l, int *ierror, 
                         int charlen);
void mpi_comm_set_name__(int *comm, char *name, int *ierror, int charlen);
void mpi_init__(int *ierror);
void mpi_finalize__(int *ierror);
void mpi_free_mem__(char *baseptr, int *ierr);
