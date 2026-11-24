#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002171F0
// Address: 0x2171f0 - 0x217404
void sub_002171F0_0x2171f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002171F0_0x2171f0");
#endif

    switch (ctx->pc) {
        case 0x21724cu: goto label_21724c;
        default: break;
    }

    ctx->pc = 0x2171f0u;

    // 0x2171f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2171f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2171f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2171f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2171f8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2171f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2171fc: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2171fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x217200: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x217200u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x217204: 0x3c140067  lui         $s4, 0x67
    ctx->pc = 0x217204u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)103 << 16));
    // 0x217208: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x217208u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x21720c: 0x8e948c70  lw          $s4, -0x7390($s4)
    ctx->pc = 0x21720cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294937712)));
    // 0x217210: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x217210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x217214: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x217214u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217218: 0x142840  sll         $a1, $s4, 1
    ctx->pc = 0x217218u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
    // 0x21721c: 0x3c06055d  lui         $a2, 0x55D
    ctx->pc = 0x21721cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1373 << 16));
    // 0x217220: 0x34c64a80  ori         $a2, $a2, 0x4A80
    ctx->pc = 0x217220u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)19072);
    // 0x217224: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x217224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x217228: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x217228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x21722c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x21722cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217230: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x217230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x217234: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x217234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x217238: 0x3c130067  lui         $s3, 0x67
    ctx->pc = 0x217238u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)103 << 16));
    // 0x21723c: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x21723cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x217240: 0x8e738a18  lw          $s3, -0x75E8($s3)
    ctx->pc = 0x217240u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294937112)));
    // 0x217244: 0xc0805b0  jal         func_2016C0
    ctx->pc = 0x217244u;
    SET_GPR_U32(ctx, 31, 0x21724Cu);
    ctx->pc = 0x217248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217244u;
    // 0x217248: 0x100a82d  daddu       $s5, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2016C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2016C0u, 0x217244u, 0x21724Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21724Cu;
label_21724c:
    // 0x21724c: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x21724cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x217250: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x217250u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x217254: 0xaeb00000  sw          $s0, 0x0($s5)
    ctx->pc = 0x217254u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 16));
    // 0x217258: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x217258u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x21725c: 0x52843  sra         $a1, $a1, 1
    ctx->pc = 0x21725cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 1));
    // 0x217260: 0xb12823  subu        $a1, $a1, $s1
    ctx->pc = 0x217260u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x217264: 0xaeb20004  sw          $s2, 0x4($s5)
    ctx->pc = 0x217264u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 18));
    // 0x217268: 0x28a20000  slti        $v0, $a1, 0x0
    ctx->pc = 0x217268u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x21726c: 0xa6a3001e  sh          $v1, 0x1E($s5)
    ctx->pc = 0x21726cu;
    WRITE16(ADD32(GPR_U32(ctx, 21), 30), (uint16_t)GPR_U32(ctx, 3));
    // 0x217270: 0x12400045  beqz        $s2, . + 4 + (0x45 << 2)
    ctx->pc = 0x217270u;
    {
        const bool branch_taken_0x217270 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x217274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217270u;
        // 0x217274: 0x2280b  movn        $a1, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217270) {
            ctx->pc = 0x217388u;
            goto label_217388;
        }
    }
    ctx->pc = 0x217278u;
    // 0x217278: 0x24027512  addiu       $v0, $zero, 0x7512
    ctx->pc = 0x217278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29970));
    // 0x21727c: 0x12820006  beq         $s4, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x21727Cu;
    {
        const bool branch_taken_0x21727c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x217280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21727Cu;
        // 0x217280: 0x3402ea24  ori         $v0, $zero, 0xEA24 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)59940);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21727c) {
            ctx->pc = 0x217298u;
            goto label_217298;
        }
    }
    ctx->pc = 0x217284u;
    // 0x217284: 0x56820041  bnel        $s4, $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x217284u;
    {
        const bool branch_taken_0x217284 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x217284) {
            ctx->pc = 0x217288u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x217284u;
            // 0x217288: 0xb3001a  div         $zero, $a1, $s3 (Delay Slot)
            { int32_t divisor = GPR_S32(ctx, 19);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
            ctx->in_delay_slot = false;
            ctx->pc = 0x21738Cu;
            goto label_21738c;
        }
    }
    ctx->pc = 0x21728Cu;
    // 0x21728c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x21728Cu;
    {
        const bool branch_taken_0x21728c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x217290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21728Cu;
        // 0x217290: 0x3c020067  lui         $v0, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21728c) {
            ctx->pc = 0x2172A8u;
            goto label_2172a8;
        }
    }
    ctx->pc = 0x217294u;
    // 0x217294: 0x0  nop
    ctx->pc = 0x217294u;
    // NOP
