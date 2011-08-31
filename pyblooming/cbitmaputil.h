/**
 * Header file for cbitmap.h
 */
#ifndef CBITMAP_H
#define CBITMAP_H

/**
 * Helper to grow an open file to a certain size
 * @arg filedes THe file descriptor to grow.
 * @arg len The size to grow it to.
 * @returns -1 on error, 0 on success;
 */
int grow_file(int filedes, int len);

/**
 * Helper to memory map open file descriptors.
 * @arg filedes The file descriptor to mmap in. -1 for anonymous.
 * @arg len The length of bytes to map in
 * @returns 0 on error, or the address of the memory map
 */
char* mmap_file(int filedes, int len);

/**
 * Helper to unmap memory mapped files.
 * @args addr The address to unmap
 * @args len The number of bytes to unmap
 * @returns -1 on error, else 0.
 */
int mummap_file(char* addr, int len);

/**
 * Helper to flush memory mapped files 
 * @arg filedes The file descriptor under the mmap file, -1 for anonymous
 * @arg addr The address of the memory mapped region
 * @arg len The length of bytes of the mmap region
 * @returns -1 on error, 0 on success
 */
int flush(int filedes, char* addr, int len);

#endif