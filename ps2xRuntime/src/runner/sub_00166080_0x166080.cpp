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

// Function: sub_00166080
// Address: 0x166080 - 0x166490
void sub_00166080_0x166080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00166080_0x166080");
#endif

    ctx->pc = 0x166080u;

    // 0x166080: 0x90830030  lbu         $v1, 0x30($a0)
    ctx->pc = 0x166080u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x166084: 0x2c610006  sltiu       $at, $v1, 0x6
    ctx->pc = 0x166084u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x166088: 0x1020008b  beqz        $at, . + 4 + (0x8B << 2)
    ctx->pc = 0x166088u;
    {
        const bool branch_taken_0x166088 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x16608Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166088u;
        // 0x16608c: 0x3c050066  lui         $a1, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166088) {
            ctx->pc = 0x1662B8u;
            goto label_1662b8;
        }
    }
    ctx->pc = 0x166090u;
    // 0x166090: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x166090u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x166094: 0x24a55240  addiu       $a1, $a1, 0x5240
    ctx->pc = 0x166094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21056));
    // 0x166098: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x166098u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x16609c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x16609cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1660a0: 0x600008  jr          $v1
    ctx->pc = 0x1660A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1660A8u: goto label_1660a8;
            case 0x1660E8u: goto label_1660e8;
            case 0x166168u: goto label_166168;
            case 0x166218u: goto label_166218;
            case 0x166250u: goto label_166250;
            case 0x1662B8u: goto label_1662b8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1660A0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1660A8u;
label_1660a8:
    // 0x1660a8: 0x90850023  lbu         $a1, 0x23($a0)
    ctx->pc = 0x1660a8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 35)));
    // 0x1660ac: 0x90830095  lbu         $v1, 0x95($a0)
    ctx->pc = 0x1660acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 149)));
    // 0x1660b0: 0x90860094  lbu         $a2, 0x94($a0)
    ctx->pc = 0x1660b0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 148)));
    // 0x1660b4: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x1660b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1660b8: 0x66082a  slt         $at, $v1, $a2
    ctx->pc = 0x1660b8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1660bc: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1660BCu;
    {
        const bool branch_taken_0x1660bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1660bc) {
            ctx->pc = 0x1660D0u;
            goto label_1660d0;
        }
    }
    ctx->pc = 0x1660C4u;
    // 0x1660c4: 0x1000007c  b           . + 4 + (0x7C << 2)
    ctx->pc = 0x1660C4u;
    {
        const bool branch_taken_0x1660c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1660C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1660C4u;
        // 0x1660c8: 0xa0830023  sb          $v1, 0x23($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 35), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1660c4) {
            ctx->pc = 0x1662B8u;
            goto label_1662b8;
        }
    }
    ctx->pc = 0x1660CCu;
    // 0x1660cc: 0x0  nop
    ctx->pc = 0x1660ccu;
    // NOP
label_1660d0:
    // 0x1660d0: 0xa0860023  sb          $a2, 0x23($a0)
    ctx->pc = 0x1660d0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 35), (uint8_t)GPR_U32(ctx, 6));
    // 0x1660d4: 0x94850098  lhu         $a1, 0x98($a0)
    ctx->pc = 0x1660d4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 152)));
    // 0x1660d8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1660d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1660dc: 0xa4850090  sh          $a1, 0x90($a0)
    ctx->pc = 0x1660dcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 144), (uint16_t)GPR_U32(ctx, 5));
    // 0x1660e0: 0x10000075  b           . + 4 + (0x75 << 2)
    ctx->pc = 0x1660E0u;
    {
        const bool branch_taken_0x1660e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1660E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1660E0u;
        // 0x1660e4: 0xac830030  sw          $v1, 0x30($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1660e0) {
            ctx->pc = 0x1662B8u;
            goto label_1662b8;
        }
    }
    ctx->pc = 0x1660E8u;
