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

// Function: sub_00211C60
// Address: 0x211c60 - 0x211cec
void sub_00211C60_0x211c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00211C60_0x211c60");
#endif

    switch (ctx->pc) {
        case 0x211c84u: goto label_211c84;
        case 0x211c98u: goto label_211c98;
        case 0x211cacu: goto label_211cac;
        case 0x211cd4u: goto label_211cd4;
        default: break;
    }

    ctx->pc = 0x211c60u;

    // 0x211c60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x211c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x211c64: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x211c64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x211c68: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x211c68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x211c6c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x211c6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211c70: 0x24453f80  addiu       $a1, $v0, 0x3F80
    ctx->pc = 0x211c70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16256));
    // 0x211c74: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x211c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x211c78: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x211c78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x211c7c: 0xc084814  jal         func_212050
    ctx->pc = 0x211C7Cu;
    SET_GPR_U32(ctx, 31, 0x211C84u);
    ctx->pc = 0x211C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211C7Cu;
    // 0x211c80: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212050u, 0x211C7Cu, 0x211C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211C84u;
label_211c84:
    // 0x211c84: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x211c84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x211c88: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x211c88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x211c8c: 0x24a53fd0  addiu       $a1, $a1, 0x3FD0
    ctx->pc = 0x211c8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16336));
    // 0x211c90: 0xc084814  jal         func_212050
    ctx->pc = 0x211C90u;
    SET_GPR_U32(ctx, 31, 0x211C98u);
    ctx->pc = 0x211C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211C90u;
    // 0x211c94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212050u, 0x211C90u, 0x211C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211C98u;
label_211c98:
    // 0x211c98: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x211c98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x211c9c: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x211c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
    // 0x211ca0: 0x24a54020  addiu       $a1, $a1, 0x4020
    ctx->pc = 0x211ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16416));
    // 0x211ca4: 0xc084814  jal         func_212050
    ctx->pc = 0x211CA4u;
    SET_GPR_U32(ctx, 31, 0x211CACu);
    ctx->pc = 0x211CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211CA4u;
    // 0x211ca8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212050u, 0x211CA4u, 0x211CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211CACu;
label_211cac:
    // 0x211cac: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x211cacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x211cb0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x211cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x211cb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x211cb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211cb8: 0x24a54070  addiu       $a1, $a1, 0x4070
    ctx->pc = 0x211cb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16496));
    // 0x211cbc: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x211CBCu;
    {
        const bool branch_taken_0x211cbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x211CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211CBCu;
        // 0x211cc0: 0xae220018  sw          $v0, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211cbc) {
            ctx->pc = 0x211CCCu;
            goto label_211ccc;
        }
    }
    ctx->pc = 0x211CC4u;
    // 0x211cc4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x211cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x211cc8: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x211cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
label_211ccc:
    // 0x211ccc: 0xc084814  jal         func_212050
    ctx->pc = 0x211CCCu;
    SET_GPR_U32(ctx, 31, 0x211CD4u);
    ctx->pc = 0x212050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212050u, 0x211CCCu, 0x211CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211CD4u;
label_211cd4:
    // 0x211cd4: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x211cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
    // 0x211cd8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x211cd8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x211cdc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x211cdcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x211ce0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x211ce0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x211ce4: 0x3e00008  jr          $ra
    ctx->pc = 0x211CE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x211CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211CE4u;
        // 0x211ce8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211CE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x211CECu;
}
