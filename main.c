#include <stdio.h>
#include <stdlib.h>

#include "https.h"

#define MAX_BUFFER_SIZE	81920

int main()
{
	char *resp = malloc(sizeof(char) * MAX_BUFFER_SIZE);

	https_send_request(GET, "www.kernel.org", 443, "index.html", resp, MAX_BUFFER_SIZE);

	printf("%s\n", resp);

	http_send_request(GET, "www.baidu.com", 80, "index.html", resp, MAX_BUFFER_SIZE);

	printf("%s\n", resp);

	free(resp);

	return 0;
}
