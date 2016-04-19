#include <stdio.h>
#include <stdlib.h>

#include "https.h"

#define MAX_BUFFER_SIZE	81920

int main()
{
	char *resp = malloc(sizeof(char) * MAX_BUFFER_SIZE);

	https_send_get("www.kernel.org", 443, "index.html", resp, MAX_BUFFER_SIZE);

	printf("%s\n", resp);

	free(resp);

	return 0;
}
