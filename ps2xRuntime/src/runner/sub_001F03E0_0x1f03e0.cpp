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

// Function: sub_001F03E0
// Address: 0x1f03e0 - 0x1f0490
void sub_001F03E0_0x1f03e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F03E0_0x1f03e0");
#endif

    switch (ctx->pc) {
        case 0x1f0408u: goto label_1f0408;
        case 0x1f0454u: goto label_1f0454;
        default: break;
    }

    ctx->pc = 0x1f03e0u;

    // 0x1f03e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f03e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f03e4: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x1f03e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x1f03e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f03e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1f03ec: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x1f03ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x1f03f0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f03f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1f03f4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1f03f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f03f8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f03f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f03fc: 0x24a55f70  addiu       $a1, $a1, 0x5F70
    ctx->pc = 0x1f03fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24432));
    // 0x1f0400: 0x94246ac4  lhu         $a0, 0x6AC4($at)
    ctx->pc = 0x1f0400u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)FAST_READ16(0x7E6AC4u));
    // 0x1f0404: 0x0  nop
    ctx->pc = 0x1f0404u;
    // NOP
label_1f0408:
    // 0x1f0408: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x1f0408u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1f040c: 0x14830018  bne         $a0, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x1F040Cu;
    {
        const bool branch_taken_0x1f040c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f040c) {
            ctx->pc = 0x1F0470u;
            goto label_1f0470;
        }
    }
    ctx->pc = 0x1F0414u;
    // 0x1f0414: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x1f0414u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x1f0418: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x1f0418u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1f041c: 0x24425f72  addiu       $v0, $v0, 0x5F72
    ctx->pc = 0x1f041cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24434));
    // 0x1f0420: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f0420u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1f0424: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1f0424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f0428: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1f0428u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1f042c: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x1f042cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f0430: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x1f0430u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x1f0434: 0x8c25a3c0  lw          $a1, -0x5C40($at)
    ctx->pc = 0x1f0434u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294943680)));
    // 0x1f0438: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x1f0438u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x1f043c: 0x24844060  addiu       $a0, $a0, 0x4060
    ctx->pc = 0x1f043cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16480));
    // 0x1f0440: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1f0440u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0444: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1f0444u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0448: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1f0448u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f044c: 0xc0cea1c  jal         func_33A870
    ctx->pc = 0x1F044Cu;
    SET_GPR_U32(ctx, 31, 0x1F0454u);
    ctx->pc = 0x1F0450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F044Cu;
    // 0x1f0450: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33A870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33A870u, 0x1F044Cu, 0x1F0454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0454u;
label_1f0454:
    // 0x1f0454: 0x9203004f  lbu         $v1, 0x4F($s0)
    ctx->pc = 0x1f0454u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 79)));
    // 0x1f0458: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x1f0458u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x1f045c: 0xa203004f  sb          $v1, 0x4F($s0)
    ctx->pc = 0x1f045cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 79), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f0460: 0x9203004f  lbu         $v1, 0x4F($s0)
    ctx->pc = 0x1f0460u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 79)));
    // 0x1f0464: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x1f0464u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x1f0468: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1F0468u;
    {
        const bool branch_taken_0x1f0468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F046Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0468u;
        // 0x1f046c: 0xa203004f  sb          $v1, 0x4F($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 79), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0468) {
            ctx->pc = 0x1F0480u;
            goto label_1f0480;
        }
    }
    ctx->pc = 0x1F0470u;
label_1f0470:
    // 0x1f0470: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1f0470u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1f0474: 0x2ce3000f  sltiu       $v1, $a3, 0xF
    ctx->pc = 0x1f0474u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
    // 0x1f0478: 0x1460ffe3  bnez        $v1, . + 4 + (-0x1D << 2)
    ctx->pc = 0x1F0478u;
    {
        const bool branch_taken_0x1f0478 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F047Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0478u;
        // 0x1f047c: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0478) {
            ctx->pc = 0x1F0408u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f0408;
        }
    }
    ctx->pc = 0x1F0480u;
label_1f0480:
    // 0x1f0480: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f0480u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f0484: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f0484u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f0488: 0x3e00008  jr          $ra
    ctx->pc = 0x1F0488u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F048Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0488u;
        // 0x1f048c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F0488u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F0490u;
}
