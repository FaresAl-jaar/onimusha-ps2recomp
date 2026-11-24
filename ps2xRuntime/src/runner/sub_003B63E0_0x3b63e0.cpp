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

// Function: sub_003B63E0
// Address: 0x3b63e0 - 0x3b64c4
void sub_003B63E0_0x3b63e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B63E0_0x3b63e0");
#endif

    switch (ctx->pc) {
        case 0x3b641cu: goto label_3b641c;
        case 0x3b64a8u: goto label_3b64a8;
        default: break;
    }

    ctx->pc = 0x3b63e0u;

    // 0x3b63e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3b63e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3b63e4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3b63e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x3b63e8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3b63e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3b63ec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3b63ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3b63f0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3b63f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b63f4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3b63f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3b63f8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3b63f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b63fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3b63fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3b6400: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x3b6400u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b6404: 0x11200007  beqz        $t1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3B6404u;
    {
        const bool branch_taken_0x3b6404 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B6408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6404u;
        // 0x3b6408: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b6404) {
            ctx->pc = 0x3B6424u;
            goto label_3b6424;
        }
    }
    ctx->pc = 0x3B640Cu;
    // 0x3b640c: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x3b640cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x3b6410: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x3b6410u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b6414: 0xc0bccf8  jal         func_2F33E0
    ctx->pc = 0x3B6414u;
    SET_GPR_U32(ctx, 31, 0x3B641Cu);
    ctx->pc = 0x3B6418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6414u;
    // 0x3b6418: 0x2484bb30  addiu       $a0, $a0, -0x44D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F33E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F33E0u, 0x3B6414u, 0x3B641Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B641Cu;
label_3b641c:
    // 0x3b641c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3B641Cu;
    {
        const bool branch_taken_0x3b641c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b641c) {
            ctx->pc = 0x3B6428u;
            goto label_3b6428;
        }
    }
    ctx->pc = 0x3B6424u;
label_3b6424:
    // 0x3b6424: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x3b6424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_3b6428:
    // 0x3b6428: 0x3c04004e  lui         $a0, 0x4E
    ctx->pc = 0x3b6428u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)78 << 16));
    // 0x3b642c: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x3b642cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3b6430: 0x24846a3c  addiu       $a0, $a0, 0x6A3C
    ctx->pc = 0x3b6430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27196));
    // 0x3b6434: 0x84830008  lh          $v1, 0x8($a0)
    ctx->pc = 0x3b6434u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x4E6A44u));
    // 0x3b6438: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B6438u;
    {
        const bool branch_taken_0x3b6438 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x3B643Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6438u;
        // 0x3b643c: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b6438) {
            ctx->pc = 0x3B6448u;
            goto label_3b6448;
        }
    }
    ctx->pc = 0x3B6440u;
    // 0x3b6440: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x3b6440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3b6444: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x3b6444u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_3b6448:
    // 0x3b6448: 0x8483000a  lh          $v1, 0xA($a0)
    ctx->pc = 0x3b6448u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x3b644c: 0x2623023  subu        $a2, $s3, $v0
    ctx->pc = 0x3b644cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x3b6450: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B6450u;
    {
        const bool branch_taken_0x3b6450 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x3B6454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6450u;
        // 0x3b6454: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b6450) {
            ctx->pc = 0x3B6460u;
            goto label_3b6460;
        }
    }
    ctx->pc = 0x3B6458u;
    // 0x3b6458: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x3b6458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3b645c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x3b645cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_3b6460:
    // 0x3b6460: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x3b6460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3b6464: 0x2423823  subu        $a3, $s2, $v0
    ctx->pc = 0x3b6464u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x3b6468: 0x103001a  div         $zero, $t0, $v1
    ctx->pc = 0x3b6468u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 8);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3b646c: 0x3c029249  lui         $v0, 0x9249
    ctx->pc = 0x3b646cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37449 << 16));
    // 0x3b6470: 0x34422493  ori         $v0, $v0, 0x2493
    ctx->pc = 0x3b6470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9363);
    // 0x3b6474: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x3b6474u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b6478: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3b6478u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b647c: 0x5010  mfhi        $t2
    ctx->pc = 0x3b647cu;
    SET_GPR_U64(ctx, 10, ctx->hi);
    // 0x3b6480: 0x81fc2  srl         $v1, $t0, 31
    ctx->pc = 0x3b6480u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
    // 0x3b6484: 0x480018  mult        $zero, $v0, $t0
    ctx->pc = 0x3b6484u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x3b6488: 0x0  nop
    ctx->pc = 0x3b6488u;
    // NOP
    // 0x3b648c: 0x0  nop
    ctx->pc = 0x3b648cu;
    // NOP
    // 0x3b6490: 0x1010  mfhi        $v0
    ctx->pc = 0x3b6490u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x3b6494: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x3b6494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x3b6498: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x3b6498u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x3b649c: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x3b649cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b64a0: 0xc09c6a4  jal         func_271A90
    ctx->pc = 0x3B64A0u;
    SET_GPR_U32(ctx, 31, 0x3B64A8u);
    ctx->pc = 0x3B64A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B64A0u;
    // 0x3b64a4: 0x435821  addu        $t3, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x271A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271A90u, 0x3B64A0u, 0x3B64A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B64A8u;
label_3b64a8:
    // 0x3b64a8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3b64a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3b64ac: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3b64acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3b64b0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3b64b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b64b4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3b64b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b64b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3b64b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b64bc: 0x3e00008  jr          $ra
    ctx->pc = 0x3B64BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B64C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B64BCu;
        // 0x3b64c0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B64BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B64C4u;
}
