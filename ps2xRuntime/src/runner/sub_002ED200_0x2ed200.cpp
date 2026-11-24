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

// Function: sub_002ED200
// Address: 0x2ed200 - 0x2ed25c
void sub_002ED200_0x2ed200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ED200_0x2ed200");
#endif

    switch (ctx->pc) {
        case 0x2ed24cu: goto label_2ed24c;
        default: break;
    }

    ctx->pc = 0x2ed200u;

    // 0x2ed200: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ed200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ed204: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2ed204u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed208: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ed208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ed20c: 0x8ca40148  lw          $a0, 0x148($a1)
    ctx->pc = 0x2ed20cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 328)));
    // 0x2ed210: 0x30832000  andi        $v1, $a0, 0x2000
    ctx->pc = 0x2ed210u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8192);
    // 0x2ed214: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x2ed214u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2ed218: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x2ed218u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x2ed21c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2ed21cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2ed220: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2ED220u;
    {
        const bool branch_taken_0x2ed220 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED220u;
        // 0x2ed224: 0x30834000  andi        $v1, $a0, 0x4000 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16384);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed220) {
            ctx->pc = 0x2ED250u;
            goto label_2ed250;
        }
    }
    ctx->pc = 0x2ED228u;
    // 0x2ed228: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x2ed228u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2ed22c: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x2ed22cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x2ed230: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2ed230u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2ed234: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2ED234u;
    {
        const bool branch_taken_0x2ed234 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ed234) {
            ctx->pc = 0x2ED250u;
            goto label_2ed250;
        }
    }
    ctx->pc = 0x2ED23Cu;
    // 0x2ed23c: 0x90e60000  lbu         $a2, 0x0($a3)
    ctx->pc = 0x2ed23cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2ed240: 0x90e70001  lbu         $a3, 0x1($a3)
    ctx->pc = 0x2ed240u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x2ed244: 0xc09fbec  jal         func_27EFB0
    ctx->pc = 0x2ED244u;
    SET_GPR_U32(ctx, 31, 0x2ED24Cu);
    ctx->pc = 0x2ED248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED244u;
    // 0x2ed248: 0x24a401c0  addiu       $a0, $a1, 0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27EFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27EFB0u, 0x2ED244u, 0x2ED24Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED24Cu;
label_2ed24c:
    // 0x2ed24c: 0x0  nop
    ctx->pc = 0x2ed24cu;
    // NOP
label_2ed250:
    // 0x2ed250: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ed250u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ed254: 0x3e00008  jr          $ra
    ctx->pc = 0x2ED254u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ED258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED254u;
        // 0x2ed258: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ED254u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ED25Cu;
}