label_1660e8:
    // 0x1660e8: 0x94830090  lhu         $v1, 0x90($a0)
    ctx->pc = 0x1660e8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 144)));
    // 0x1660ec: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1660ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1660f0: 0xa4830090  sh          $v1, 0x90($a0)
    ctx->pc = 0x1660f0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 144), (uint16_t)GPR_U32(ctx, 3));
    // 0x1660f4: 0x94860096  lhu         $a2, 0x96($a0)
    ctx->pc = 0x1660f4u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 150)));
    // 0x1660f8: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1660f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1660fc: 0x14660008  bne         $v1, $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x1660FCu;
    {
        const bool branch_taken_0x1660fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x1660fc) {
            ctx->pc = 0x166120u;
            goto label_166120;
        }
    }
    ctx->pc = 0x166104u;
    // 0x166104: 0x90850094  lbu         $a1, 0x94($a0)
    ctx->pc = 0x166104u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 148)));
    // 0x166108: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x166108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16610c: 0xa0850023  sb          $a1, 0x23($a0)
    ctx->pc = 0x16610cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 35), (uint8_t)GPR_U32(ctx, 5));
    // 0x166110: 0x94850098  lhu         $a1, 0x98($a0)
    ctx->pc = 0x166110u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 152)));
    // 0x166114: 0xa4850090  sh          $a1, 0x90($a0)
    ctx->pc = 0x166114u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 144), (uint16_t)GPR_U32(ctx, 5));
    // 0x166118: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x166118u;
    {
        const bool branch_taken_0x166118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16611Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166118u;
        // 0x16611c: 0xac830030  sw          $v1, 0x30($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166118) {
            ctx->pc = 0x1662B8u;
            goto label_1662b8;
        }
    }
    ctx->pc = 0x166120u;
label_166120:
    // 0x166120: 0x90850094  lbu         $a1, 0x94($a0)
    ctx->pc = 0x166120u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 148)));
    // 0x166124: 0x94830090  lhu         $v1, 0x90($a0)
    ctx->pc = 0x166124u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 144)));
    // 0x166128: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x166128u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x16612c: 0x66001a  div         $zero, $v1, $a2
    ctx->pc = 0x16612cu;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x166130: 0x0  nop
    ctx->pc = 0x166130u;
    // NOP
    // 0x166134: 0x0  nop
    ctx->pc = 0x166134u;
    // NOP
    // 0x166138: 0x1812  mflo        $v1
    ctx->pc = 0x166138u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x16613c: 0x65082a  slt         $at, $v1, $a1
    ctx->pc = 0x16613cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x166140: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x166140u;
    {
        const bool branch_taken_0x166140 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x166140) {
            ctx->pc = 0x166150u;
            goto label_166150;
        }
    }
    ctx->pc = 0x166148u;
    // 0x166148: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x166148u;
    {
        const bool branch_taken_0x166148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16614Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166148u;
        // 0x16614c: 0xa0830023  sb          $v1, 0x23($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 35), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166148) {
            ctx->pc = 0x1662B8u;
            goto label_1662b8;
        }
    }
    ctx->pc = 0x166150u;
label_166150:
    // 0x166150: 0xa0850023  sb          $a1, 0x23($a0)
    ctx->pc = 0x166150u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 35), (uint8_t)GPR_U32(ctx, 5));
    // 0x166154: 0x94850098  lhu         $a1, 0x98($a0)
    ctx->pc = 0x166154u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 152)));
    // 0x166158: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x166158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16615c: 0xa4850090  sh          $a1, 0x90($a0)
    ctx->pc = 0x16615cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 144), (uint16_t)GPR_U32(ctx, 5));
    // 0x166160: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x166160u;
    {
        const bool branch_taken_0x166160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166160u;
        // 0x166164: 0xac830030  sw          $v1, 0x30($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166160) {
            ctx->pc = 0x1662B8u;
            goto label_1662b8;
        }
    }
    ctx->pc = 0x166168u;
