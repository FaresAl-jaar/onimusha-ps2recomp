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

// Function: sub_002D6180
// Address: 0x2d6180 - 0x2d66a0
void sub_002D6180_0x2d6180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D6180_0x2d6180");
#endif

    switch (ctx->pc) {
        case 0x2d61d4u: goto label_2d61d4;
        case 0x2d63acu: goto label_2d63ac;
        case 0x2d640cu: goto label_2d640c;
        case 0x2d6470u: goto label_2d6470;
        case 0x2d64d4u: goto label_2d64d4;
        case 0x2d6544u: goto label_2d6544;
        case 0x2d6568u: goto label_2d6568;
        case 0x2d65bcu: goto label_2d65bc;
        case 0x2d661cu: goto label_2d661c;
        case 0x2d6670u: goto label_2d6670;
        default: break;
    }

    ctx->pc = 0x2d6180u;

    // 0x2d6180: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2d6180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2d6184: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2d6184u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2d6188: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2d6188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2d618c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2d618cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2d6190: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2d6190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2d6194: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2d6194u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2d6198: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2d6198u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d619c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2d619cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2d61a0: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2d61a0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d61a4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2d61a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2d61a8: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2d61a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d61ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d61acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d61b0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d61b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d61b4: 0x8c23cebc  lw          $v1, -0x3144($at)
    ctx->pc = 0x2d61b4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x2d61b8: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x2d61b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x2d61bc: 0x1460012e  bnez        $v1, . + 4 + (0x12E << 2)
    ctx->pc = 0x2D61BCu;
    {
        const bool branch_taken_0x2d61bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D61C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D61BCu;
        // 0x2d61c0: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d61bc) {
            ctx->pc = 0x2D6678u;
            goto label_2d6678;
        }
    }
    ctx->pc = 0x2D61C4u;
    // 0x2d61c4: 0x8e850010  lw          $a1, 0x10($s4)
    ctx->pc = 0x2d61c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x2d61c8: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x2d61c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x2d61cc: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x2D61CCu;
    SET_GPR_U32(ctx, 31, 0x2D61D4u);
    ctx->pc = 0x2D61D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D61CCu;
    // 0x2d61d0: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x2D61CCu, 0x2D61D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D61D4u;
label_2d61d4:
    // 0x2d61d4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D61D4u;
    {
        const bool branch_taken_0x2d61d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d61d4) {
            ctx->pc = 0x2D61E8u;
            goto label_2d61e8;
        }
    }
    ctx->pc = 0x2D61DCu;
    // 0x2d61dc: 0x90432b08  lbu         $v1, 0x2B08($v0)
    ctx->pc = 0x2d61dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 11016)));
    // 0x2d61e0: 0x14600125  bnez        $v1, . + 4 + (0x125 << 2)
    ctx->pc = 0x2D61E0u;
    {
        const bool branch_taken_0x2d61e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d61e0) {
            ctx->pc = 0x2D6678u;
            goto label_2d6678;
        }
    }
    ctx->pc = 0x2D61E8u;
