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

// Function: sub_001DC7C0
// Address: 0x1dc7c0 - 0x1dc814
void sub_001DC7C0_0x1dc7c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DC7C0_0x1dc7c0");
#endif

    switch (ctx->pc) {
        case 0x1dc7c0u: goto label_1dc7c0;
        case 0x1dc7c4u: goto label_1dc7c4;
        case 0x1dc7c8u: goto label_1dc7c8;
        case 0x1dc7ccu: goto label_1dc7cc;
        case 0x1dc7d0u: goto label_1dc7d0;
        case 0x1dc7d4u: goto label_1dc7d4;
        case 0x1dc7d8u: goto label_1dc7d8;
        case 0x1dc7dcu: goto label_1dc7dc;
        case 0x1dc7e0u: goto label_1dc7e0;
        case 0x1dc7e4u: goto label_1dc7e4;
        case 0x1dc7e8u: goto label_1dc7e8;
        case 0x1dc7ecu: goto label_1dc7ec;
        case 0x1dc7f0u: goto label_1dc7f0;
        case 0x1dc7f4u: goto label_1dc7f4;
        case 0x1dc7f8u: goto label_1dc7f8;
        case 0x1dc7fcu: goto label_1dc7fc;
        case 0x1dc800u: goto label_1dc800;
        case 0x1dc804u: goto label_1dc804;
        case 0x1dc808u: goto label_1dc808;
        case 0x1dc80cu: goto label_1dc80c;
        case 0x1dc810u: goto label_1dc810;
        default: break;
    }

    ctx->pc = 0x1dc7c0u;

label_1dc7c0:
    // 0x1dc7c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1dc7c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1dc7c4:
    // 0x1dc7c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1dc7c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1dc7c8:
    // 0x1dc7c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1dc7c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1dc7cc:
    // 0x1dc7cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1dc7ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1dc7d0:
    // 0x1dc7d0: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
label_1dc7d4:
    if (ctx->pc == 0x1DC7D4u) {
        ctx->pc = 0x1DC7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC7D0u;
        // 0x1dc7d4: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC7D8u;
        goto label_1dc7d8;
    }
    ctx->pc = 0x1DC7D0u;
    {
        const bool branch_taken_0x1dc7d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC7D0u;
        // 0x1dc7d4: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc7d0) {
            ctx->pc = 0x1DC800u;
            goto label_1dc800;
        }
    }
    ctx->pc = 0x1DC7D8u;
label_1dc7d8:
    // 0x1dc7d8: 0x24426170  addiu       $v0, $v0, 0x6170
    ctx->pc = 0x1dc7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24944));
label_1dc7dc:
    // 0x1dc7dc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1dc7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1dc7e0:
    // 0x1dc7e0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1dc7e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1dc7e4:
    // 0x1dc7e4: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x1dc7e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_1dc7e8:
    // 0x1dc7e8: 0x320f809  jalr        $t9
label_1dc7ec:
    if (ctx->pc == 0x1DC7ECu) {
        ctx->pc = 0x1DC7F0u;
        goto label_1dc7f0;
    }
    ctx->pc = 0x1DC7E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DC7F0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DC7E8u, 0x1DC7F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DC7F0u;
label_1dc7f0:
    // 0x1dc7f0: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_1dc7f4:
    if (ctx->pc == 0x1DC7F4u) {
        ctx->pc = 0x1DC7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC7F0u;
        // 0x1dc7f4: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC7F8u;
        goto label_1dc7f8;
    }
    ctx->pc = 0x1DC7F0u;
    {
        const bool branch_taken_0x1dc7f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC7F0u;
        // 0x1dc7f4: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc7f0) {
            ctx->pc = 0x1DC800u;
            goto label_1dc800;
        }
    }
    ctx->pc = 0x1DC7F8u;
label_1dc7f8:
    // 0x1dc7f8: 0x244260e0  addiu       $v0, $v0, 0x60E0
    ctx->pc = 0x1dc7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24800));
label_1dc7fc:
    // 0x1dc7fc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1dc7fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1dc800:
    // 0x1dc800: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1dc800u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1dc804:
    // 0x1dc804: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1dc804u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1dc808:
    // 0x1dc808: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1dc808u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1dc80c:
    // 0x1dc80c: 0x3e00008  jr          $ra
label_1dc810:
    if (ctx->pc == 0x1DC810u) {
        ctx->pc = 0x1DC810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC80Cu;
        // 0x1dc810: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DC814u;
        goto label_fallthrough_0x1dc80c;
    }
    ctx->pc = 0x1DC80Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DC810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC80Cu;
        // 0x1dc810: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DC80Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1dc80c:
    ctx->pc = 0x1DC814u;
}