label_166168:
    // 0x166168: 0x94830090  lhu         $v1, 0x90($a0)
    ctx->pc = 0x166168u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 144)));
    // 0x16616c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x16616Cu;
    {
        const bool branch_taken_0x16616c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16616c) {
            ctx->pc = 0x166180u;
            goto label_166180;
        }
    }
    ctx->pc = 0x166174u;
    // 0x166174: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x166174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x166178: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x166178u;
    {
        const bool branch_taken_0x166178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16617Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166178u;
        // 0x16617c: 0xa4830090  sh          $v1, 0x90($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 144), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166178) {
            ctx->pc = 0x1662B8u;
            goto label_1662b8;
        }
    }
    ctx->pc = 0x166180u;
label_166180:
    // 0x166180: 0x9483009a  lhu         $v1, 0x9A($a0)
    ctx->pc = 0x166180u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 154)));
    // 0x166184: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x166184u;
    {
        const bool branch_taken_0x166184 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x166188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166184u;
        // 0x166188: 0xa4830090  sh          $v1, 0x90($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 144), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166184) {
            ctx->pc = 0x166198u;
            goto label_166198;
        }
    }
    ctx->pc = 0x16618Cu;
    // 0x16618c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x16618cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x166190: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x166190u;
    {
        const bool branch_taken_0x166190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166190u;
        // 0x166194: 0xac830030  sw          $v1, 0x30($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166190) {
            ctx->pc = 0x1662B8u;
            goto label_1662b8;
        }
    }
    ctx->pc = 0x166198u;
label_166198:
    // 0x166198: 0x90850023  lbu         $a1, 0x23($a0)
    ctx->pc = 0x166198u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 35)));
    // 0x16619c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x16619cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1661a0: 0xa0850094  sb          $a1, 0x94($a0)
    ctx->pc = 0x1661a0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 148), (uint8_t)GPR_U32(ctx, 5));
    // 0x1661a4: 0xa0830095  sb          $v1, 0x95($a0)
    ctx->pc = 0x1661a4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 149), (uint8_t)GPR_U32(ctx, 3));
    // 0x1661a8: 0x9485009a  lhu         $a1, 0x9A($a0)
    ctx->pc = 0x1661a8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 154)));
    // 0x1661ac: 0x90830023  lbu         $v1, 0x23($a0)
    ctx->pc = 0x1661acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 35)));
    // 0x1661b0: 0x65082a  slt         $at, $v1, $a1
    ctx->pc = 0x1661b0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1661b4: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1661B4u;
    {
        const bool branch_taken_0x1661b4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1661b4) {
            ctx->pc = 0x1661C8u;
            goto label_1661c8;
        }
    }
    ctx->pc = 0x1661BCu;
    // 0x1661bc: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1661bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1661c0: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x1661C0u;
    {
        const bool branch_taken_0x1661c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1661C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1661C0u;
        // 0x1661c4: 0xac830030  sw          $v1, 0x30($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1661c0) {
            ctx->pc = 0x1662B8u;
            goto label_1662b8;
        }
    }
    ctx->pc = 0x1661C8u;
label_1661c8:
    // 0x1661c8: 0x65001a  div         $zero, $v1, $a1
    ctx->pc = 0x1661c8u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1661cc: 0x0  nop
    ctx->pc = 0x1661ccu;
    // NOP
    // 0x1661d0: 0x0  nop
    ctx->pc = 0x1661d0u;
    // NOP
    // 0x1661d4: 0x1810  mfhi        $v1
    ctx->pc = 0x1661d4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1661d8: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1661D8u;
    {
        const bool branch_taken_0x1661d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1661d8) {
            ctx->pc = 0x1661F0u;
            goto label_1661f0;
        }
    }
    ctx->pc = 0x1661E0u;
    // 0x1661e0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1661e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1661e4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1661E4u;
    {
        const bool branch_taken_0x1661e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1661E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1661E4u;
        // 0x1661e8: 0xac830030  sw          $v1, 0x30($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1661e4) {
            ctx->pc = 0x1661F8u;
            goto label_1661f8;
        }
    }
    ctx->pc = 0x1661ECu;
    // 0x1661ec: 0x0  nop
    ctx->pc = 0x1661ecu;
    // NOP
