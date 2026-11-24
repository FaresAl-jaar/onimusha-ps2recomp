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

// Function: sub_0038CD50
// Address: 0x38cd50 - 0x38cdb8
void sub_0038CD50_0x38cd50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038CD50_0x38cd50");
#endif

    switch (ctx->pc) {
        case 0x38cd84u: goto label_38cd84;
        default: break;
    }

    ctx->pc = 0x38cd50u;

    // 0x38cd50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x38cd50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x38cd54: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x38cd54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x38cd58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x38cd58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x38cd5c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x38cd5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38cd60: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x38CD60u;
    {
        const bool branch_taken_0x38cd60 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x38CD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CD60u;
        // 0x38cd64: 0x3c030068  lui         $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38cd60) {
            ctx->pc = 0x38CDA8u;
            goto label_38cda8;
        }
    }
    ctx->pc = 0x38CD68u;
    // 0x38cd68: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x38cd68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x38cd6c: 0x246377e0  addiu       $v1, $v1, 0x77E0
    ctx->pc = 0x38cd6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30688));
    // 0x38cd70: 0x24427800  addiu       $v0, $v0, 0x7800
    ctx->pc = 0x38cd70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30720));
    // 0x38cd74: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x38cd74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x38cd78: 0x260404e0  addiu       $a0, $s0, 0x4E0
    ctx->pc = 0x38cd78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1248));
    // 0x38cd7c: 0xc09d694  jal         func_275A50
    ctx->pc = 0x38CD7Cu;
    SET_GPR_U32(ctx, 31, 0x38CD84u);
    ctx->pc = 0x38CD80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38CD7Cu;
    // 0x38cd80: 0xae0204d4  sw          $v0, 0x4D4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275A50u, 0x38CD7Cu, 0x38CD84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38CD84u;
label_38cd84:
    // 0x38cd84: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x38cd84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x38cd88: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x38cd88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x38cd8c: 0x246381b0  addiu       $v1, $v1, -0x7E50
    ctx->pc = 0x38cd8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934960));
    // 0x38cd90: 0x24848030  addiu       $a0, $a0, -0x7FD0
    ctx->pc = 0x38cd90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934576));
    // 0x38cd94: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x38cd94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x38cd98: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x38cd98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x38cd9c: 0xae0404d4  sw          $a0, 0x4D4($s0)
    ctx->pc = 0x38cd9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 4));
    // 0x38cda0: 0x24639be0  addiu       $v1, $v1, -0x6420
    ctx->pc = 0x38cda0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941664));
    // 0x38cda4: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x38cda4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
label_38cda8:
    // 0x38cda8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x38cda8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38cdac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x38cdacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38cdb0: 0x3e00008  jr          $ra
    ctx->pc = 0x38CDB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38CDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CDB0u;
        // 0x38cdb4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38CDB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38CDB8u;
}
