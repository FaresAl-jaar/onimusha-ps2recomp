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

// Function: sub_001DE5C0
// Address: 0x1de5c0 - 0x1de614
void sub_001DE5C0_0x1de5c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DE5C0_0x1de5c0");
#endif

    switch (ctx->pc) {
        case 0x1de5c0u: goto label_1de5c0;
        case 0x1de5c4u: goto label_1de5c4;
        case 0x1de5c8u: goto label_1de5c8;
        case 0x1de5ccu: goto label_1de5cc;
        case 0x1de5d0u: goto label_1de5d0;
        case 0x1de5d4u: goto label_1de5d4;
        case 0x1de5d8u: goto label_1de5d8;
        case 0x1de5dcu: goto label_1de5dc;
        case 0x1de5e0u: goto label_1de5e0;
        case 0x1de5e4u: goto label_1de5e4;
        case 0x1de5e8u: goto label_1de5e8;
        case 0x1de5ecu: goto label_1de5ec;
        case 0x1de5f0u: goto label_1de5f0;
        case 0x1de5f4u: goto label_1de5f4;
        case 0x1de5f8u: goto label_1de5f8;
        case 0x1de5fcu: goto label_1de5fc;
        case 0x1de600u: goto label_1de600;
        case 0x1de604u: goto label_1de604;
        case 0x1de608u: goto label_1de608;
        case 0x1de60cu: goto label_1de60c;
        case 0x1de610u: goto label_1de610;
        default: break;
    }

    ctx->pc = 0x1de5c0u;

label_1de5c0:
    // 0x1de5c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1de5c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1de5c4:
    // 0x1de5c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1de5c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1de5c8:
    // 0x1de5c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1de5c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1de5cc:
    // 0x1de5cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1de5ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1de5d0:
    // 0x1de5d0: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
label_1de5d4:
    if (ctx->pc == 0x1DE5D4u) {
        ctx->pc = 0x1DE5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE5D0u;
        // 0x1de5d4: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE5D8u;
        goto label_1de5d8;
    }
    ctx->pc = 0x1DE5D0u;
    {
        const bool branch_taken_0x1de5d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE5D0u;
        // 0x1de5d4: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de5d0) {
            ctx->pc = 0x1DE600u;
            goto label_1de600;
        }
    }
    ctx->pc = 0x1DE5D8u;
label_1de5d8:
    // 0x1de5d8: 0x24426370  addiu       $v0, $v0, 0x6370
    ctx->pc = 0x1de5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25456));
label_1de5dc:
    // 0x1de5dc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1de5dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1de5e0:
    // 0x1de5e0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1de5e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1de5e4:
    // 0x1de5e4: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x1de5e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_1de5e8:
    // 0x1de5e8: 0x320f809  jalr        $t9
label_1de5ec:
    if (ctx->pc == 0x1DE5ECu) {
        ctx->pc = 0x1DE5F0u;
        goto label_1de5f0;
    }
    ctx->pc = 0x1DE5E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DE5F0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DE5E8u, 0x1DE5F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DE5F0u;
label_1de5f0:
    // 0x1de5f0: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_1de5f4:
    if (ctx->pc == 0x1DE5F4u) {
        ctx->pc = 0x1DE5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE5F0u;
        // 0x1de5f4: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE5F8u;
        goto label_1de5f8;
    }
    ctx->pc = 0x1DE5F0u;
    {
        const bool branch_taken_0x1de5f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE5F0u;
        // 0x1de5f4: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de5f0) {
            ctx->pc = 0x1DE600u;
            goto label_1de600;
        }
    }
    ctx->pc = 0x1DE5F8u;
label_1de5f8:
    // 0x1de5f8: 0x244260e0  addiu       $v0, $v0, 0x60E0
    ctx->pc = 0x1de5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24800));
label_1de5fc:
    // 0x1de5fc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1de5fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1de600:
    // 0x1de600: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1de600u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1de604:
    // 0x1de604: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1de604u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1de608:
    // 0x1de608: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1de608u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1de60c:
    // 0x1de60c: 0x3e00008  jr          $ra
label_1de610:
    if (ctx->pc == 0x1DE610u) {
        ctx->pc = 0x1DE610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE60Cu;
        // 0x1de610: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DE614u;
        goto label_fallthrough_0x1de60c;
    }
    ctx->pc = 0x1DE60Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DE610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE60Cu;
        // 0x1de610: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DE60Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1de60c:
    ctx->pc = 0x1DE614u;
}