label_2d61e8:
    // 0x2d61e8: 0x8e88001c  lw          $t0, 0x1C($s4)
    ctx->pc = 0x2d61e8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x2d61ec: 0x8e860020  lw          $a2, 0x20($s4)
    ctx->pc = 0x2d61ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x2d61f0: 0x8e870024  lw          $a3, 0x24($s4)
    ctx->pc = 0x2d61f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x2d61f4: 0x8e850028  lw          $a1, 0x28($s4)
    ctx->pc = 0x2d61f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
    // 0x2d61f8: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x2d61f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x2d61fc: 0x482021  addu        $a0, $v0, $t0
    ctx->pc = 0x2d61fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2d6200: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2d6200u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2d6204: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x2d6204u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x2d6208: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2d6208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2d620c: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x2d620cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2d6210: 0x471821  addu        $v1, $v0, $a3
    ctx->pc = 0x2d6210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2d6214: 0x86001a  div         $zero, $a0, $a2
    ctx->pc = 0x2d6214u;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2d6218: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2d6218u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2d621c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2d621cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2d6220: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2d6220u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2d6224: 0x9012  mflo        $s2
    ctx->pc = 0x2d6224u;
    SET_GPR_U64(ctx, 18, ctx->lo);
    // 0x2d6228: 0x7045001a  div1        $zero, $v0, $a1
    ctx->pc = 0x2d6228u;
    { int32_t divisor = GPR_S32(ctx, 5); int32_t dividend = GPR_S32(ctx, 2); if (divisor != 0) {     if (divisor == -1 && dividend == INT32_MIN) {         ctx->lo1 = (uint64_t)(int64_t)INT32_MIN; ctx->hi1 = 0;     } else {         ctx->lo1 = (uint64_t)(int64_t)(dividend / divisor);         ctx->hi1 = (uint64_t)(int64_t)(dividend % divisor);     } } else {     ctx->lo1 = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi1 = (uint64_t)(int64_t)dividend; } }
    // 0x2d622c: 0x0  nop
    ctx->pc = 0x2d622cu;
    // NOP
    // 0x2d6230: 0x0  nop
    ctx->pc = 0x2d6230u;
    // NOP
    // 0x2d6234: 0x70008812  mflo1       $s1
    ctx->pc = 0x2d6234u;
    SET_GPR_U64(ctx, 17, ctx->lo1);
    // 0x2d6238: 0x16400005  bnez        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D6238u;
    {
        const bool branch_taken_0x2d6238 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d6238) {
            ctx->pc = 0x2D6250u;
            goto label_2d6250;
        }
    }
    ctx->pc = 0x2D6240u;
    // 0x2d6240: 0x19000003  blez        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D6240u;
    {
        const bool branch_taken_0x2d6240 = (GPR_S64(ctx, 8) <= 0);
        if (branch_taken_0x2d6240) {
            ctx->pc = 0x2D6250u;
            goto label_2d6250;
        }
    }
    ctx->pc = 0x2D6248u;
    // 0x2d6248: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2d6248u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2d624c: 0x0  nop
    ctx->pc = 0x2d624cu;
    // NOP
label_2d6250:
    // 0x2d6250: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D6250u;
    {
        const bool branch_taken_0x2d6250 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d6250) {
            ctx->pc = 0x2D6268u;
            goto label_2d6268;
        }
    }
    ctx->pc = 0x2D6258u;
    // 0x2d6258: 0x18e00003  blez        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D6258u;
    {
        const bool branch_taken_0x2d6258 = (GPR_S64(ctx, 7) <= 0);
        if (branch_taken_0x2d6258) {
            ctx->pc = 0x2D6268u;
            goto label_2d6268;
        }
    }
    ctx->pc = 0x2D6260u;
    // 0x2d6260: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2d6260u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2d6264: 0x0  nop
    ctx->pc = 0x2d6264u;
    // NOP
