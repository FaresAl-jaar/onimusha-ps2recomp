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

// Function: sub_002ED300
// Address: 0x2ed300 - 0x2ed344
void sub_002ED300_0x2ed300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ED300_0x2ed300");
#endif

    switch (ctx->pc) {
        case 0x2ed334u: goto label_2ed334;
        default: break;
    }

    ctx->pc = 0x2ed300u;

    // 0x2ed300: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ed300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ed304: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2ed304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ed308: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ed308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ed30c: 0x90a40640  lbu         $a0, 0x640($a1)
    ctx->pc = 0x2ed30cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1600)));
    // 0x2ed310: 0x14830009  bne         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2ED310u;
    {
        const bool branch_taken_0x2ed310 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2ed310) {
            ctx->pc = 0x2ED338u;
            goto label_2ed338;
        }
    }
    ctx->pc = 0x2ED318u;
    // 0x2ed318: 0x8ca406ac  lw          $a0, 0x6AC($a1)
    ctx->pc = 0x2ed318u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1708)));
    // 0x2ed31c: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x2ed31cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x2ed320: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2ed320u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2ed324: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2ED324u;
    {
        const bool branch_taken_0x2ed324 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ED328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED324u;
        // 0x2ed328: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed324) {
            ctx->pc = 0x2ED338u;
            goto label_2ed338;
        }
    }
    ctx->pc = 0x2ED32Cu;
    // 0x2ed32c: 0xc0a259c  jal         func_289670
    ctx->pc = 0x2ED32Cu;
    SET_GPR_U32(ctx, 31, 0x2ED334u);
    ctx->pc = 0x2ED330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED32Cu;
    // 0x2ed330: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x289670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x289670u, 0x2ED32Cu, 0x2ED334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED334u;
label_2ed334:
    // 0x2ed334: 0x0  nop
    ctx->pc = 0x2ed334u;
    // NOP
label_2ed338:
    // 0x2ed338: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ed338u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ed33c: 0x3e00008  jr          $ra
    ctx->pc = 0x2ED33Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ED340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED33Cu;
        // 0x2ed340: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ED33Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ED344u;
}