label_217298:
    // 0x217298: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x217298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x21729c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x21729Cu;
    {
        const bool branch_taken_0x21729c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2172A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21729Cu;
        // 0x2172a0: 0x24488a40  addiu       $t0, $v0, -0x75C0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937152));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21729c) {
            ctx->pc = 0x2172ACu;
            goto label_2172ac;
        }
    }
    ctx->pc = 0x2172A4u;
    // 0x2172a4: 0x0  nop
    ctx->pc = 0x2172a4u;
    // NOP
label_2172a8:
    // 0x2172a8: 0x24488a60  addiu       $t0, $v0, -0x75A0
    ctx->pc = 0x2172a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937184));
label_2172ac:
    // 0x2172ac: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x2172acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2172b0: 0xa2001a  div         $zero, $a1, $v0
    ctx->pc = 0x2172b0u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2172b4: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2172B4u;
    {
        const bool branch_taken_0x2172b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2172b4) {
            ctx->pc = 0x2172B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2172B4u;
            // 0x2172b8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2172BCu;
            goto label_2172bc;
        }
    }
    ctx->pc = 0x2172BCu;
label_2172bc:
    // 0x2172bc: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x2172bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x2172c0: 0x8d060008  lw          $a2, 0x8($t0)
    ctx->pc = 0x2172c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x2172c4: 0x2010  mfhi        $a0
    ctx->pc = 0x2172c4u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x2172c8: 0x2812  mflo        $a1
    ctx->pc = 0x2172c8u;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x2172cc: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x2172ccu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2172d0: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x2172d0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2172d4: 0x1010  mfhi        $v0
    ctx->pc = 0x2172d4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2172d8: 0x2012  mflo        $a0
    ctx->pc = 0x2172d8u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x2172dc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2172dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2172e0: 0xa6102a  slt         $v0, $a1, $a2
    ctx->pc = 0x2172e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2172e4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2172E4u;
    {
        const bool branch_taken_0x2172e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2172E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2172E4u;
        // 0x2172e8: 0x80582d  daddu       $t3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2172e4) {
            ctx->pc = 0x217310u;
            goto label_217310;
        }
    }
    ctx->pc = 0x2172ECu;
    // 0x2172ec: 0x8d020014  lw          $v0, 0x14($t0)
    ctx->pc = 0x2172ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
    // 0x2172f0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2172f0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2172f4: 0xa2001a  div         $zero, $a1, $v0
    ctx->pc = 0x2172f4u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2172f8: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2172F8u;
    {
        const bool branch_taken_0x2172f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2172f8) {
            ctx->pc = 0x2172FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2172F8u;
            // 0x2172fc: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x217300u;
            goto label_217300;
        }
    }
    ctx->pc = 0x217300u;
label_217300:
    // 0x217300: 0x2010  mfhi        $a0
    ctx->pc = 0x217300u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x217304: 0x1812  mflo        $v1
    ctx->pc = 0x217304u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x217308: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x217308u;
    {
        const bool branch_taken_0x217308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21730Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217308u;
        // 0x21730c: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217308) {
            ctx->pc = 0x217374u;
            goto label_217374;
        }
    }
    ctx->pc = 0x217310u;
label_217310:
    // 0x217310: 0x8d02000c  lw          $v0, 0xC($t0)
    ctx->pc = 0x217310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x217314: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x217314u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x217318: 0xa2001a  div         $zero, $a1, $v0
    ctx->pc = 0x217318u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x21731c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x21731Cu;
    {
        const bool branch_taken_0x21731c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21731c) {
            ctx->pc = 0x217320u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21731Cu;
            // 0x217320: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x217324u;
            goto label_217324;
        }
    }
    ctx->pc = 0x217324u;