label_2d6268:
    // 0x2d6268: 0x24020032  addiu       $v0, $zero, 0x32
    ctx->pc = 0x2d6268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x2d626c: 0x16420004  bne         $s2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D626Cu;
    {
        const bool branch_taken_0x2d626c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D6270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D626Cu;
        // 0x2d6270: 0x106082a  slt         $at, $t0, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d626c) {
            ctx->pc = 0x2D6280u;
            goto label_2d6280;
        }
    }
    ctx->pc = 0x2D6274u;
    // 0x2d6274: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D6274u;
    {
        const bool branch_taken_0x2d6274 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d6274) {
            ctx->pc = 0x2D6280u;
            goto label_2d6280;
        }
    }
    ctx->pc = 0x2D627Cu;
    // 0x2d627c: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x2d627cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_2d6280:
    // 0x2d6280: 0x24020032  addiu       $v0, $zero, 0x32
    ctx->pc = 0x2d6280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x2d6284: 0x16220004  bne         $s1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D6284u;
    {
        const bool branch_taken_0x2d6284 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D6288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6284u;
        // 0x2d6288: 0xe5082a  slt         $at, $a3, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6284) {
            ctx->pc = 0x2D6298u;
            goto label_2d6298;
        }
    }
    ctx->pc = 0x2D628Cu;
    // 0x2d628c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D628Cu;
    {
        const bool branch_taken_0x2d628c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d628c) {
            ctx->pc = 0x2D6298u;
            goto label_2d6298;
        }
    }
    ctx->pc = 0x2D6294u;
    // 0x2d6294: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x2d6294u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_2d6298:
    // 0x2d6298: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x2d6298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x2d629c: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d629cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d62a0: 0x244265f0  addiu       $v0, $v0, 0x65F0
    ctx->pc = 0x2d62a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26096));
    // 0x2d62a4: 0x8425602a  lh          $a1, 0x602A($at)
    ctx->pc = 0x2d62a4u;
    SET_GPR_S32(ctx, 5, (int16_t)FAST_READ16(0x4E602Au));
    // 0x2d62a8: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2d62a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2d62ac: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2d62acu;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x4E65F0u));
    // 0x2d62b0: 0x2052823  subu        $a1, $s0, $a1
    ctx->pc = 0x2d62b0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x2d62b4: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x2d62b4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x2d62b8: 0x5843c  dsll32      $s0, $a1, 16
    ctx->pc = 0x2d62b8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) << (32 + 16));
    // 0x2d62bc: 0x8faa0080  lw          $t2, 0x80($sp)
    ctx->pc = 0x2d62bcu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2d62c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d62c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d62c4: 0x92830030  lbu         $v1, 0x30($s4)
    ctx->pc = 0x2d62c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x2d62c8: 0x10843f  dsra32      $s0, $s0, 16
    ctx->pc = 0x2d62c8u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
    // 0x2d62cc: 0xa2202  srl         $a0, $t2, 8
    ctx->pc = 0x2d62ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), 8));
    // 0x2d62d0: 0x314500ff  andi        $a1, $t2, 0xFF
    ctx->pc = 0x2d62d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)255);
    // 0x2d62d4: 0x308700ff  andi        $a3, $a0, 0xFF
    ctx->pc = 0x2d62d4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2d62d8: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x2d62d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2d62dc: 0x73080  sll         $a2, $a3, 2
    ctx->pc = 0x2d62dcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x2d62e0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2d62e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2d62e4: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x2d62e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x2d62e8: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x2d62e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2d62ec: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2d62ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2d62f0: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x2d62f0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x2d62f4: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x2d62f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2d62f8: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x2d62f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x2d62fc: 0x431c2  srl         $a2, $a0, 7
    ctx->pc = 0x2d62fcu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 4), 7));
    // 0x2d6300: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x2d6300u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x2d6304: 0xa2402  srl         $a0, $t2, 16
    ctx->pc = 0x2d6304u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), 16));
    // 0x2d6308: 0x529c2  srl         $a1, $a1, 7
    ctx->pc = 0x2d6308u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 7));
    // 0x2d630c: 0x53a00  sll         $a3, $a1, 8
    ctx->pc = 0x2d630cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
    // 0x2d6310: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x2d6310u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2d6314: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x2d6314u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x2d6318: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x2d6318u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2d631c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2d631cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2d6320: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x2d6320u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2d6324: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2d6324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2d6328: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x2d6328u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2d632c: 0x421c2  srl         $a0, $a0, 7
    ctx->pc = 0x2d632cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 7));
    // 0x2d6330: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x2d6330u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x2d6334: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D6334u;
    {
        const bool branch_taken_0x2d6334 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D6338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6334u;
        // 0x2d6338: 0x86b025  or          $s6, $a0, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 22, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6334) {
            ctx->pc = 0x2D6348u;
            goto label_2d6348;
        }
    }
    ctx->pc = 0x2D633Cu;
    // 0x2d633c: 0x240a3000  addiu       $t2, $zero, 0x3000
    ctx->pc = 0x2d633cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 12288));
    // 0x2d6340: 0x24164200  addiu       $s6, $zero, 0x4200
    ctx->pc = 0x2d6340u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 16896));
    // 0x2d6344: 0x0  nop
    ctx->pc = 0x2d6344u;
    // NOP