label_1661f0:
    // 0x1661f0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1661f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1661f4: 0xac830030  sw          $v1, 0x30($a0)
    ctx->pc = 0x1661f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 3));
label_1661f8:
    // 0x1661f8: 0x90850023  lbu         $a1, 0x23($a0)
    ctx->pc = 0x1661f8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 35)));
    // 0x1661fc: 0x9483009a  lhu         $v1, 0x9A($a0)
    ctx->pc = 0x1661fcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 154)));
    // 0x166200: 0xa3001a  div         $zero, $a1, $v1
    ctx->pc = 0x166200u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x166204: 0x0  nop
    ctx->pc = 0x166204u;
    // NOP
    // 0x166208: 0x0  nop
    ctx->pc = 0x166208u;
    // NOP
    // 0x16620c: 0x1812  mflo        $v1
    ctx->pc = 0x16620cu;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x166210: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x166210u;
    {
        const bool branch_taken_0x166210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166210u;
        // 0x166214: 0xa0830095  sb          $v1, 0x95($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 149), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166210) {
            ctx->pc = 0x1662B8u;
            goto label_1662b8;
        }
    }
    ctx->pc = 0x166218u;
label_166218:
    // 0x166218: 0x90850095  lbu         $a1, 0x95($a0)
    ctx->pc = 0x166218u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 149)));
    // 0x16621c: 0x90830023  lbu         $v1, 0x23($a0)
    ctx->pc = 0x16621cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 35)));
    // 0x166220: 0xa3082a  slt         $at, $a1, $v1
    ctx->pc = 0x166220u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x166224: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x166224u;
    {
        const bool branch_taken_0x166224 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x166224) {
            ctx->pc = 0x166240u;
            goto label_166240;
        }
    }
    ctx->pc = 0x16622Cu;
    // 0x16622c: 0x94830010  lhu         $v1, 0x10($a0)
    ctx->pc = 0x16622cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x166230: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x166230u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x166234: 0x10000094  b           . + 4 + (0x94 << 2)
    ctx->pc = 0x166234u;
    {
        const bool branch_taken_0x166234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166234u;
        // 0x166238: 0xa4830010  sh          $v1, 0x10($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 16), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166234) {
            ctx->pc = 0x166488u;
            goto label_166488;
        }
    }
    ctx->pc = 0x16623Cu;
    // 0x16623c: 0x0  nop
    ctx->pc = 0x16623cu;
    // NOP
label_166240:
    // 0x166240: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x166240u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x166244: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x166244u;
    {
        const bool branch_taken_0x166244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166244u;
        // 0x166248: 0xa0830023  sb          $v1, 0x23($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 35), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166244) {
            ctx->pc = 0x1662B8u;
            goto label_1662b8;
        }
    }
    ctx->pc = 0x16624Cu;
    // 0x16624c: 0x0  nop
    ctx->pc = 0x16624cu;
    // NOP
label_166250:
    // 0x166250: 0x94830090  lhu         $v1, 0x90($a0)
    ctx->pc = 0x166250u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 144)));
    // 0x166254: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x166254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x166258: 0xa4830090  sh          $v1, 0x90($a0)
    ctx->pc = 0x166258u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 144), (uint16_t)GPR_U32(ctx, 3));
    // 0x16625c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x16625cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x166260: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x166260u;
    {
        const bool branch_taken_0x166260 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x166260) {
            ctx->pc = 0x166278u;
            goto label_166278;
        }
    }
    ctx->pc = 0x166268u;
    // 0x166268: 0x94830010  lhu         $v1, 0x10($a0)
    ctx->pc = 0x166268u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x16626c: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x16626cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x166270: 0x10000085  b           . + 4 + (0x85 << 2)
    ctx->pc = 0x166270u;
    {
        const bool branch_taken_0x166270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166270u;
        // 0x166274: 0xa4830010  sh          $v1, 0x10($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 16), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166270) {
            ctx->pc = 0x166488u;
            goto label_166488;
        }
    }
    ctx->pc = 0x166278u;
