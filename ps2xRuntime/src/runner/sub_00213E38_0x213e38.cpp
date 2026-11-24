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

// Function: sub_00213E38
// Address: 0x213e38 - 0x213ec0
void sub_00213E38_0x213e38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00213E38_0x213e38");
#endif

    switch (ctx->pc) {
        case 0x213e58u: goto label_213e58;
        case 0x213e6cu: goto label_213e6c;
        case 0x213e80u: goto label_213e80;
        default: break;
    }

    ctx->pc = 0x213e38u;

    // 0x213e38: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x213e38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x213e3c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x213e3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x213e40: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x213e40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213e44: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x213e44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x213e48: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x213e48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x213e4c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x213e4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x213e50: 0xc084fb0  jal         func_213EC0
    ctx->pc = 0x213E50u;
    SET_GPR_U32(ctx, 31, 0x213E58u);
    ctx->pc = 0x213E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213E50u;
    // 0x213e54: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x213EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x213EC0u, 0x213E50u, 0x213E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213E58u;
label_213e58:
    // 0x213e58: 0x10520013  beq         $v0, $s2, . + 4 + (0x13 << 2)
    ctx->pc = 0x213E58u;
    {
        const bool branch_taken_0x213e58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x213E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213E58u;
        // 0x213e5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213e58) {
            ctx->pc = 0x213EA8u;
            goto label_213ea8;
        }
    }
    ctx->pc = 0x213E60u;
    // 0x213e60: 0x8e301f84  lw          $s0, 0x1F84($s1)
    ctx->pc = 0x213e60u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8068)));
    // 0x213e64: 0xc084074  jal         func_2101D0
    ctx->pc = 0x213E64u;
    SET_GPR_U32(ctx, 31, 0x213E6Cu);
    ctx->pc = 0x213E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213E64u;
    // 0x213e68: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2101D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2101D0u, 0x213E64u, 0x213E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213E6Cu;
label_213e6c:
    // 0x213e6c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x213e6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213e70: 0x1452000d  bne         $v0, $s2, . + 4 + (0xD << 2)
    ctx->pc = 0x213E70u;
    {
        const bool branch_taken_0x213e70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x213E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213E70u;
        // 0x213e74: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213e70) {
            ctx->pc = 0x213EA8u;
            goto label_213ea8;
        }
    }
    ctx->pc = 0x213E78u;
    // 0x213e78: 0xc084ffc  jal         func_213FF0
    ctx->pc = 0x213E78u;
    SET_GPR_U32(ctx, 31, 0x213E80u);
    ctx->pc = 0x213FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x213FF0u, 0x213E78u, 0x213E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213E80u;
label_213e80:
    // 0x213e80: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x213E80u;
    {
        const bool branch_taken_0x213e80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x213E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213E80u;
        // 0x213e84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213e80) {
            ctx->pc = 0x213EA8u;
            goto label_213ea8;
        }
    }
    ctx->pc = 0x213E88u;
    // 0x213e88: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x213e88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x213e8c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x213e8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x213e90: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x213e90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x213e94: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x213e94u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x213e98: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x213e98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x213e9c: 0x8084fd4  j           func_213F50
    ctx->pc = 0x213E9Cu;
    ctx->pc = 0x213EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213E9Cu;
    // 0x213ea0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x213F50u;
    sub_00213F50_0x213f50(rdram, ctx, runtime); return;
    ctx->pc = 0x213EA4u;
    // 0x213ea4: 0x0  nop
    ctx->pc = 0x213ea4u;
    // NOP
label_213ea8:
    // 0x213ea8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x213ea8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x213eac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x213eacu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x213eb0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x213eb0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x213eb4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x213eb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x213eb8: 0x3e00008  jr          $ra
    ctx->pc = 0x213EB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x213EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213EB8u;
        // 0x213ebc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x213EB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x213EC0u;
}
