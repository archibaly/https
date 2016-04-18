#include <stdio.h>
#include <stdlib.h>

#include "https.h"

#define MAX_BUFFER_SIZE	(1024 * 1024)	/* 1MB */

int main()
{
	char *resp = malloc(MAX_BUFFER_SIZE);

	int n = https_send_request(GET, "www.kernel.org", 443, "index.html", resp, MAX_BUFFER_SIZE);
	resp[n] = 0;

	printf("%s\n", resp);

	n = http_send_request(GET, "www.baidu.com", 80, "index.html", resp, MAX_BUFFER_SIZE);
	resp[n] = 0;

	printf("%s\n", resp);

	free(resp);

	return 0;
}
