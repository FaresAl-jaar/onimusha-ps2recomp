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

// Function: sub_003C2060
// Address: 0x3c2060 - 0x3c20c8
void sub_003C2060_0x3c2060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C2060_0x3c2060");
#endif

    switch (ctx->pc) {
        case 0x3c2094u: goto label_3c2094;
        default: break;
    }

    ctx->pc = 0x3c2060u;

    // 0x3c2060: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3c2060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3c2064: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3c2064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3c2068: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3c2068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3c206c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3c206cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c2070: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x3C2070u;
    {
        const bool branch_taken_0x3c2070 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C2074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2070u;
        // 0x3c2074: 0x3c030068  lui         $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c2070) {
            ctx->pc = 0x3C20B8u;
            goto label_3c20b8;
        }
    }
    ctx->pc = 0x3C2078u;
    // 0x3c2078: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3c2078u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x3c207c: 0x246377e0  addiu       $v1, $v1, 0x77E0
    ctx->pc = 0x3c207cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30688));
    // 0x3c2080: 0x24427800  addiu       $v0, $v0, 0x7800
    ctx->pc = 0x3c2080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30720));
    // 0x3c2084: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x3c2084u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x3c2088: 0x260404e0  addiu       $a0, $s0, 0x4E0
    ctx->pc = 0x3c2088u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1248));
    // 0x3c208c: 0xc09d694  jal         func_275A50
    ctx->pc = 0x3C208Cu;
    SET_GPR_U32(ctx, 31, 0x3C2094u);
    ctx->pc = 0x3C2090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C208Cu;
    // 0x3c2090: 0xae0204d4  sw          $v0, 0x4D4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275A50u, 0x3C208Cu, 0x3C2094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C2094u;
label_3c2094:
    // 0x3c2094: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x3c2094u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x3c2098: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x3c2098u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x3c209c: 0x246381b0  addiu       $v1, $v1, -0x7E50
    ctx->pc = 0x3c209cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934960));
    // 0x3c20a0: 0x24848030  addiu       $a0, $a0, -0x7FD0
    ctx->pc = 0x3c20a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934576));
    // 0x3c20a4: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x3c20a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x3c20a8: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x3c20a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x3c20ac: 0xae0404d4  sw          $a0, 0x4D4($s0)
    ctx->pc = 0x3c20acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 4));
    // 0x3c20b0: 0x2463a640  addiu       $v1, $v1, -0x59C0
    ctx->pc = 0x3c20b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944320));
    // 0x3c20b4: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x3c20b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
label_3c20b8:
    // 0x3c20b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3c20b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3c20bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3c20bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3c20c0: 0x3e00008  jr          $ra
    ctx->pc = 0x3C20C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C20C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C20C0u;
        // 0x3c20c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C20C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C20C8u;
}