label_2d6348:
    // 0x2d6348: 0x251082a  slt         $at, $s2, $s1
    ctx->pc = 0x2d6348u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x2d634c: 0x1020004a  beqz        $at, . + 4 + (0x4A << 2)
    ctx->pc = 0x2D634Cu;
    {
        const bool branch_taken_0x2d634c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D6350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D634Cu;
        // 0x2d6350: 0x3c01004e  lui         $at, 0x4E (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d634c) {
            ctx->pc = 0x2D6478u;
            goto label_2d6478;
        }
    }
    ctx->pc = 0x2D6354u;
    // 0x2d6354: 0x10843c  dsll32      $s0, $s0, 16
    ctx->pc = 0x2d6354u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 16));
    // 0x2d6358: 0x84236084  lh          $v1, 0x6084($at)
    ctx->pc = 0x2d6358u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 24708)));
    // 0x2d635c: 0x139c3c  dsll32      $s3, $s3, 16
    ctx->pc = 0x2d635cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) << (32 + 16));
    // 0x2d6360: 0x139c3f  dsra32      $s3, $s3, 16
    ctx->pc = 0x2d6360u;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 16));
    // 0x2d6364: 0x12443c  dsll32      $t0, $s2, 16
    ctx->pc = 0x2d6364u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 18) << (32 + 16));
    // 0x2d6368: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x2d6368u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x2d636c: 0x10843f  dsra32      $s0, $s0, 16
    ctx->pc = 0x2d636cu;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
    // 0x2d6370: 0x8443f  dsra32      $t0, $t0, 16
    ctx->pc = 0x2d6370u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    // 0x2d6374: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2d6374u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6378: 0x24a56080  addiu       $a1, $a1, 0x6080
    ctx->pc = 0x2d6378u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24704));
    // 0x2d637c: 0x240b001a  addiu       $t3, $zero, 0x1A
    ctx->pc = 0x2d637cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x2d6380: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d6380u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d6384: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x2d6384u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x2d6388: 0x84226086  lh          $v0, 0x6086($at)
    ctx->pc = 0x2d6388u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x4E6086u));
    // 0x2d638c: 0x3343c  dsll32      $a2, $v1, 16
    ctx->pc = 0x2d638cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2d6390: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x2d6390u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x2d6394: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d6394u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d6398: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2d6398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2d639c: 0x8429608a  lh          $t1, 0x608A($at)
    ctx->pc = 0x2d639cu;
    SET_GPR_S32(ctx, 9, (int16_t)FAST_READ16(0x4E608Au));
    // 0x2d63a0: 0x23c3c  dsll32      $a3, $v0, 16
    ctx->pc = 0x2d63a0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2d63a4: 0xc0b506c  jal         func_2D41B0
    ctx->pc = 0x2D63A4u;
    SET_GPR_U32(ctx, 31, 0x2D63ACu);
    ctx->pc = 0x2D63A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D63A4u;
    // 0x2d63a8: 0x73c3f  dsra32      $a3, $a3, 16 (Delay Slot)
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D41B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D41B0u, 0x2D63A4u, 0x2D63ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D63ACu;
label_2d63ac:
    // 0x2d63ac: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d63acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d63b0: 0x2321023  subu        $v0, $s1, $s2
    ctx->pc = 0x2d63b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x2d63b4: 0x842360a0  lh          $v1, 0x60A0($at)
    ctx->pc = 0x2d63b4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 24736)));
    // 0x2d63b8: 0x2443c  dsll32      $t0, $v0, 16
    ctx->pc = 0x2d63b8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2d63bc: 0x2721021  addu        $v0, $s3, $s2
    ctx->pc = 0x2d63bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
    // 0x2d63c0: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x2d63c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x2d63c4: 0x28c3c  dsll32      $s1, $v0, 16
    ctx->pc = 0x2d63c4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2d63c8: 0x2c0502d  daddu       $t2, $s6, $zero
    ctx->pc = 0x2d63c8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d63cc: 0x118c3f  dsra32      $s1, $s1, 16
    ctx->pc = 0x2d63ccu;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
    // 0x2d63d0: 0x8443f  dsra32      $t0, $t0, 16
    ctx->pc = 0x2d63d0u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    // 0x2d63d4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2d63d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d63d8: 0x24a5609c  addiu       $a1, $a1, 0x609C
    ctx->pc = 0x2d63d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24732));
    // 0x2d63dc: 0x240b001a  addiu       $t3, $zero, 0x1A
    ctx->pc = 0x2d63dcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x2d63e0: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d63e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d63e4: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x2d63e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x2d63e8: 0x842260a2  lh          $v0, 0x60A2($at)
    ctx->pc = 0x2d63e8u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x4E60A2u));
    // 0x2d63ec: 0x3343c  dsll32      $a2, $v1, 16
    ctx->pc = 0x2d63ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2d63f0: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x2d63f0u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x2d63f4: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d63f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d63f8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2d63f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2d63fc: 0x842960a6  lh          $t1, 0x60A6($at)
    ctx->pc = 0x2d63fcu;
    SET_GPR_S32(ctx, 9, (int16_t)FAST_READ16(0x4E60A6u));
    // 0x2d6400: 0x23c3c  dsll32      $a3, $v0, 16
    ctx->pc = 0x2d6400u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2d6404: 0xc0b506c  jal         func_2D41B0
    ctx->pc = 0x2D6404u;
    SET_GPR_U32(ctx, 31, 0x2D640Cu);
    ctx->pc = 0x2D6408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6404u;
    // 0x2d6408: 0x73c3f  dsra32      $a3, $a3, 16 (Delay Slot)
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D41B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D41B0u, 0x2D6404u, 0x2D640Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D640Cu;
label_2d640c:
    // 0x2d640c: 0x92830030  lbu         $v1, 0x30($s4)
    ctx->pc = 0x2d640cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x2d6410: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d6410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d6414: 0x1462004c  bne         $v1, $v0, . + 4 + (0x4C << 2)
    ctx->pc = 0x2D6414u;
    {
        const bool branch_taken_0x2d6414 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D6418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6414u;
        // 0x2d6418: 0x3c01004e  lui         $at, 0x4E (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6414) {
            ctx->pc = 0x2D6548u;
            goto label_2d6548;
        }
    }
    ctx->pc = 0x2D641Cu;
    // 0x2d641c: 0x24020032  addiu       $v0, $zero, 0x32
    ctx->pc = 0x2d641cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x2d6420: 0x84266084  lh          $a2, 0x6084($at)
    ctx->pc = 0x2d6420u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 24708)));
    // 0x2d6424: 0x521023  subu        $v0, $v0, $s2
    ctx->pc = 0x2d6424u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2d6428: 0x2443c  dsll32      $t0, $v0, 16
    ctx->pc = 0x2d6428u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2d642c: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x2d642cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x2d6430: 0x8faa0080  lw          $t2, 0x80($sp)
    ctx->pc = 0x2d6430u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2d6434: 0x8443f  dsra32      $t0, $t0, 16
    ctx->pc = 0x2d6434u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    // 0x2d6438: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2d6438u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d643c: 0x24a56080  addiu       $a1, $a1, 0x6080
    ctx->pc = 0x2d643cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24704));
    // 0x2d6440: 0x240b001a  addiu       $t3, $zero, 0x1A
    ctx->pc = 0x2d6440u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x2d6444: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d6444u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d6448: 0xd11021  addu        $v0, $a2, $s1
    ctx->pc = 0x2d6448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    // 0x2d644c: 0x84236086  lh          $v1, 0x6086($at)
    ctx->pc = 0x2d644cu;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x4E6086u));
    // 0x2d6450: 0x2343c  dsll32      $a2, $v0, 16
    ctx->pc = 0x2d6450u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2d6454: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x2d6454u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x2d6458: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d6458u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d645c: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x2d645cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2d6460: 0x8429608a  lh          $t1, 0x608A($at)
    ctx->pc = 0x2d6460u;
    SET_GPR_S32(ctx, 9, (int16_t)FAST_READ16(0x4E608Au));
    // 0x2d6464: 0x23c3c  dsll32      $a3, $v0, 16
    ctx->pc = 0x2d6464u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2d6468: 0xc0b506c  jal         func_2D41B0
    ctx->pc = 0x2D6468u;
    SET_GPR_U32(ctx, 31, 0x2D6470u);
    ctx->pc = 0x2D646Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6468u;
    // 0x2d646c: 0x73c3f  dsra32      $a3, $a3, 16 (Delay Slot)
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D41B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D41B0u, 0x2D6468u, 0x2D6470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6470u;
label_2d6470:
    // 0x2d6470: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x2D6470u;
    {
        const bool branch_taken_0x2d6470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d6470) {
            ctx->pc = 0x2D6548u;
            goto label_2d6548;
        }
    }
    ctx->pc = 0x2D6478u;
