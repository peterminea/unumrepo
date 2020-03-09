#include <stdio.h>

int main() {
system("rm /var/log/cups/error.log");
system("shutdown -P now");

return 0;
}
