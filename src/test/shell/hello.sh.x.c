#if 0
	shc Version 3.8.9b, Generic Script Compiler
	Copyright (c) 1994-2015 Francisco Rosales <frosal@fi.upm.es>

	shc -r -f hello.sh 
#endif

static  char data [] = 
#define      chk2_z	19
#define      chk2	((&data[4]))
	"\270\214\150\074\331\300\145\242\330\365\315\157\053\246\155\025"
	"\210\045\124\002\235\022\374\244\004"
#define      pswd_z	256
#define      pswd	((&data[89]))
	"\121\054\275\364\111\211\263\262\266\323\331\333\011\276\205\034"
	"\302\110\010\265\073\172\156\307\343\252\153\347\246\153\243\370"
	"\230\141\355\341\352\240\223\240\164\155\174\175\053\001\231\355"
	"\112\242\243\205\035\021\115\000\274\271\350\143\045\214\134\275"
	"\167\075\123\267\222\361\206\232\334\365\120\163\077\112\327\132"
	"\106\100\153\364\232\367\270\122\077\045\201\306\223\122\365\012"
	"\217\111\302\041\072\110\274\026\076\014\212\176\127\142\330\235"
	"\242\104\222\075\073\112\217\173\160\021\101\003\143\067\016\363"
	"\200\320\025\273\031\321\322\127\336\134\326\065\276\256\323\141"
	"\363\145\237\056\260\056\252\040\100\353\043\243\043\061\227\244"
	"\002\254\137\033\176\061\163\134\216\111\221\114\370\144\256\353"
	"\312\115\032\172\173\305\232\274\260\276\137\324\360\367\170\362"
	"\243\327\016\041\011\201\176\227\313\017\344\303\164\222\257\076"
	"\337\312\271\133\217\123\027\077\022\167\024\003\156\214\365\022"
	"\144\004\064\155\206\262\005\121\301\351\025\066\173\304\165\133"
	"\216\056\266\035\202\316\135\224\105\161\227\264\376\215\307\142"
	"\222\373\320\030\255\325\151\157\277\176\246\073\103\033\226\321"
	"\111\115\357\313\033\114\140\141\276\370\026\274\205\335\037\027"
	"\330\357\060\206\305\231\366\204\030\234\277\133\267\125\055\000"
	"\242\034\314\276\151\054\037\047\044\066\344\252\023\003\302\353"
	"\355\111\236\327\352\062\170\136\237\364\333\313\366\165\271\101"
	"\030\134\307\065\155\024\065\052\316\035\215\363\251\351\260\226"
	"\062\117\156\035\201\347\173\041\333\127\354\322\315\245\023"
#define      tst2_z	19
#define      tst2	((&data[392]))
	"\330\146\177\356\121\273\223\163\224\064\171\140\174\321\254\150"
	"\110\315\373\032\157\357\120"
#define      msg2_z	19
#define      msg2	((&data[418]))
	"\047\260\027\041\260\046\215\140\135\362\344\320\072\351\170\324"
	"\354\315\156\013\260\132\020\140"
#define      rlax_z	1
#define      rlax	((&data[439]))
	"\172"
#define      msg1_z	42
#define      msg1	((&data[444]))
	"\004\334\122\340\307\060\134\322\025\011\225\223\130\026\237\002"
	"\031\056\146\211\061\341\065\156\220\052\217\173\047\301\225\302"
	"\061\147\002\234\375\250\033\353\154\060\356\142\163\205\064\076"
#define      opts_z	1
#define      opts	((&data[488]))
	"\054"
#define      text_z	34
#define      text	((&data[497]))
	"\241\002\126\220\122\360\115\300\315\315\111\220\176\012\371\376"
	"\255\206\174\005\040\164\131\311\363\161\141\124\311\170\324\275"
	"\236\044\235\005\225\075\043\324\215\075\030\375\330\050\136\207"
	"\154\016"
#define      date_z	1
#define      date	((&data[539]))
	"\167"
#define      shll_z	10
#define      shll	((&data[542]))
	"\212\337\010\202\367\117\261\070\321\270\147\106\321"
#define      inlo_z	3
#define      inlo	((&data[553]))
	"\040\157\261"
#define      xecc_z	15
#define      xecc	((&data[559]))
	"\245\312\362\004\166\135\365\353\120\120\245\104\315\260\060\231"
	"\102\075\065\034"