label_2d6478:
    // 0x2d6478: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d6478u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d647c: 0x84236084  lh          $v1, 0x6084($at)
    ctx->pc = 0x2d647cu;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x4E6084u));
    // 0x2d6480: 0x10843c  dsll32      $s0, $s0, 16
    ctx->pc = 0x2d6480u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 16));
    // 0x2d6484: 0x139c3c  dsll32      $s3, $s3, 16
    ctx->pc = 0x2d6484u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) << (32 + 16));
    // 0x2d6488: 0x11443c  dsll32      $t0, $s1, 16
    ctx->pc = 0x2d6488u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 17) << (32 + 16));
    // 0x2d648c: 0x139c3f  dsra32      $s3, $s3, 16
    ctx->pc = 0x2d648cu;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 16));
    // 0x2d6490: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x2d6490u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x2d6494: 0x10843f  dsra32      $s0, $s0, 16
    ctx->pc = 0x2d6494u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
    // 0x2d6498: 0x8443f  dsra32      $t0, $t0, 16
    ctx->pc = 0x2d6498u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    // 0x2d649c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2d649cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d64a0: 0x24a56080  addiu       $a1, $a1, 0x6080
    ctx->pc = 0x2d64a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24704));
    // 0x2d64a4: 0x240b001a  addiu       $t3, $zero, 0x1A
    ctx->pc = 0x2d64a4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x2d64a8: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d64a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d64ac: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x2d64acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x2d64b0: 0x84226086  lh          $v0, 0x6086($at)
    ctx->pc = 0x2d64b0u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x4E6086u));
    // 0x2d64b4: 0x3343c  dsll32      $a2, $v1, 16
    ctx->pc = 0x2d64b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2d64b8: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x2d64b8u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x2d64bc: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d64bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d64c0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2d64c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2d64c4: 0x8429608a  lh          $t1, 0x608A($at)
    ctx->pc = 0x2d64c4u;
    SET_GPR_S32(ctx, 9, (int16_t)FAST_READ16(0x4E608Au));
    // 0x2d64c8: 0x23c3c  dsll32      $a3, $v0, 16
    ctx->pc = 0x2d64c8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2d64cc: 0xc0b506c  jal         func_2D41B0
    ctx->pc = 0x2D64CCu;
    SET_GPR_U32(ctx, 31, 0x2D64D4u);
    ctx->pc = 0x2D64D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D64CCu;
    // 0x2d64d0: 0x73c3f  dsra32      $a3, $a3, 16 (Delay Slot)
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D41B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D41B0u, 0x2D64CCu, 0x2D64D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D64D4u;
label_2d64d4:
    // 0x2d64d4: 0x92830030  lbu         $v1, 0x30($s4)
    ctx->pc = 0x2d64d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x2d64d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d64d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d64dc: 0x1462001a  bne         $v1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2D64DCu;
    {
        const bool branch_taken_0x2d64dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D64E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D64DCu;
        // 0x2d64e0: 0x3c01004e  lui         $at, 0x4E (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d64dc) {
            ctx->pc = 0x2D6548u;
            goto label_2d6548;
        }
    }
    ctx->pc = 0x2D64E4u;
    // 0x2d64e4: 0x2711021  addu        $v0, $s3, $s1
    ctx->pc = 0x2d64e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
    // 0x2d64e8: 0x84266084  lh          $a2, 0x6084($at)
    ctx->pc = 0x2d64e8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 24708)));
    // 0x2d64ec: 0x23c3c  dsll32      $a3, $v0, 16
    ctx->pc = 0x2d64ecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2d64f0: 0x24020032  addiu       $v0, $zero, 0x32
    ctx->pc = 0x2d64f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x2d64f4: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x2d64f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x2d64f8: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x2d64f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2d64fc: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x2d64fcu;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    // 0x2d6500: 0x2443c  dsll32      $t0, $v0, 16
    ctx->pc = 0x2d6500u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2d6504: 0x8faa0080  lw          $t2, 0x80($sp)
    ctx->pc = 0x2d6504u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2d6508: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2d6508u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d650c: 0x24a56080  addiu       $a1, $a1, 0x6080
    ctx->pc = 0x2d650cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24704));
    // 0x2d6510: 0x8443f  dsra32      $t0, $t0, 16
    ctx->pc = 0x2d6510u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    // 0x2d6514: 0x240b001a  addiu       $t3, $zero, 0x1A
    ctx->pc = 0x2d6514u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x2d6518: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d6518u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d651c: 0xc71021  addu        $v0, $a2, $a3
    ctx->pc = 0x2d651cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x2d6520: 0x84236086  lh          $v1, 0x6086($at)
    ctx->pc = 0x2d6520u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x4E6086u));
    // 0x2d6524: 0x2343c  dsll32      $a2, $v0, 16
    ctx->pc = 0x2d6524u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2d6528: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x2d6528u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x2d652c: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d652cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d6530: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x2d6530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2d6534: 0x8429608a  lh          $t1, 0x608A($at)
    ctx->pc = 0x2d6534u;
    SET_GPR_S32(ctx, 9, (int16_t)FAST_READ16(0x4E608Au));
    // 0x2d6538: 0x23c3c  dsll32      $a3, $v0, 16
    ctx->pc = 0x2d6538u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2d653c: 0xc0b506c  jal         func_2D41B0
    ctx->pc = 0x2D653Cu;
    SET_GPR_U32(ctx, 31, 0x2D6544u);
    ctx->pc = 0x2D6540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D653Cu;
    // 0x2d6540: 0x73c3f  dsra32      $a3, $a3, 16 (Delay Slot)
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D41B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D41B0u, 0x2D653Cu, 0x2D6544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6544u;
label_2d6544:
    // 0x2d6544: 0x0  nop
    ctx->pc = 0x2d6544u;
    // NOP
