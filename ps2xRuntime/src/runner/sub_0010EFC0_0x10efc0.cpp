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

// Function: sub_0010EFC0
// Address: 0x10efc0 - 0x10f058
void sub_0010EFC0_0x10efc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010EFC0_0x10efc0");
#endif

    switch (ctx->pc) {
        case 0x10efd4u: goto label_10efd4;
        case 0x10efe8u: goto label_10efe8;
        case 0x10f044u: goto label_10f044;
        default: break;
    }

    ctx->pc = 0x10efc0u;

    // 0x10efc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10efc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10efc4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10efc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10efc8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10efc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10efcc: 0x2403ffd1  addiu       $v1, $zero, -0x2F
    ctx->pc = 0x10efccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967249));
    // 0x10efd0: 0xc  syscall     0
    ctx->pc = 0x10efd0u;
    ctx->pc = 0x10EFD4u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_10efd4:
    // 0x10efd4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10efd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10efd8: 0x12040005  beq         $s0, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10EFD8u;
    {
        const bool branch_taken_0x10efd8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 4));
        ctx->pc = 0x10EFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EFD8u;
        // 0x10efdc: 0x2e020100  sltiu       $v0, $s0, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10efd8) {
            ctx->pc = 0x10EFF0u;
            goto label_10eff0;
        }
    }
    ctx->pc = 0x10EFE0u;
    // 0x10efe0: 0xc0437d8  jal         func_10DF60
    ctx->pc = 0x10EFE0u;
    SET_GPR_U32(ctx, 31, 0x10EFE8u);
    ctx->pc = 0x10DF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DF60u, 0x10EFE0u, 0x10EFE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EFE8u;
label_10efe8:
    // 0x10efe8: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x10EFE8u;
    {
        const bool branch_taken_0x10efe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EFE8u;
        // 0x10efec: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10efe8) {
            ctx->pc = 0x10F04Cu;
            goto label_10f04c;
        }
    }
    ctx->pc = 0x10EFF0u;
label_10eff0:
    // 0x10eff0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10EFF0u;
    {
        const bool branch_taken_0x10eff0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EFF0u;
        // 0x10eff4: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10eff0) {
            ctx->pc = 0x10F004u;
            goto label_10f004;
        }
    }
    ctx->pc = 0x10EFF8u;
    // 0x10eff8: 0x8c432a98  lw          $v1, 0x2A98($v0)
    ctx->pc = 0x10eff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10904)));
    // 0x10effc: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x10EFFCu;
    {
        const bool branch_taken_0x10effc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x10F000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EFFCu;
        // 0x10f000: 0x3c030069  lui         $v1, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10effc) {
            ctx->pc = 0x10F00Cu;
            goto label_10f00c;
        }
    }
    ctx->pc = 0x10F004u;
label_10f004:
    // 0x10f004: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x10F004u;
    {
        const bool branch_taken_0x10f004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F004u;
        // 0x10f008: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f004) {
            ctx->pc = 0x10F048u;
            goto label_10f048;
        }
    }
    ctx->pc = 0x10F00Cu;
label_10f00c:
    // 0x10f00c: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x10f00cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x10f010: 0x2463c888  addiu       $v1, $v1, -0x3778
    ctx->pc = 0x10f010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953096));
    // 0x10f014: 0x8ca4c880  lw          $a0, -0x3780($a1)
    ctx->pc = 0x10f014u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x68C880u));
    // 0x10f018: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x10f018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x10f01c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x10f01cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10f020: 0x304201ff  andi        $v0, $v0, 0x1FF
    ctx->pc = 0x10f020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)511);
    // 0x10f024: 0x23040  sll         $a2, $v0, 1
    ctx->pc = 0x10f024u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x10f028: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x10f028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x10f02c: 0x662821  addu        $a1, $v1, $a2
    ctx->pc = 0x10f02cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x10f030: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x10f030u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x10f034: 0xa0a70008  sb          $a3, 0x8($a1)
    ctx->pc = 0x10f034u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 8), (uint8_t)GPR_U32(ctx, 7));
    // 0x10f038: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x10f038u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f03c: 0xc043804  jal         func_10E010
    ctx->pc = 0x10F03Cu;
    SET_GPR_U32(ctx, 31, 0x10F044u);
    ctx->pc = 0x10F040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F03Cu;
    // 0x10f040: 0xa0700009  sb          $s0, 0x9($v1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 3), 9), (uint8_t)GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E010u, 0x10F03Cu, 0x10F044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F044u;
label_10f044:
    // 0x10f044: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x10f044u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10f048:
    // 0x10f048: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10f048u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_10f04c:
    // 0x10f04c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10f04cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10f050: 0x3e00008  jr          $ra
    ctx->pc = 0x10F050u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10F054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F050u;
        // 0x10f054: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F050u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F058u;
}
