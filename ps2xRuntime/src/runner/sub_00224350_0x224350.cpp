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

// Function: sub_00224350
// Address: 0x224350 - 0x22439c
void sub_00224350_0x224350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00224350_0x224350");
#endif

    switch (ctx->pc) {
        case 0x224374u: goto label_224374;
        default: break;
    }

    ctx->pc = 0x224350u;

    // 0x224350: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x224350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x224354: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x224354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x224358: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x224358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x22435c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x22435cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224360: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x224360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x224364: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x224364u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x224368: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x224368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x22436c: 0xc088e5e  jal         func_223978
    ctx->pc = 0x22436Cu;
    SET_GPR_U32(ctx, 31, 0x224374u);
    ctx->pc = 0x224370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22436Cu;
    // 0x224370: 0x245000b0  addiu       $s0, $v0, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223978u, 0x22436Cu, 0x224374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224374u;
label_224374:
    // 0x224374: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x224374u;
    {
        const bool branch_taken_0x224374 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x224374) {
            ctx->pc = 0x224378u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x224374u;
            // 0x224378: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22438Cu;
            goto label_22438c;
        }
    }
    ctx->pc = 0x22437Cu;
    // 0x22437c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x22437cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x224380: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x224380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x224384: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x224384u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x224388: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x224388u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_22438c:
    // 0x22438c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x22438cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x224390: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x224390u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x224394: 0x3e00008  jr          $ra
    ctx->pc = 0x224394u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x224398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224394u;
        // 0x224398: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x224394u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22439Cu;
}
