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

// Function: sub_0021D7A8
// Address: 0x21d7a8 - 0x21d80c
void sub_0021D7A8_0x21d7a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021D7A8_0x21d7a8");
#endif

    switch (ctx->pc) {
        case 0x21d7a8u: goto label_21d7a8;
        case 0x21d7acu: goto label_21d7ac;
        case 0x21d7b0u: goto label_21d7b0;
        case 0x21d7b4u: goto label_21d7b4;
        case 0x21d7b8u: goto label_21d7b8;
        case 0x21d7bcu: goto label_21d7bc;
        case 0x21d7c0u: goto label_21d7c0;
        case 0x21d7c4u: goto label_21d7c4;
        case 0x21d7c8u: goto label_21d7c8;
        case 0x21d7ccu: goto label_21d7cc;
        case 0x21d7d0u: goto label_21d7d0;
        case 0x21d7d4u: goto label_21d7d4;
        case 0x21d7d8u: goto label_21d7d8;
        case 0x21d7dcu: goto label_21d7dc;
        case 0x21d7e0u: goto label_21d7e0;
        case 0x21d7e4u: goto label_21d7e4;
        case 0x21d7e8u: goto label_21d7e8;
        case 0x21d7ecu: goto label_21d7ec;
        case 0x21d7f0u: goto label_21d7f0;
        case 0x21d7f4u: goto label_21d7f4;
        case 0x21d7f8u: goto label_21d7f8;
        case 0x21d7fcu: goto label_21d7fc;
        case 0x21d800u: goto label_21d800;
        case 0x21d804u: goto label_21d804;
        case 0x21d808u: goto label_21d808;
        default: break;
    }

    ctx->pc = 0x21d7a8u;

label_21d7a8:
    // 0x21d7a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21d7a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_21d7ac:
    // 0x21d7ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21d7acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_21d7b0:
    // 0x21d7b0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21d7b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_21d7b4:
    // 0x21d7b4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x21d7b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_21d7b8:
    // 0x21d7b8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x21d7b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_21d7bc:
    // 0x21d7bc: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x21d7bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_21d7c0:
    // 0x21d7c0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x21d7c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_21d7c4:
    // 0x21d7c4: 0x26300950  addiu       $s0, $s1, 0x950
    ctx->pc = 0x21d7c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 2384));
label_21d7c8:
    // 0x21d7c8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x21d7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_21d7cc:
    // 0x21d7cc: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x21d7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_21d7d0:
    // 0x21d7d0: 0x24050024  addiu       $a1, $zero, 0x24
    ctx->pc = 0x21d7d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_21d7d4:
    // 0x21d7d4: 0xc087ed0  jal         func_21FB40
label_21d7d8:
    if (ctx->pc == 0x21D7D8u) {
        ctx->pc = 0x21D7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D7D4u;
        // 0x21d7d8: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D7DCu;
        goto label_21d7dc;
    }
    ctx->pc = 0x21D7D4u;
    SET_GPR_U32(ctx, 31, 0x21D7DCu);
    ctx->pc = 0x21D7D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D7D4u;
    // 0x21d7d8: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FB40u, 0x21D7D4u, 0x21D7DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D7DCu;
label_21d7dc:
    // 0x21d7dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21d7dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_21d7e0:
    // 0x21d7e0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x21d7e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_21d7e4:
    // 0x21d7e4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_21d7e8:
    if (ctx->pc == 0x21D7E8u) {
        ctx->pc = 0x21D7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D7E4u;
        // 0x21d7e8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D7ECu;
        goto label_21d7ec;
    }
    ctx->pc = 0x21D7E4u;
    {
        const bool branch_taken_0x21d7e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D7E4u;
        // 0x21d7e8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d7e4) {
            ctx->pc = 0x21D7F4u;
            goto label_21d7f4;
        }
    }
    ctx->pc = 0x21D7ECu;
label_21d7ec:
    // 0x21d7ec: 0x40f809  jalr        $v0
label_21d7f0:
    if (ctx->pc == 0x21D7F0u) {
        ctx->pc = 0x21D7F4u;
        goto label_21d7f4;
    }
    ctx->pc = 0x21D7ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21D7F4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21D7ECu, 0x21D7F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21D7F4u;
label_21d7f4:
    // 0x21d7f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21d7f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_21d7f8:
    // 0x21d7f8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21d7f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_21d7fc:
    // 0x21d7fc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x21d7fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_21d800:
    // 0x21d800: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x21d800u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_21d804:
    // 0x21d804: 0x3e00008  jr          $ra
label_21d808:
    if (ctx->pc == 0x21D808u) {
        ctx->pc = 0x21D808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D804u;
        // 0x21d808: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D80Cu;
        goto label_fallthrough_0x21d804;
    }
    ctx->pc = 0x21D804u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21D808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D804u;
        // 0x21d808: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21D804u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x21d804:
    ctx->pc = 0x21D80Cu;
}
