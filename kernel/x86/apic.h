#ifndef KERNEL_X86_APIC_H
#define KERNEL_X86_APIC_H

#include <stdint.h>

int have_apic(void);
void enable_apic(void);
uint32_t get_apic_id(void);

#endif