label_2d6548:
    // 0x2d6548: 0x92820031  lbu         $v0, 0x31($s4)
    ctx->pc = 0x2d6548u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 49)));
    // 0x2d654c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D654Cu;
    {
        const bool branch_taken_0x2d654c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D6550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D654Cu;
        // 0x2d6550: 0x92b10047  lbu         $s1, 0x47($s5) (Delay Slot)
        SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 71)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d654c) {
            ctx->pc = 0x2D655Cu;
            goto label_2d655c;
        }
    }
    ctx->pc = 0x2D6554u;
    // 0x2d6554: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2D6554u;
    {
        const bool branch_taken_0x2d6554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D6558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6554u;
        // 0x2d6558: 0x92a40014  lbu         $a0, 0x14($s5) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6554) {
            ctx->pc = 0x2D6560u;
            goto label_2d6560;
        }
    }
    ctx->pc = 0x2D655Cu;
label_2d655c:
    // 0x2d655c: 0x92a40015  lbu         $a0, 0x15($s5)
    ctx->pc = 0x2d655cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 21)));
label_2d6560:
    // 0x2d6560: 0xc0b4344  jal         func_2D0D10
    ctx->pc = 0x2D6560u;
    SET_GPR_U32(ctx, 31, 0x2D6568u);
    ctx->pc = 0x2D0D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0D10u, 0x2D6560u, 0x2D6568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6568u;
