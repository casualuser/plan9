/* 
 * This file is part of the UCB release of Plan 9. It is subject to the license
 * terms in the LICENSE file found in the top-level directory of this
 * distribution and at http://akaros.cs.berkeley.edu/files/Plan9License. No
 * part of the UCB release of Plan 9, including this file, may be copied,
 * modified, propagated, or distributed except according to the terms contained
 * in the LICENSE file.
 */

struct Ureg
{
	ulong	r0;			/* unnecessary; just for symmetry */
	union{
		ulong	sp;		/* r1 */
		ulong	usp;		/* r1 */
		ulong	r1;
	};
	ulong	r2;
	ulong	r3;
	ulong	r4;
	ulong	r5;
	ulong	r6;
	ulong	r7;
	ulong	r8;
	ulong	r9;
	ulong	r10;
	ulong	r11;
	ulong	r12;
	ulong	r13;
	ulong	r14;
	ulong	r15;
	ulong	r16;
	ulong	r17;
	ulong	r18;
	ulong	r19;
	ulong	r20;
	ulong	r21;
	ulong	r22;
	ulong	r23;
	ulong	r24;
	ulong	r25;
	ulong	r26;
	ulong	r27;
	ulong	r28;
	ulong	r29;
	ulong	r30;
	ulong	r31;
	ulong	y;
	ulong	tbr;
	ulong	psr;
	ulong	npc;
	ulong	pc;
	ulong	pad;	/* so structure is double word aligned */
};
