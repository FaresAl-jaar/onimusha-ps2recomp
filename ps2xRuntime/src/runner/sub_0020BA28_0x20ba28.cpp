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

// Function: sub_0020BA28
// Address: 0x20ba28 - 0x20ba9c
void sub_0020BA28_0x20ba28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020BA28_0x20ba28");
#endif

    switch (ctx->pc) {
        case 0x20ba50u: goto label_20ba50;
        case 0x20ba64u: goto label_20ba64;
        case 0x20ba6cu: goto label_20ba6c;
        case 0x20ba78u: goto label_20ba78;
        default: break;
    }

    ctx->pc = 0x20ba28u;

    // 0x20ba28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x20ba28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20ba2c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x20ba2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x20ba30: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20ba30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20ba34: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20ba34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ba38: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x20ba38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x20ba3c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x20ba3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ba40: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x20ba40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x20ba44: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x20ba44u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20ba48: 0x2a22000a  slti        $v0, $s1, 0xA
    ctx->pc = 0x20ba48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x20ba4c: 0x0  nop
    ctx->pc = 0x20ba4cu;
    // NOP
label_20ba50:
    // 0x20ba50: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x20BA50u;
    {
        const bool branch_taken_0x20ba50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BA50u;
        // 0x20ba54: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ba50) {
            ctx->pc = 0x20BA84u;
            goto label_20ba84;
        }
    }
    ctx->pc = 0x20BA58u;
    // 0x20ba58: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x20ba58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20ba5c: 0xc083178  jal         func_20C5E0
    ctx->pc = 0x20BA5Cu;
    SET_GPR_U32(ctx, 31, 0x20BA64u);
    ctx->pc = 0x20BA60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BA5Cu;
    // 0x20ba60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20C5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20C5E0u, 0x20BA5Cu, 0x20BA64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BA64u;
label_20ba64:
    // 0x20ba64: 0xc08d2a8  jal         func_234AA0
    ctx->pc = 0x20BA64u;
    SET_GPR_U32(ctx, 31, 0x20BA6Cu);
    ctx->pc = 0x234AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x234AA0u, 0x20BA64u, 0x20BA6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BA6Cu;
label_20ba6c:
    // 0x20ba6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20ba6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ba70: 0xc083178  jal         func_20C5E0
    ctx->pc = 0x20BA70u;
    SET_GPR_U32(ctx, 31, 0x20BA78u);
    ctx->pc = 0x20BA74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BA70u;
    // 0x20ba74: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20C5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20C5E0u, 0x20BA70u, 0x20BA78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BA78u;
label_20ba78:
    // 0x20ba78: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x20ba78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x20ba7c: 0x1052fff4  beq         $v0, $s2, . + 4 + (-0xC << 2)
    ctx->pc = 0x20BA7Cu;
    {
        const bool branch_taken_0x20ba7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x20BA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BA7Cu;
        // 0x20ba80: 0x2a22000a  slti        $v0, $s1, 0xA (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)10) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ba7c) {
            ctx->pc = 0x20BA50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20ba50;
        }
    }
    ctx->pc = 0x20BA84u;
label_20ba84:
    // 0x20ba84: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20ba84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20ba88: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x20ba88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20ba8c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x20ba8cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20ba90: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x20ba90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20ba94: 0x3e00008  jr          $ra
    ctx->pc = 0x20BA94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20BA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BA94u;
        // 0x20ba98: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20BA94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20BA9Cu;
}