label_2d6568:
    // 0x2d6568: 0xa2a20047  sb          $v0, 0x47($s5)
    ctx->pc = 0x2d6568u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 71), (uint8_t)GPR_U32(ctx, 2));
    // 0x2d656c: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d656cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d6570: 0x84236040  lh          $v1, 0x6040($at)
    ctx->pc = 0x2d6570u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x4E6040u));
    // 0x2d6574: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x2d6574u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x2d6578: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2d6578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d657c: 0x24a5603c  addiu       $a1, $a1, 0x603C
    ctx->pc = 0x2d657cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24636));
    // 0x2d6580: 0x24080032  addiu       $t0, $zero, 0x32
    ctx->pc = 0x2d6580u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x2d6584: 0x240b001a  addiu       $t3, $zero, 0x1A
    ctx->pc = 0x2d6584u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x2d6588: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d6588u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d658c: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x2d658cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x2d6590: 0x84226042  lh          $v0, 0x6042($at)
    ctx->pc = 0x2d6590u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x4E6042u));
    // 0x2d6594: 0x3343c  dsll32      $a2, $v1, 16
    ctx->pc = 0x2d6594u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2d6598: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x2d6598u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x2d659c: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d659cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d65a0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2d65a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2d65a4: 0x84296046  lh          $t1, 0x6046($at)
    ctx->pc = 0x2d65a4u;
    SET_GPR_S32(ctx, 9, (int16_t)FAST_READ16(0x4E6046u));
    // 0x2d65a8: 0x23c3c  dsll32      $a3, $v0, 16
    ctx->pc = 0x2d65a8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2d65ac: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d65acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d65b0: 0x8c2a603c  lw          $t2, 0x603C($at)
    ctx->pc = 0x2d65b0u;
    SET_GPR_S32(ctx, 10, (int32_t)FAST_READ32(0x4E603Cu));
    // 0x2d65b4: 0xc0b506c  jal         func_2D41B0
    ctx->pc = 0x2D65B4u;
    SET_GPR_U32(ctx, 31, 0x2D65BCu);
    ctx->pc = 0x2D65B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D65B4u;
    // 0x2d65b8: 0x73c3f  dsra32      $a3, $a3, 16 (Delay Slot)
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D41B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D41B0u, 0x2D65B4u, 0x2D65BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D65BCu;
label_2d65bc:
    // 0x2d65bc: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d65bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d65c0: 0x26620032  addiu       $v0, $s3, 0x32
    ctx->pc = 0x2d65c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 50));
    // 0x2d65c4: 0x8423605c  lh          $v1, 0x605C($at)
    ctx->pc = 0x2d65c4u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x4E605Cu));
    // 0x2d65c8: 0x2343c  dsll32      $a2, $v0, 16
    ctx->pc = 0x2d65c8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2d65cc: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x2d65ccu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x2d65d0: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x2d65d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x2d65d4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2d65d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d65d8: 0x24a56058  addiu       $a1, $a1, 0x6058
    ctx->pc = 0x2d65d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24664));
    // 0x2d65dc: 0x240b001a  addiu       $t3, $zero, 0x1A
    ctx->pc = 0x2d65dcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x2d65e0: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d65e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d65e4: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2d65e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2d65e8: 0x8422605e  lh          $v0, 0x605E($at)
    ctx->pc = 0x2d65e8u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x4E605Eu));
    // 0x2d65ec: 0x3343c  dsll32      $a2, $v1, 16
    ctx->pc = 0x2d65ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2d65f0: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x2d65f0u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x2d65f4: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d65f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d65f8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2d65f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2d65fc: 0x84286060  lh          $t0, 0x6060($at)
    ctx->pc = 0x2d65fcu;
    SET_GPR_S32(ctx, 8, (int16_t)FAST_READ16(0x4E6060u));
    // 0x2d6600: 0x23c3c  dsll32      $a3, $v0, 16
    ctx->pc = 0x2d6600u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2d6604: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d6604u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d6608: 0x84296062  lh          $t1, 0x6062($at)
    ctx->pc = 0x2d6608u;
    SET_GPR_S32(ctx, 9, (int16_t)FAST_READ16(0x4E6062u));
    // 0x2d660c: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d660cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d6610: 0x8c2a6058  lw          $t2, 0x6058($at)
    ctx->pc = 0x2d6610u;
    SET_GPR_S32(ctx, 10, (int32_t)FAST_READ32(0x4E6058u));
    // 0x2d6614: 0xc0b506c  jal         func_2D41B0
    ctx->pc = 0x2D6614u;
    SET_GPR_U32(ctx, 31, 0x2D661Cu);
    ctx->pc = 0x2D6618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6614u;
    // 0x2d6618: 0x73c3f  dsra32      $a3, $a3, 16 (Delay Slot)
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D41B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D41B0u, 0x2D6614u, 0x2D661Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D661Cu;
label_2d661c:
    // 0x2d661c: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d661cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d6620: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x2d6620u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x2d6624: 0x84236024  lh          $v1, 0x6024($at)
    ctx->pc = 0x2d6624u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x4E6024u));
    // 0x2d6628: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2d6628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d662c: 0x24a56020  addiu       $a1, $a1, 0x6020
    ctx->pc = 0x2d662cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24608));
    // 0x2d6630: 0x240b001a  addiu       $t3, $zero, 0x1A
    ctx->pc = 0x2d6630u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x2d6634: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d6634u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d6638: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x2d6638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x2d663c: 0x84226026  lh          $v0, 0x6026($at)
    ctx->pc = 0x2d663cu;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x4E6026u));
    // 0x2d6640: 0x3343c  dsll32      $a2, $v1, 16
    ctx->pc = 0x2d6640u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2d6644: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x2d6644u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x2d6648: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d6648u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d664c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2d664cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2d6650: 0x84286028  lh          $t0, 0x6028($at)
    ctx->pc = 0x2d6650u;
    SET_GPR_S32(ctx, 8, (int16_t)FAST_READ16(0x4E6028u));
    // 0x2d6654: 0x23c3c  dsll32      $a3, $v0, 16
    ctx->pc = 0x2d6654u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2d6658: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d6658u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d665c: 0x8429602a  lh          $t1, 0x602A($at)
    ctx->pc = 0x2d665cu;
    SET_GPR_S32(ctx, 9, (int16_t)FAST_READ16(0x4E602Au));
    // 0x2d6660: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x2d6660u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x2d6664: 0x8c2a6020  lw          $t2, 0x6020($at)
    ctx->pc = 0x2d6664u;
    SET_GPR_S32(ctx, 10, (int32_t)FAST_READ32(0x4E6020u));
    // 0x2d6668: 0xc0b506c  jal         func_2D41B0
    ctx->pc = 0x2D6668u;
    SET_GPR_U32(ctx, 31, 0x2D6670u);
    ctx->pc = 0x2D666Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6668u;
    // 0x2d666c: 0x73c3f  dsra32      $a3, $a3, 16 (Delay Slot)
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D41B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D41B0u, 0x2D6668u, 0x2D6670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6670u;
label_2d6670:
    // 0x2d6670: 0xa2b10047  sb          $s1, 0x47($s5)
    ctx->pc = 0x2d6670u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 71), (uint8_t)GPR_U32(ctx, 17));
    // 0x2d6674: 0x0  nop
    ctx->pc = 0x2d6674u;
    // NOP
label_2d6678:
    // 0x2d6678: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2d6678u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2d667c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2d667cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d6680: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2d6680u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d6684: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2d6684u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d6688: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2d6688u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d668c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2d668cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d6690: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d6690u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d6694: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d6694u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d6698: 0x3e00008  jr          $ra
    ctx->pc = 0x2D6698u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D669Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6698u;
        // 0x2d669c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D6698u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D66A0u;
}
