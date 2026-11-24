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

// Function: sub_00238A20
// Address: 0x238a20 - 0x238aa8
void sub_00238A20_0x238a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00238A20_0x238a20");
#endif

    switch (ctx->pc) {
        case 0x238a68u: goto label_238a68;
        case 0x238a70u: goto label_238a70;
        case 0x238a80u: goto label_238a80;
        default: break;
    }

    ctx->pc = 0x238a20u;

    // 0x238a20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x238a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x238a24: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x238a24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x238a28: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x238a28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238a2c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x238a2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x238a30: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x238a30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x238a34: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x238a34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x238a38: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x238a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x238a3c: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x238A3Cu;
    {
        const bool branch_taken_0x238a3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x238a3c) {
            ctx->pc = 0x238A40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x238A3Cu;
            // 0x238a40: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x238A94u;
            goto label_238a94;
        }
    }
    ctx->pc = 0x238A44u;
    // 0x238a44: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x238a44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x238a48: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x238A48u;
    {
        const bool branch_taken_0x238a48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x238a48) {
            ctx->pc = 0x238A4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x238A48u;
            // 0x238a4c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x238A94u;
            goto label_238a94;
        }
    }
    ctx->pc = 0x238A50u;
    // 0x238a50: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x238a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x238a54: 0x3c03004d  lui         $v1, 0x4D
    ctx->pc = 0x238a54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)77 << 16));
    // 0x238a58: 0xa2020045  sb          $v0, 0x45($s0)
    ctx->pc = 0x238a58u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 69), (uint8_t)GPR_U32(ctx, 2));
    // 0x238a5c: 0x2471803c  addiu       $s1, $v1, -0x7FC4
    ctx->pc = 0x238a5cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934588));
    // 0x238a60: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x238a60u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x238a64: 0x0  nop
    ctx->pc = 0x238a64u;
    // NOP
label_238a68:
    // 0x238a68: 0xc08e2b6  jal         func_238AD8
    ctx->pc = 0x238A68u;
    SET_GPR_U32(ctx, 31, 0x238A70u);
    ctx->pc = 0x238A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238A68u;
    // 0x238a6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238AD8u, 0x238A68u, 0x238A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238A70u;
label_238a70:
    // 0x238a70: 0x14520004  bne         $v0, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x238A70u;
    {
        const bool branch_taken_0x238a70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x238A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238A70u;
        // 0x238a74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238a70) {
            ctx->pc = 0x238A84u;
            goto label_238a84;
        }
    }
    ctx->pc = 0x238A78u;
    // 0x238a78: 0xc08df96  jal         func_237E58
    ctx->pc = 0x238A78u;
    SET_GPR_U32(ctx, 31, 0x238A80u);
    ctx->pc = 0x237E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237E58u, 0x238A78u, 0x238A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238A80u;
label_238a80:
    // 0x238a80: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x238a80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_238a84:
    // 0x238a84: 0x82020045  lb          $v0, 0x45($s0)
    ctx->pc = 0x238a84u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 69)));
    // 0x238a88: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x238A88u;
    {
        const bool branch_taken_0x238a88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x238a88) {
            ctx->pc = 0x238A68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_238a68;
        }
    }
    ctx->pc = 0x238A90u;
    // 0x238a90: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x238a90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_238a94:
    // 0x238a94: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x238a94u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x238a98: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x238a98u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x238a9c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x238a9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x238aa0: 0x3e00008  jr          $ra
    ctx->pc = 0x238AA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x238AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238AA0u;
        // 0x238aa4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x238AA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x238AA8u;
}
