/*
* File: 103-python.c
* Auth: Amos Mwongela Gabriel
*/
#include <Python.h>
void print_python_list(PyObject *p);
void print_python_bytes(PyObject *p);
/**
* print_python_list - Prints basic info about Python lists.
* @p: A PyObject list object.
*/
void print_python_list(PyObject *p)
{
        unsigned char i, size;
        PyBytesObject *bytes = (PyBytesObject *)p;
	printf("[.] bytes object info\n");
	if (strcmp(p->ob_type->tp_name, "bytes") != 0)
	{
        	printf("  [ERROR] Invalid Bytes Object\n");
        	return;
	}
	printf("  size: %ld\n", ((PyVarObject *)p)->ob_size);
	printf("  trying string: %s\n", bytes->ob_sval);
	if (((PyVarObject *)p)->ob_size > 10)
        	size = 10;
	else
        	size = ((PyVarObject *)p)->ob_size + 1;
	printf("  first %d bytes: ", size);
	for (i = 0; i < size; i++)
	{
		printf("%02hhx", bytes->ob_sval[i]);
		if (i == (size - 1))
	         	printf("\n");
          	else
		        printf(" ");
	}
}