label_166278:
    // 0x166278: 0x90860094  lbu         $a2, 0x94($a0)
    ctx->pc = 0x166278u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 148)));
    // 0x16627c: 0x94850090  lhu         $a1, 0x90($a0)
    ctx->pc = 0x16627cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 144)));
    // 0x166280: 0x9483009a  lhu         $v1, 0x9A($a0)
    ctx->pc = 0x166280u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 154)));
    // 0x166284: 0xc52818  mult        $a1, $a2, $a1
    ctx->pc = 0x166284u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x166288: 0xa3001a  div         $zero, $a1, $v1
    ctx->pc = 0x166288u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x16628c: 0x0  nop
    ctx->pc = 0x16628cu;
    // NOP
    // 0x166290: 0x0  nop
    ctx->pc = 0x166290u;
    // NOP
    // 0x166294: 0x1812  mflo        $v1
    ctx->pc = 0x166294u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x166298: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x166298u;
    {
        const bool branch_taken_0x166298 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x166298) {
            ctx->pc = 0x1662B0u;
            goto label_1662b0;
        }
    }
    ctx->pc = 0x1662A0u;
    // 0x1662a0: 0x94830010  lhu         $v1, 0x10($a0)
    ctx->pc = 0x1662a0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1662a4: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x1662a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x1662a8: 0x10000077  b           . + 4 + (0x77 << 2)
    ctx->pc = 0x1662A8u;
    {
        const bool branch_taken_0x1662a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1662ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1662A8u;
        // 0x1662ac: 0xa4830010  sh          $v1, 0x10($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 16), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1662a8) {
            ctx->pc = 0x166488u;
            goto label_166488;
        }
    }
    ctx->pc = 0x1662B0u;
label_1662b0:
    // 0x1662b0: 0xa0830023  sb          $v1, 0x23($a0)
    ctx->pc = 0x1662b0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 35), (uint8_t)GPR_U32(ctx, 3));
    // 0x1662b4: 0x0  nop
    ctx->pc = 0x1662b4u;
    // NOP
label_1662b8:
    // 0x1662b8: 0x908600a0  lbu         $a2, 0xA0($a0)
    ctx->pc = 0x1662b8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 160)));
    // 0x1662bc: 0x10c00012  beqz        $a2, . + 4 + (0x12 << 2)
    ctx->pc = 0x1662BCu;
    {
        const bool branch_taken_0x1662bc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1662C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1662BCu;
        // 0x1662c0: 0x908700a1  lbu         $a3, 0xA1($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 161)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1662bc) {
            ctx->pc = 0x166308u;
            goto label_166308;
        }
    }
    ctx->pc = 0x1662C4u;
    // 0x1662c4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1662c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1662c8: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1662c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1662cc: 0x8c25cebc  lw          $a1, -0x3144($at)
    ctx->pc = 0x1662ccu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x1662d0: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x1662d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x1662d4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1662D4u;
    {
        const bool branch_taken_0x1662d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1662D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1662D4u;
        // 0x1662d8: 0x30c300ff  andi        $v1, $a2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1662d4) {
            ctx->pc = 0x1662F0u;
            goto label_1662f0;
        }
    }
    ctx->pc = 0x1662DCu;
    // 0x1662dc: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x1662dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1662e0: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1662E0u;
    {
        const bool branch_taken_0x1662e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1662e0) {
            ctx->pc = 0x166308u;
            goto label_166308;
        }
    }
    ctx->pc = 0x1662E8u;
    // 0x1662e8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1662E8u;
    {
        const bool branch_taken_0x1662e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1662ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1662E8u;
        // 0x1662ec: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1662e8) {
            ctx->pc = 0x166338u;
            goto label_166338;
        }
    }
    ctx->pc = 0x1662F0u;