label_217324:
    // 0x217324: 0x8d060010  lw          $a2, 0x10($t0)
    ctx->pc = 0x217324u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x217328: 0x1810  mfhi        $v1
    ctx->pc = 0x217328u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x21732c: 0x2012  mflo        $a0
    ctx->pc = 0x21732cu;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x217330: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x217330u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217334: 0xa6102a  slt         $v0, $a1, $a2
    ctx->pc = 0x217334u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x217338: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x217338u;
    {
        const bool branch_taken_0x217338 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21733Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217338u;
        // 0x21733c: 0x24890001  addiu       $t1, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217338) {
            ctx->pc = 0x217350u;
            goto label_217350;
        }
    }
    ctx->pc = 0x217340u;
    // 0x217340: 0x8d02001c  lw          $v0, 0x1C($t0)
    ctx->pc = 0x217340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 28)));
    // 0x217344: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x217344u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217348: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x217348u;
    {
        const bool branch_taken_0x217348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21734Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217348u;
        // 0x21734c: 0xa23821  addu        $a3, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217348) {
            ctx->pc = 0x217374u;
            goto label_217374;
        }
    }
    ctx->pc = 0x217350u;
label_217350:
    // 0x217350: 0x8d020014  lw          $v0, 0x14($t0)
    ctx->pc = 0x217350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
    // 0x217354: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x217354u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x217358: 0xa2001a  div         $zero, $a1, $v0
    ctx->pc = 0x217358u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x21735c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x21735Cu;
    {
        const bool branch_taken_0x21735c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21735c) {
            ctx->pc = 0x217360u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21735Cu;
            // 0x217360: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x217364u;
            goto label_217364;
        }
    }
    ctx->pc = 0x217364u;
label_217364:
    // 0x217364: 0x1812  mflo        $v1
    ctx->pc = 0x217364u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x217368: 0x2010  mfhi        $a0
    ctx->pc = 0x217368u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x21736c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x21736cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x217370: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x217370u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_217374:
    // 0x217374: 0x8d020018  lw          $v0, 0x18($t0)
    ctx->pc = 0x217374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 24)));
    // 0x217378: 0x4b2018  mult        $a0, $v0, $t3
    ctx->pc = 0x217378u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x21737c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x21737Cu;
    {
        const bool branch_taken_0x21737c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x217380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21737Cu;
        // 0x217380: 0x894821  addu        $t1, $a0, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21737c) {
            ctx->pc = 0x2173D0u;
            goto label_2173d0;
        }
    }
    ctx->pc = 0x217384u;
    // 0x217384: 0x0  nop
    ctx->pc = 0x217384u;
    // NOP
label_217388:
    // 0x217388: 0xb3001a  div         $zero, $a1, $s3
    ctx->pc = 0x217388u;
    { int32_t divisor = GPR_S32(ctx, 19);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_21738c:
    // 0x21738c: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x21738cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x217390: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x217390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x217394: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x217394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x217398: 0x52600001  beql        $s3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x217398u;
    {
        const bool branch_taken_0x217398 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x217398) {
            ctx->pc = 0x21739Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x217398u;
            // 0x21739c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2173A0u;
            goto label_2173a0;
        }
    }
    ctx->pc = 0x2173A0u;
label_2173a0:
    // 0x2173a0: 0x2406003c  addiu       $a2, $zero, 0x3C
    ctx->pc = 0x2173a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x2173a4: 0x1012  mflo        $v0
    ctx->pc = 0x2173a4u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2173a8: 0x3810  mfhi        $a3
    ctx->pc = 0x2173a8u;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x2173ac: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x2173acu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2173b0: 0x1012  mflo        $v0
    ctx->pc = 0x2173b0u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2173b4: 0x2010  mfhi        $a0
    ctx->pc = 0x2173b4u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x2173b8: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x2173b8u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2173bc: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2173bcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2173c0: 0x1012  mflo        $v0
    ctx->pc = 0x2173c0u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2173c4: 0x2810  mfhi        $a1
    ctx->pc = 0x2173c4u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x2173c8: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x2173c8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2173cc: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x2173ccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2173d0:
    // 0x2173d0: 0xaea70014  sw          $a3, 0x14($s5)
    ctx->pc = 0x2173d0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 20), GPR_U32(ctx, 7));
    // 0x2173d4: 0xaeaa0008  sw          $t2, 0x8($s5)
    ctx->pc = 0x2173d4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 10));
    // 0x2173d8: 0xaea9000c  sw          $t1, 0xC($s5)
    ctx->pc = 0x2173d8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 9));
    // 0x2173dc: 0xaea30010  sw          $v1, 0x10($s5)
    ctx->pc = 0x2173dcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 3));
    // 0x2173e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2173e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2173e4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2173e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2173e8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2173e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2173ec: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2173ecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2173f0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2173f0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2173f4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2173f4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2173f8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2173f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2173fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2173FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x217400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2173FCu;
        // 0x217400: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2173FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x217404u;
}
