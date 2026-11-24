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

// Function: sub_0020EFA8
// Address: 0x20efa8 - 0x20f060
void sub_0020EFA8_0x20efa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020EFA8_0x20efa8");
#endif

    switch (ctx->pc) {
        case 0x20effcu: goto label_20effc;
        case 0x20f028u: goto label_20f028;
        default: break;
    }

    ctx->pc = 0x20efa8u;

    // 0x20efa8: 0x810c0  sll         $v0, $t0, 3
    ctx->pc = 0x20efa8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x20efac: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x20efacu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x20efb0: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x20efb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x20efb4: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x20efb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x20efb8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20efb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20efbc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x20efbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x20efc0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x20efc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x20efc4: 0xc38821  addu        $s1, $a2, $v1
    ctx->pc = 0x20efc4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x20efc8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x20efc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x20efcc: 0xe39021  addu        $s2, $a3, $v1
    ctx->pc = 0x20efccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x20efd0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x20efd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x20efd4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x20efd4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20efd8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x20efd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x20efdc: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x20efdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x20efe0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x20efe0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x20efe4: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x20efe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x20efe8: 0xa28021  addu        $s0, $a1, $v0
    ctx->pc = 0x20efe8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x20efec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x20efecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20eff0: 0x4302b  sltu        $a2, $zero, $a0
    ctx->pc = 0x20eff0u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x20eff4: 0xc083c76  jal         func_20F1D8
    ctx->pc = 0x20EFF4u;
    SET_GPR_U32(ctx, 31, 0x20EFFCu);
    ctx->pc = 0x20EFF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20EFF4u;
    // 0x20eff8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20F1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20F1D8u, 0x20EFF4u, 0x20EFFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EFFCu;
label_20effc:
    // 0x20effc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x20effcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x20f000: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x20f000u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x20f004: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x20f004u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x20f008: 0x266216b0  addiu       $v0, $s3, 0x16B0
    ctx->pc = 0x20f008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 5808));
    // 0x20f00c: 0x26731ea8  addiu       $s3, $s3, 0x1EA8
    ctx->pc = 0x20f00cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 7848));
    // 0x20f010: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x20f010u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x20f014: 0xae040004  sw          $a0, 0x4($s0)
    ctx->pc = 0x20f014u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
    // 0x20f018: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x20f018u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x20f01c: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x20f01cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x20f020: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x20f020u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x20f024: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x20f024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_20f028:
    // 0x20f028: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x20f028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x20f02c: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x20f02cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    // 0x20f030: 0x0  nop
    ctx->pc = 0x20f030u;
    // NOP
    // 0x20f034: 0x0  nop
    ctx->pc = 0x20f034u;
    // NOP
    // 0x20f038: 0x0  nop
    ctx->pc = 0x20f038u;
    // NOP
    // 0x20f03c: 0x441fffa  bgez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x20F03Cu;
    {
        const bool branch_taken_0x20f03c = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x20F040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F03Cu;
        // 0x20f040: 0x2673ff78  addiu       $s3, $s3, -0x88 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f03c) {
            ctx->pc = 0x20F028u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20f028;
        }
    }
    ctx->pc = 0x20F044u;
    // 0x20f044: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20f044u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20f048: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x20f048u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20f04c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x20f04cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20f050: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x20f050u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20f054: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x20f054u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20f058: 0x3e00008  jr          $ra
    ctx->pc = 0x20F058u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20F05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F058u;
        // 0x20f05c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20F058u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20F060u;
}