label_1662f0:
    // 0x1662f0: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x1662f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x1662f4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1662f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1662f8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1662F8u;
    {
        const bool branch_taken_0x1662f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1662FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1662F8u;
        // 0x1662fc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1662f8) {
            ctx->pc = 0x166308u;
            goto label_166308;
        }
    }
    ctx->pc = 0x166300u;
    // 0x166300: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x166300u;
    {
        const bool branch_taken_0x166300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x166300) {
            ctx->pc = 0x166338u;
            goto label_166338;
        }
    }
    ctx->pc = 0x166308u;
label_166308:
    // 0x166308: 0x10e00009  beqz        $a3, . + 4 + (0x9 << 2)
    ctx->pc = 0x166308u;
    {
        const bool branch_taken_0x166308 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x16630Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166308u;
        // 0x16630c: 0x3c01007e  lui         $at, 0x7E (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166308) {
            ctx->pc = 0x166330u;
            goto label_166330;
        }
    }
    ctx->pc = 0x166310u;
    // 0x166310: 0x30e500ff  andi        $a1, $a3, 0xFF
    ctx->pc = 0x166310u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x166314: 0x902368a3  lbu         $v1, 0x68A3($at)
    ctx->pc = 0x166314u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 26787)));
    // 0x166318: 0xa31827  nor         $v1, $a1, $v1
    ctx->pc = 0x166318u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 5) | GPR_U64(ctx, 3)));
    // 0x16631c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x16631cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x166320: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x166320u;
    {
        const bool branch_taken_0x166320 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x166324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166320u;
        // 0x166324: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166320) {
            ctx->pc = 0x166330u;
            goto label_166330;
        }
    }
    ctx->pc = 0x166328u;
    // 0x166328: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x166328u;
    {
        const bool branch_taken_0x166328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x166328) {
            ctx->pc = 0x166338u;
            goto label_166338;
        }
    }
    ctx->pc = 0x166330u;
label_166330:
    // 0x166330: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x166330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x166334: 0x0  nop
    ctx->pc = 0x166334u;
    // NOP
label_166338:
    // 0x166338: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x166338u;
    {
        const bool branch_taken_0x166338 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x166338) {
            ctx->pc = 0x166350u;
            goto label_166350;
        }
    }
    ctx->pc = 0x166340u;
    // 0x166340: 0x94830010  lhu         $v1, 0x10($a0)
    ctx->pc = 0x166340u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x166344: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x166344u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x166348: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x166348u;
    {
        const bool branch_taken_0x166348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16634Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166348u;
        // 0x16634c: 0xa4830010  sh          $v1, 0x10($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 16), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166348) {
            ctx->pc = 0x166360u;
            goto label_166360;
        }
    }
    ctx->pc = 0x166350u;
label_166350:
    // 0x166350: 0x94830010  lhu         $v1, 0x10($a0)
    ctx->pc = 0x166350u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x166354: 0x3063fffe  andi        $v1, $v1, 0xFFFE
    ctx->pc = 0x166354u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65534);
    // 0x166358: 0xa4830010  sh          $v1, 0x10($a0)
    ctx->pc = 0x166358u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x16635c: 0x0  nop
    ctx->pc = 0x16635cu;
    // NOP
