#include	"ntrxdil.h"
#include	"hwclock.h"
#include	"ntrxutil.h"
#include	"nnspi.h"
#include 	"lpc2114config.h"
#include	"sub.h"

extern Sub sub;
appMemT appM;
appMemT *app;
const MyAddrT broadcast = {0xFF,0xFF,0xFF,0xFF,0xFF,0xFF};
MyAddrT cardmac = {0xB2,0x00,0x00,0x00,0x00,0x00};
/*******************************************************************/
/**
 * @brief Initialize the application.
 *
 * Initialize the application.
*/
void	InitApplication(void)
{
	app = &appM;


/****************** TAG CODE ******************/
	app->src[0] = 0xA2;
	app->src[1] = 0x00;
	app->src[2] = 0x00;
	app->src[3] = 0x00;
	app->src[4] = sub.father_id;
	app->src[5] = sub.id;
	/* write the source address to the TRX chip */
	NTRXSetStaAddress (app->src);

	app->dest[0] = 0xB2;
	app->dest[1] = 0x00;
	app->dest[2] = 0x00;
	app->dest[3] = 0x00;
	app->dest[4] = 0x00;
	app->dest[5] = 0x00;
}