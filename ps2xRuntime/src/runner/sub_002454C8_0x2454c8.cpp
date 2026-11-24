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

// Function: sub_002454C8
// Address: 0x2454c8 - 0x245518
void sub_002454C8_0x2454c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002454C8_0x2454c8");
#endif

    switch (ctx->pc) {
        case 0x2454c8u: goto label_2454c8;
        case 0x2454ccu: goto label_2454cc;
        case 0x2454d0u: goto label_2454d0;
        case 0x2454d4u: goto label_2454d4;
        case 0x2454d8u: goto label_2454d8;
        case 0x2454dcu: goto label_2454dc;
        case 0x2454e0u: goto label_2454e0;
        case 0x2454e4u: goto label_2454e4;
        case 0x2454e8u: goto label_2454e8;
        case 0x2454ecu: goto label_2454ec;
        case 0x2454f0u: goto label_2454f0;
        case 0x2454f4u: goto label_2454f4;
        case 0x2454f8u: goto label_2454f8;
        case 0x2454fcu: goto label_2454fc;
        case 0x245500u: goto label_245500;
        case 0x245504u: goto label_245504;
        case 0x245508u: goto label_245508;
        case 0x24550cu: goto label_24550c;
        case 0x245510u: goto label_245510;
        case 0x245514u: goto label_245514;
        default: break;
    }

    ctx->pc = 0x2454c8u;

label_2454c8:
    // 0x2454c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2454c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2454cc:
    // 0x2454cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2454ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2454d0:
    // 0x2454d0: 0xc090e62  jal         func_243988
label_2454d4:
    if (ctx->pc == 0x2454D4u) {
        ctx->pc = 0x2454D8u;
        goto label_2454d8;
    }
    ctx->pc = 0x2454D0u;
    SET_GPR_U32(ctx, 31, 0x2454D8u);
    ctx->pc = 0x243988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243988u, 0x2454D0u, 0x2454D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2454D8u;
label_2454d8:
    // 0x2454d8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2454d8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2454dc:
    // 0x2454dc: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
label_2454e0:
    if (ctx->pc == 0x2454E0u) {
        ctx->pc = 0x2454E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2454DCu;
        // 0x2454e0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2454E4u;
        goto label_2454e4;
    }
    ctx->pc = 0x2454DCu;
    {
        const bool branch_taken_0x2454dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2454E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2454DCu;
        // 0x2454e0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2454dc) {
            ctx->pc = 0x245510u;
            goto label_245510;
        }
    }
    ctx->pc = 0x2454E4u;
label_2454e4:
    // 0x2454e4: 0x8c620060  lw          $v0, 0x60($v1)
    ctx->pc = 0x2454e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
label_2454e8:
    // 0x2454e8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2454ec:
    if (ctx->pc == 0x2454ECu) {
        ctx->pc = 0x2454ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2454E8u;
        // 0x2454ec: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2454F0u;
        goto label_2454f0;
    }
    ctx->pc = 0x2454E8u;
    {
        const bool branch_taken_0x2454e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2454ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2454E8u;
        // 0x2454ec: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2454e8) {
            ctx->pc = 0x245508u;
            goto label_245508;
        }
    }
    ctx->pc = 0x2454F0u;
label_2454f0:
    // 0x2454f0: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x2454f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_2454f4:
    // 0x2454f4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2454f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2454f8:
    // 0x2454f8: 0x40f809  jalr        $v0
label_2454fc:
    if (ctx->pc == 0x2454FCu) {
        ctx->pc = 0x2454FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2454F8u;
        // 0x2454fc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245500u;
        goto label_245500;
    }
    ctx->pc = 0x2454F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x245500u);
        ctx->pc = 0x2454FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2454F8u;
        // 0x2454fc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2454F8u, 0x245500u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x245500u;
label_245500:
    // 0x245500: 0x10000003  b           . + 4 + (0x3 << 2)
label_245504:
    if (ctx->pc == 0x245504u) {
        ctx->pc = 0x245504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245500u;
        // 0x245504: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245508u;
        goto label_245508;
    }
    ctx->pc = 0x245500u;
    {
        const bool branch_taken_0x245500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245500u;
        // 0x245504: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245500) {
            ctx->pc = 0x245510u;
            goto label_245510;
        }
    }
    ctx->pc = 0x245508u;
label_245508:
    // 0x245508: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x245508u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24550c:
    // 0x24550c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24550cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_245510:
    // 0x245510: 0x3e00008  jr          $ra
label_245514:
    if (ctx->pc == 0x245514u) {
        ctx->pc = 0x245514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245510u;
        // 0x245514: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245518u;
        goto label_fallthrough_0x245510;
    }
    ctx->pc = 0x245510u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x245514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245510u;
        // 0x245514: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x245510u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x245510:
    ctx->pc = 0x245518u;
}
