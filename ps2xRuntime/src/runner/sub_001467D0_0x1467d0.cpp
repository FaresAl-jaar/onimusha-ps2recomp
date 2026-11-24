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

// Function: sub_001467D0
// Address: 0x1467d0 - 0x1468a8
void sub_001467D0_0x1467d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001467D0_0x1467d0");
#endif

    switch (ctx->pc) {
        case 0x1467f0u: goto label_1467f0;
        case 0x1467f8u: goto label_1467f8;
        case 0x146820u: goto label_146820;
        case 0x146838u: goto label_146838;
        case 0x146878u: goto label_146878;
        case 0x146890u: goto label_146890;
        default: break;
    }

    ctx->pc = 0x1467d0u;

    // 0x1467d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1467d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1467d4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1467d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1467d8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1467d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1467dc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1467dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1467e0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1467e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1467e4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1467e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1467e8: 0xc0518bc  jal         func_1462F0
    ctx->pc = 0x1467E8u;
    SET_GPR_U32(ctx, 31, 0x1467F0u);
    ctx->pc = 0x1467ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1467E8u;
    // 0x1467ec: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1462F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1462F0u, 0x1467E8u, 0x1467F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1467F0u;
label_1467f0:
    // 0x1467f0: 0x26500250  addiu       $s0, $s2, 0x250
    ctx->pc = 0x1467f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 592));
    // 0x1467f4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1467f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1467f8:
    // 0x1467f8: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x1467f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x1467fc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1467FCu;
    {
        const bool branch_taken_0x1467fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1467fc) {
            ctx->pc = 0x146820u;
            goto label_146820;
        }
    }
    ctx->pc = 0x146804u;
    // 0x146804: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x146804u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x146808: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x146808u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x14680c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14680Cu;
    {
        const bool branch_taken_0x14680c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x146810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14680Cu;
        // 0x146810: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14680c) {
            ctx->pc = 0x146820u;
            goto label_146820;
        }
    }
    ctx->pc = 0x146814u;
    // 0x146814: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x146814u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x146818: 0xc051c08  jal         func_147020
    ctx->pc = 0x146818u;
    SET_GPR_U32(ctx, 31, 0x146820u);
    ctx->pc = 0x14681Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146818u;
    // 0x14681c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147020u, 0x146818u, 0x146820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146820u;
label_146820:
    // 0x146820: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x146820u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x146824: 0x2e220004  sltiu       $v0, $s1, 0x4
    ctx->pc = 0x146824u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x146828: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x146828u;
    {
        const bool branch_taken_0x146828 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14682Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146828u;
        // 0x14682c: 0x26100038  addiu       $s0, $s0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146828) {
            ctx->pc = 0x1467F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1467f8;
        }
    }
    ctx->pc = 0x146830u;
    // 0x146830: 0x26510100  addiu       $s1, $s2, 0x100
    ctx->pc = 0x146830u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 256));
    // 0x146834: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x146834u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_146838:
    // 0x146838: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x146838u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x14683c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x14683cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x146840: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x146840u;
    {
        const bool branch_taken_0x146840 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x146840) {
            ctx->pc = 0x146878u;
            goto label_146878;
        }
    }
    ctx->pc = 0x146848u;
    // 0x146848: 0x92230001  lbu         $v1, 0x1($s1)
    ctx->pc = 0x146848u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x14684c: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x14684cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x146850: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x146850u;
    {
        const bool branch_taken_0x146850 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x146850) {
            ctx->pc = 0x146878u;
            goto label_146878;
        }
    }
    ctx->pc = 0x146858u;
    // 0x146858: 0x8e220044  lw          $v0, 0x44($s1)
    ctx->pc = 0x146858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x14685c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x14685Cu;
    {
        const bool branch_taken_0x14685c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14685c) {
            ctx->pc = 0x146878u;
            goto label_146878;
        }
    }
    ctx->pc = 0x146864u;
    // 0x146864: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x146864u;
    {
        const bool branch_taken_0x146864 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x146868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146864u;
        // 0x146868: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146864) {
            ctx->pc = 0x146878u;
            goto label_146878;
        }
    }
    ctx->pc = 0x14686Cu;
    // 0x14686c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x14686cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x146870: 0xc051c08  jal         func_147020
    ctx->pc = 0x146870u;
    SET_GPR_U32(ctx, 31, 0x146878u);
    ctx->pc = 0x146874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146870u;
    // 0x146874: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147020u, 0x146870u, 0x146878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146878u;
label_146878:
    // 0x146878: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x146878u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x14687c: 0x2e020004  sltiu       $v0, $s0, 0x4
    ctx->pc = 0x14687cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x146880: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x146880u;
    {
        const bool branch_taken_0x146880 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x146884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146880u;
        // 0x146884: 0x26310054  addiu       $s1, $s1, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 84));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146880) {
            ctx->pc = 0x146838u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_146838;
        }
    }
    ctx->pc = 0x146888u;
    // 0x146888: 0xc051c54  jal         func_147150
    ctx->pc = 0x146888u;
    SET_GPR_U32(ctx, 31, 0x146890u);
    ctx->pc = 0x14688Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146888u;
    // 0x14688c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147150u, 0x146888u, 0x146890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146890u;
label_146890:
    // 0x146890: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x146890u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x146894: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x146894u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x146898: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x146898u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14689c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14689cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1468a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1468A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1468A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1468A0u;
        // 0x1468a4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1468A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1468A8u;
}