#define      lsto_z	1
#define      lsto	((&data[576]))
	"\272"
#define      tst1_z	22
#define      tst1	((&data[580]))
	"\044\337\074\350\002\343\343\071\266\127\316\027\055\332\107\325"
	"\167\212\054\101\002\373\316\370\316\221\355\341\137"
#define      chk1_z	22
#define      chk1	((&data[609]))
	"\300\026\351\247\233\375\127\357\224\313\124\176\250\126\135\263"
	"\366\171\252\321\216\335\231\302\044"/* End of data[] */;
#define      hide_z	4096
#define DEBUGEXEC	0	/* Define as 1 to debug execvp calls */
#define TRACEABLE	0	/* Define as 1 to enable ptrace the executable */

/* rtc.c */

#include <sys/stat.h>
#include <sys/types.h>

#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>

/* 'Alleged RC4' */

static unsigned char stte[256], indx, jndx, kndx;

/*
 * Reset arc4 stte. 
 */
void stte_0(void)
{
	indx = jndx = kndx = 0;
	do {
		stte[indx] = indx;
	} while (++indx);
}

/*
 * Set key. Can be used more than once. 
 */
void key(void * str, int len)
{
	unsigned char tmp, * ptr = (unsigned char *)str;
	while (len > 0) {
		do {
			tmp = stte[indx];
			kndx += tmp;
			kndx += ptr[(int)indx % len];
			stte[indx] = stte[kndx];
			stte[kndx] = tmp;
		} while (++indx);
		ptr += 256;
		len -= 256;
	}
}

/*
 * Crypt data. 
 */
void arc4(void * str, int len)
{
	unsigned char tmp, * ptr = (unsigned char *)str;
	while (len > 0) {
		indx++;
		tmp = stte[indx];
		jndx += tmp;
		stte[indx] = stte[jndx];
		stte[jndx] = tmp;
		tmp += stte[indx];
		*ptr ^= stte[tmp];
		ptr++;
		len--;
	}
}

/* End of ARC4 */

/*
 * Key with file invariants. 
 */
int key_with_file(char * file)
{
	struct stat statf[1];
	struct stat control[1];

	if (stat(file, statf) < 0)
		return -1;

	/* Turn on stable fields */
	memset(control, 0, sizeof(control));
	control->st_ino = statf->st_ino;
	control->st_dev = statf->st_dev;
	control->st_rdev = statf->st_rdev;
	control->st_uid = statf->st_uid;
	control->st_gid = statf->st_gid;
	control->st_size = statf->st_size;
	control->st_mtime = statf->st_mtime;
	control->st_ctime = statf->st_ctime;
	key(control, sizeof(control));
	return 0;
}

#if DEBUGEXEC
void debugexec(char * sh11, int argc, char ** argv)
{
	int i;
	fprintf(stderr, "shll=%s\n", sh11 ? sh11 : "<null>");
	fprintf(stderr, "argc=%d\n", argc);
	if (!argv) {
		fprintf(stderr, "argv=<null>\n");
	} else { 
		for (i = 0; i <= argc ; i++)
			fprintf(stderr, "argv[%d]=%.60s\n", i, argv[i] ? argv[i] : "<null>");
	}
}
#endif /* DEBUGEXEC */

void rmarg(char ** argv, char * arg)
{
	for (; argv && *argv && *argv != arg; argv++);
	for (; argv && *argv; argv++)
		*argv = argv[1];
}

int chkenv(int argc)
{
	char buff[512];
	unsigned long mask, m;
	int l, a, c;
	char * string;
	extern char ** environ;

	mask  = (unsigned long)&chkenv;
	mask ^= (unsigned long)getpid() * ~mask;
	sprintf(buff, "x%lx", mask);
	string = getenv(buff);
#if DEBUGEXEC
	fprintf(stderr, "getenv(%s)=%s\n", buff, string ? string : "<null>");
#endif
	l = strlen(buff);
	if (!string) {
		/* 1st */
		sprintf(&buff[l], "=%lu %d", mask, argc);
		putenv(strdup(buff));
		return 0;
	}
	c = sscanf(string, "%lu %d%c", &m, &a, buff);
	if (c == 2 && m == mask) {
		/* 3rd */
		rmarg(environ, &string[-l - 1]);
		return 1 + (argc - a);
	}
	return -1;
}

