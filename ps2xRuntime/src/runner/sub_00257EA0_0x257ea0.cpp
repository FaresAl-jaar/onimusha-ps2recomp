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

// Function: sub_00257EA0
// Address: 0x257ea0 - 0x257f08
void sub_00257EA0_0x257ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00257EA0_0x257ea0");
#endif

    switch (ctx->pc) {
        case 0x257efcu: goto label_257efc;
        default: break;
    }

    ctx->pc = 0x257ea0u;

    // 0x257ea0: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x257ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x257ea4: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x257ea4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x257ea8: 0x28620008  slti        $v0, $v1, 0x8
    ctx->pc = 0x257ea8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x257eac: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x257EACu;
    {
        const bool branch_taken_0x257eac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x257EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257EACu;
        // 0x257eb0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257eac) {
            ctx->pc = 0x257EBCu;
            goto label_257ebc;
        }
    }
    ctx->pc = 0x257EB4u;
    // 0x257eb4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x257EB4u;
    {
        const bool branch_taken_0x257eb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x257EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257EB4u;
        // 0x257eb8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257eb4) {
            ctx->pc = 0x257EC8u;
            goto label_257ec8;
        }
    }
    ctx->pc = 0x257EBCu;
label_257ebc:
    // 0x257ebc: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x257ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x257ec0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x257ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x257ec4: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x257ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_257ec8:
    // 0x257ec8: 0xa3a7001c  sb          $a3, 0x1C($sp)
    ctx->pc = 0x257ec8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 7));
    // 0x257ecc: 0x27a200a8  addiu       $v0, $sp, 0xA8
    ctx->pc = 0x257eccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x257ed0: 0x8fa700a0  lw          $a3, 0xA0($sp)
    ctx->pc = 0x257ed0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x257ed4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x257ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x257ed8: 0xa7a50018  sh          $a1, 0x18($sp)
    ctx->pc = 0x257ed8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 24), (uint16_t)GPR_U32(ctx, 5));
    // 0x257edc: 0xa7a6001a  sh          $a2, 0x1A($sp)
    ctx->pc = 0x257edcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 26), (uint16_t)GPR_U32(ctx, 6));
    // 0x257ee0: 0x27a50018  addiu       $a1, $sp, 0x18
    ctx->pc = 0x257ee0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x257ee4: 0xa3a8001d  sb          $t0, 0x1D($sp)
    ctx->pc = 0x257ee4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 29), (uint8_t)GPR_U32(ctx, 8));
    // 0x257ee8: 0x160302d  daddu       $a2, $t3, $zero
    ctx->pc = 0x257ee8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257eec: 0xa3a9001e  sb          $t1, 0x1E($sp)
    ctx->pc = 0x257eecu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 30), (uint8_t)GPR_U32(ctx, 9));
    // 0x257ef0: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x257ef0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257ef4: 0xc095ff8  jal         func_257FE0
    ctx->pc = 0x257EF4u;
    SET_GPR_U32(ctx, 31, 0x257EFCu);
    ctx->pc = 0x257EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257EF4u;
    // 0x257ef8: 0xa3aa001f  sb          $t2, 0x1F($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 31), (uint8_t)GPR_U32(ctx, 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257FE0u, 0x257EF4u, 0x257EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257EFCu;
label_257efc:
    // 0x257efc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x257efcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x257f00: 0x3e00008  jr          $ra
    ctx->pc = 0x257F00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x257F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257F00u;
        // 0x257f04: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x257F00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x257F08u;
}
