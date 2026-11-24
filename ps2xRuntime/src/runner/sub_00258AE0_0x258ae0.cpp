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

// Function: sub_00258AE0
// Address: 0x258ae0 - 0x258b6c
void sub_00258AE0_0x258ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00258AE0_0x258ae0");
#endif

    switch (ctx->pc) {
        case 0x258af0u: goto label_258af0;
        case 0x258b00u: goto label_258b00;
        case 0x258b5cu: goto label_258b5c;
        default: break;
    }

    ctx->pc = 0x258ae0u;

    // 0x258ae0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x258ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x258ae4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x258ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x258ae8: 0xc096290  jal         func_258A40
    ctx->pc = 0x258AE8u;
    SET_GPR_U32(ctx, 31, 0x258AF0u);
    ctx->pc = 0x258AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258AE8u;
    // 0x258aec: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x258A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258A40u, 0x258AE8u, 0x258AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258AF0u;
label_258af0:
    // 0x258af0: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x258AF0u;
    {
        const bool branch_taken_0x258af0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x258af0) {
            ctx->pc = 0x258B60u;
            goto label_258b60;
        }
    }
    ctx->pc = 0x258AF8u;
    // 0x258af8: 0xc0962a4  jal         func_258A90
    ctx->pc = 0x258AF8u;
    SET_GPR_U32(ctx, 31, 0x258B00u);
    ctx->pc = 0x258A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258A90u, 0x258AF8u, 0x258B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258B00u;
label_258b00:
    // 0x258b00: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x258B00u;
    {
        const bool branch_taken_0x258b00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x258b00) {
            ctx->pc = 0x258B60u;
            goto label_258b60;
        }
    }
    ctx->pc = 0x258B08u;
    // 0x258b08: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x258b08u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x258b0c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x258b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x258b10: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x258b10u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x258b14: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x258b14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x258b18: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x258b18u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x258b1c: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x258b1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x258b20: 0xa4400004  sh          $zero, 0x4($v0)
    ctx->pc = 0x258b20u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x258b24: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x258b24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x258b28: 0x3c024a00  lui         $v0, 0x4A00
    ctx->pc = 0x258b28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18944 << 16));
    // 0x258b2c: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x258b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x258b30: 0x3445040f  ori         $a1, $v0, 0x40F
    ctx->pc = 0x258b30u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1039);
    // 0x258b34: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x258b34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258b38: 0x78225c10  lq          $v0, 0x5C10($at)
    ctx->pc = 0x258b38u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x665C10u));
    // 0x258b3c: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x258b3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x258b40: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x258b40u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258b44: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x258b44u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258b48: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x258b48u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258b4c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x258b4cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258b50: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x258b50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x258b54: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x258B54u;
    SET_GPR_U32(ctx, 31, 0x258B5Cu);
    ctx->pc = 0x258B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258B54u;
    // 0x258b58: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x258B54u, 0x258B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258B5Cu;
label_258b5c:
    // 0x258b5c: 0x0  nop
    ctx->pc = 0x258b5cu;
    // NOP
label_258b60:
    // 0x258b60: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x258b60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x258b64: 0x3e00008  jr          $ra
    ctx->pc = 0x258B64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x258B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258B64u;
        // 0x258b68: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x258B64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x258B6Cu;
}