label_166360:
    // 0x166360: 0x84850028  lh          $a1, 0x28($a0)
    ctx->pc = 0x166360u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x166364: 0x8483009c  lh          $v1, 0x9C($a0)
    ctx->pc = 0x166364u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 156)));
    // 0x166368: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x166368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x16636c: 0x1c600006  bgtz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x16636Cu;
    {
        const bool branch_taken_0x16636c = (GPR_S64(ctx, 3) > 0);
        if (branch_taken_0x16636c) {
            ctx->pc = 0x166388u;
            goto label_166388;
        }
    }
    ctx->pc = 0x166374u;
    // 0x166374: 0x94830010  lhu         $v1, 0x10($a0)
    ctx->pc = 0x166374u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x166378: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x166378u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x16637c: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x16637Cu;
    {
        const bool branch_taken_0x16637c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16637Cu;
        // 0x166380: 0xa4830010  sh          $v1, 0x10($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 16), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16637c) {
            ctx->pc = 0x166488u;
            goto label_166488;
        }
    }
    ctx->pc = 0x166384u;
    // 0x166384: 0x0  nop
    ctx->pc = 0x166384u;
    // NOP
label_166388:
    // 0x166388: 0xa4830028  sh          $v1, 0x28($a0)
    ctx->pc = 0x166388u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 40), (uint16_t)GPR_U32(ctx, 3));
    // 0x16638c: 0x8485002a  lh          $a1, 0x2A($a0)
    ctx->pc = 0x16638cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 42)));
    // 0x166390: 0x8483009e  lh          $v1, 0x9E($a0)
    ctx->pc = 0x166390u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 158)));
    // 0x166394: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x166394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x166398: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x166398u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x16639c: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x16639cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x1663a0: 0xa483002a  sh          $v1, 0x2A($a0)
    ctx->pc = 0x1663a0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 42), (uint16_t)GPR_U32(ctx, 3));
    // 0x1663a4: 0x908300a8  lbu         $v1, 0xA8($a0)
    ctx->pc = 0x1663a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 168)));
    // 0x1663a8: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x1663a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x1663ac: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x1663acu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1663b0: 0x1060002b  beqz        $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x1663B0u;
    {
        const bool branch_taken_0x1663b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1663b0) {
            ctx->pc = 0x166460u;
            goto label_166460;
        }
    }
    ctx->pc = 0x1663B8u;
    // 0x1663b8: 0x808300aa  lb          $v1, 0xAA($a0)
    ctx->pc = 0x1663b8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 170)));
    // 0x1663bc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1663bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1663c0: 0xa08300aa  sb          $v1, 0xAA($a0)
    ctx->pc = 0x1663c0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 170), (uint8_t)GPR_U32(ctx, 3));
    // 0x1663c4: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x1663c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x1663c8: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x1663c8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x1663cc: 0x1c600018  bgtz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x1663CCu;
    {
        const bool branch_taken_0x1663cc = (GPR_S64(ctx, 3) > 0);
        if (branch_taken_0x1663cc) {
            ctx->pc = 0x166430u;
            goto label_166430;
        }
    }
    ctx->pc = 0x1663D4u;
    // 0x1663d4: 0x908700ab  lbu         $a3, 0xAB($a0)
    ctx->pc = 0x1663d4u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 171)));
    // 0x1663d8: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x1663d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1663dc: 0x908500a9  lbu         $a1, 0xA9($a0)
    ctx->pc = 0x1663dcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 169)));
    // 0x1663e0: 0x908600a8  lbu         $a2, 0xA8($a0)
    ctx->pc = 0x1663e0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 168)));
    // 0x1663e4: 0xe53821  addu        $a3, $a3, $a1
    ctx->pc = 0x1663e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x1663e8: 0x30c50030  andi        $a1, $a2, 0x30
    ctx->pc = 0x1663e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)48);
    // 0x1663ec: 0x52903  sra         $a1, $a1, 4
    ctx->pc = 0x1663ecu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 4));
    // 0x1663f0: 0xa32807  srav        $a1, $v1, $a1
    ctx->pc = 0x1663f0u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 5) & 0x1F));
    // 0x1663f4: 0xa7082b  sltu        $at, $a1, $a3
    ctx->pc = 0x1663f4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x1663f8: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x1663F8u;
    {
        const bool branch_taken_0x1663f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1663FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1663F8u;
        // 0x1663fc: 0x30c30080  andi        $v1, $a2, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1663f8) {
            ctx->pc = 0x166420u;
            goto label_166420;
        }
    }
    ctx->pc = 0x166400u;
    // 0x166400: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x166400u;
    {
        const bool branch_taken_0x166400 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x166404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166400u;
        // 0x166404: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166400) {
            ctx->pc = 0x166410u;
            goto label_166410;
        }
    }
    ctx->pc = 0x166408u;
    // 0x166408: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x166408u;
    {
        const bool branch_taken_0x166408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x166408) {
            ctx->pc = 0x166420u;
            goto label_166420;
        }
    }
    ctx->pc = 0x166410u;
