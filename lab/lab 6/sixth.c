#include<stdio.h>
int global = 10; 

void func() {
static int static_var = 5;
int local = 5;
printf("Global: %d\n", global);             
printf("Static: %d\n", static_var);        
printf("Local: %d\n", local);               
static_var++;
local++;
}
int main() {
func();
func();
func();
return 0;
}