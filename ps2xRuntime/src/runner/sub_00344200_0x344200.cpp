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

// Function: sub_00344200
// Address: 0x344200 - 0x344268
void sub_00344200_0x344200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00344200_0x344200");
#endif

    switch (ctx->pc) {
        case 0x344234u: goto label_344234;
        default: break;
    }

    ctx->pc = 0x344200u;

    // 0x344200: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x344200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x344204: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x344204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x344208: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x344208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x34420c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x34420cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344210: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x344210u;
    {
        const bool branch_taken_0x344210 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x344214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344210u;
        // 0x344214: 0x3c030068  lui         $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344210) {
            ctx->pc = 0x344258u;
            goto label_344258;
        }
    }
    ctx->pc = 0x344218u;
    // 0x344218: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x344218u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x34421c: 0x246377e0  addiu       $v1, $v1, 0x77E0
    ctx->pc = 0x34421cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30688));
    // 0x344220: 0x24427800  addiu       $v0, $v0, 0x7800
    ctx->pc = 0x344220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30720));
    // 0x344224: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x344224u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x344228: 0x260404e0  addiu       $a0, $s0, 0x4E0
    ctx->pc = 0x344228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1248));
    // 0x34422c: 0xc09d694  jal         func_275A50
    ctx->pc = 0x34422Cu;
    SET_GPR_U32(ctx, 31, 0x344234u);
    ctx->pc = 0x344230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34422Cu;
    // 0x344230: 0xae0204d4  sw          $v0, 0x4D4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275A50u, 0x34422Cu, 0x344234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344234u;
label_344234:
    // 0x344234: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x344234u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x344238: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x344238u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x34423c: 0x246381b0  addiu       $v1, $v1, -0x7E50
    ctx->pc = 0x34423cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934960));
    // 0x344240: 0x24848030  addiu       $a0, $a0, -0x7FD0
    ctx->pc = 0x344240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934576));
    // 0x344244: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x344244u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x344248: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x344248u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x34424c: 0xae0404d4  sw          $a0, 0x4D4($s0)
    ctx->pc = 0x34424cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 4));
    // 0x344250: 0x24638bd0  addiu       $v1, $v1, -0x7430
    ctx->pc = 0x344250u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937552));
    // 0x344254: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x344254u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
label_344258:
    // 0x344258: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x344258u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34425c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34425cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x344260: 0x3e00008  jr          $ra
    ctx->pc = 0x344260u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x344264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344260u;
        // 0x344264: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x344260u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x344268u;
}
