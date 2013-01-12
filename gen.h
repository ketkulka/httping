/* The GPL applies to this program.
  In addition, as a special exception, the copyright holders give
  permission to link the code of portions of this program with the
  OpenSSL library under certain conditions as described in each
  individual source file, and distribute linked combinations
  including the two.
  You must obey the GNU General Public License in all respects
  for all of the code used other than OpenSSL.  If you modify
  file(s) with this exception, you may extend this exception to your
  version of the file(s), but you are not obligated to do so.  If you
  do not wish to do so, delete this exception statement from your
  version.  If you delete this exception statement from all source
  files in the program, then also delete it here.
*/

#define RC_OK		0
#define RC_SHORTREAD	-1
#define RC_TIMEOUT	-2
#define RC_CTRLC	-3

#ifdef NO_SSL
	#define SSL	void
	#define SSL_CTX	void
	#define BIO	void
#endif

#define ERROR_BUFFER_SIZE	4096

#ifdef TCP_TFO
	#ifndef MSG_FASTOPEN
		#define MSG_FASTOPEN	0x20000000
	#endif

	#ifndef TCP_FASTOPEN
		#define TCP_FASTOPEN	23
	#endif
	#ifndef TCPI_OPT_SYN_DATA
		#define TCPI_OPT_SYN_DATA	32
	#endif
#endif