#if !defined(TRACEABLE)

#define _LINUX_SOURCE_COMPAT
#include <sys/ptrace.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <signal.h>
#include <stdio.h>
#include <unistd.h>

#if !defined(PTRACE_ATTACH) && defined(PT_ATTACH)
#	define PTRACE_ATTACH	PT_ATTACH
#endif
void untraceable(char * argv0)
{
	char proc[80];
	int pid, mine;

	switch(pid = fork()) {
	case  0:
		pid = getppid();
		/* For problematic SunOS ptrace */
#if defined(__FreeBSD__)
		sprintf(proc, "/proc/%d/mem", (int)pid);
#else
		sprintf(proc, "/proc/%d/as",  (int)pid);
#endif
		close(0);
		mine = !open(proc, O_RDWR|O_EXCL);
		if (!mine && errno != EBUSY)
			mine = !ptrace(PTRACE_ATTACH, pid, 0, 0);
		if (mine) {
			kill(pid, SIGCONT);
		} else {
			perror(argv0);
			kill(pid, SIGKILL);
		}
		_exit(mine);
	case -1:
		break;
	default:
		if (pid == waitpid(pid, 0, 0))
			return;
	}
	perror(argv0);
	_exit(1);
}
#endif /* !defined(TRACEABLE) */

char * xsh(int argc, char ** argv)
{
	char * scrpt;
	int ret, i, j;
	char ** varg;
	char * me = argv[0];

	stte_0();
	 key(pswd, pswd_z);
	arc4(msg1, msg1_z);
	arc4(date, date_z);
	if (date[0] && (atoll(date)<time(NULL)))
		return msg1;
	arc4(shll, shll_z);
	arc4(inlo, inlo_z);
	arc4(xecc, xecc_z);
	arc4(lsto, lsto_z);
	arc4(tst1, tst1_z);
	 key(tst1, tst1_z);
	arc4(chk1, chk1_z);
	if ((chk1_z != tst1_z) || memcmp(tst1, chk1, tst1_z))
		return tst1;
	ret = chkenv(argc);
	arc4(msg2, msg2_z);
	if (ret < 0)
		return msg2;
	varg = (char **)calloc(argc + 10, sizeof(char *));
	if (!varg)
		return 0;
	if (ret) {
		arc4(rlax, rlax_z);
		if (!rlax[0] && key_with_file(shll))
			return shll;
		arc4(opts, opts_z);
		arc4(text, text_z);
		arc4(tst2, tst2_z);
		 key(tst2, tst2_z);
		arc4(chk2, chk2_z);
		if ((chk2_z != tst2_z) || memcmp(tst2, chk2, tst2_z))
			return tst2;
		/* Prepend hide_z spaces to script text to hide it. */
		scrpt = malloc(hide_z + text_z);
		if (!scrpt)
			return 0;
		memset(scrpt, (int) ' ', hide_z);
		memcpy(&scrpt[hide_z], text, text_z);
	} else {			/* Reexecute */
		if (*xecc) {
			scrpt = malloc(512);
			if (!scrpt)
				return 0;
			sprintf(scrpt, xecc, me);
		} else {
			scrpt = me;
		}
	}
	j = 0;
	varg[j++] = argv[0];		/* My own name at execution */
	if (ret && *opts)
		varg[j++] = opts;	/* Options on 1st line of code */
	if (*inlo)
		varg[j++] = inlo;	/* Option introducing inline code */
	varg[j++] = scrpt;		/* The script itself */
	if (*lsto)
		varg[j++] = lsto;	/* Option meaning last option */
	i = (ret > 1) ? ret : 0;	/* Args numbering correction */
	while (i < argc)
		varg[j++] = argv[i++];	/* Main run-time arguments */
	varg[j] = 0;			/* NULL terminated array */
#if DEBUGEXEC
	debugexec(shll, j, varg);
#endif
	execvp(shll, varg);
	return shll;
}

int main(int argc, char ** argv)
{
#if DEBUGEXEC
	debugexec("main", argc, argv);
#endif
#if !defined(TRACEABLE)
	untraceable(argv[0]);
#endif
	argv[1] = xsh(argc, argv);
	fprintf(stderr, "%s%s%s: %s\n", argv[0],
		errno ? ": " : "",
		errno ? strerror(errno) : "",
		argv[1] ? argv[1] : "<null>"
	);
	return 1;
}