label_166410:
    // 0x166410: 0x30c300bf  andi        $v1, $a2, 0xBF
    ctx->pc = 0x166410u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)191);
    // 0x166414: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x166414u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166418: 0xa08300a8  sb          $v1, 0xA8($a0)
    ctx->pc = 0x166418u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 168), (uint8_t)GPR_U32(ctx, 3));
    // 0x16641c: 0x0  nop
    ctx->pc = 0x16641cu;
    // NOP
label_166420:
    // 0x166420: 0xa08700ab  sb          $a3, 0xAB($a0)
    ctx->pc = 0x166420u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 171), (uint8_t)GPR_U32(ctx, 7));
    // 0x166424: 0x908300a8  lbu         $v1, 0xA8($a0)
    ctx->pc = 0x166424u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 168)));
    // 0x166428: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x166428u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x16642c: 0xa08300aa  sb          $v1, 0xAA($a0)
    ctx->pc = 0x16642cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 170), (uint8_t)GPR_U32(ctx, 3));
label_166430:
    // 0x166430: 0x908700ab  lbu         $a3, 0xAB($a0)
    ctx->pc = 0x166430u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 171)));
    // 0x166434: 0x8c8600ac  lw          $a2, 0xAC($a0)
    ctx->pc = 0x166434u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 172)));
    // 0x166438: 0x3c03ff00  lui         $v1, 0xFF00
    ctx->pc = 0x166438u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65280 << 16));
    // 0x16643c: 0x8c850020  lw          $a1, 0x20($a0)
    ctx->pc = 0x16643cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x166440: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x166440u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x166444: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x166444u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x166448: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x166448u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x16644c: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x16644cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x166450: 0x52a3c  dsll32      $a1, $a1, 8
    ctx->pc = 0x166450u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 8));
    // 0x166454: 0x52a3e  dsrl32      $a1, $a1, 8
    ctx->pc = 0x166454u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 8));
    // 0x166458: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x166458u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x16645c: 0xac830020  sw          $v1, 0x20($a0)
    ctx->pc = 0x16645cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 3));
label_166460:
    // 0x166460: 0x94830092  lhu         $v1, 0x92($a0)
    ctx->pc = 0x166460u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 146)));
    // 0x166464: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x166464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x166468: 0xa4830092  sh          $v1, 0x92($a0)
    ctx->pc = 0x166468u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 146), (uint16_t)GPR_U32(ctx, 3));
    // 0x16646c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x16646cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x166470: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x166470u;
    {
        const bool branch_taken_0x166470 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x166470) {
            ctx->pc = 0x166488u;
            goto label_166488;
        }
    }
    ctx->pc = 0x166478u;
    // 0x166478: 0x94830010  lhu         $v1, 0x10($a0)
    ctx->pc = 0x166478u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x16647c: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x16647cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x166480: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x166480u;
    {
        const bool branch_taken_0x166480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166480u;
        // 0x166484: 0xa4830010  sh          $v1, 0x10($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 16), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166480) {
            ctx->pc = 0x166488u;
            goto label_166488;
        }
    }
    ctx->pc = 0x166488u;
label_166488:
    // 0x166488: 0x3e00008  jr          $ra
    ctx->pc = 0x166488u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x166488u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x166490u;
}
