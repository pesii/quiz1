/* QUIZ 1 */

/* ### Problem 1 ### */
char *my_strcpy(char *destination, const char *source)
{
	int i = 0;
	for(i; *(source+i) != '\0'; i++) {
		destination[i] = *(source+i);
	}
	destination[i] = '\0';

	return destination;
}

/* ### Problem 2 ### */
char *my_strncat(char *destination, const char *source, int n) 
{
	int len_dest = 0, i = 0;
	while(destination[i] != '\0'){
		i++;
	}
	len_dest = i;
	
	for(i=0; (*(source+i) != '\0') && i<n; i++, len_dest++) {
		destination[len_dest] = *(source+i);
	}
	destination[len_dest] = '\0';
	
	return destination;
}

/* ### Problem 3 ### */
/* 
 * Returns -1 if s1 comes before s2 (alphabetically), 0 if s1 = s2
 * and returns 1 otherwise
 */
int my_strcmp(const char *s1, const char *s2) 
{
	int i = 0, return_val = 0;
	
	for(i; (*(s1+i) && *(s2+i)); i++) {
		if(*(s1+i) == *(s2+i)) {
			return_val = 0;
		} else if (*(s1+i) < *(s2+i)) {
			return -1;
		} else if (*(s1+i) > *(s2+i)){
			return 1;
		}
	}
	
	return return_val;
	
}
