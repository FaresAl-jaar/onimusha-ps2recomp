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

// Function: sub_002FF780
// Address: 0x2ff780 - 0x2ff810
void sub_002FF780_0x2ff780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FF780_0x2ff780");
#endif

    switch (ctx->pc) {
        case 0x2ff7bcu: goto label_2ff7bc;
        case 0x2ff7dcu: goto label_2ff7dc;
        case 0x2ff7f8u: goto label_2ff7f8;
        default: break;
    }

    ctx->pc = 0x2ff780u;

    // 0x2ff780: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ff780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2ff784: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2ff784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2ff788: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ff788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2ff78c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ff78cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2ff790: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2ff790u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff794: 0x12200018  beqz        $s1, . + 4 + (0x18 << 2)
    ctx->pc = 0x2FF794u;
    {
        const bool branch_taken_0x2ff794 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF794u;
        // 0x2ff798: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff794) {
            ctx->pc = 0x2FF7F8u;
            goto label_2ff7f8;
        }
    }
    ctx->pc = 0x2FF79Cu;
    // 0x2ff79c: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x2ff79cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x2ff7a0: 0x24427fa0  addiu       $v0, $v0, 0x7FA0
    ctx->pc = 0x2ff7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32672));
    // 0x2ff7a4: 0xae220034  sw          $v0, 0x34($s1)
    ctx->pc = 0x2ff7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 2));
    // 0x2ff7a8: 0x8e240084  lw          $a0, 0x84($s1)
    ctx->pc = 0x2ff7a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
    // 0x2ff7ac: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FF7ACu;
    {
        const bool branch_taken_0x2ff7ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ff7ac) {
            ctx->pc = 0x2FF7C0u;
            goto label_2ff7c0;
        }
    }
    ctx->pc = 0x2FF7B4u;
    // 0x2ff7b4: 0xc0741a8  jal         func_1D06A0
    ctx->pc = 0x2FF7B4u;
    SET_GPR_U32(ctx, 31, 0x2FF7BCu);
    ctx->pc = 0x1D06A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D06A0u, 0x2FF7B4u, 0x2FF7BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF7BCu;
label_2ff7bc:
    // 0x2ff7bc: 0xae200084  sw          $zero, 0x84($s1)
    ctx->pc = 0x2ff7bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 0));
label_2ff7c0:
    // 0x2ff7c0: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2FF7C0u;
    {
        const bool branch_taken_0x2ff7c0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF7C0u;
        // 0x2ff7c4: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff7c0) {
            ctx->pc = 0x2FF7E0u;
            goto label_2ff7e0;
        }
    }
    ctx->pc = 0x2FF7C8u;
    // 0x2ff7c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ff7c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff7cc: 0x24427fd0  addiu       $v0, $v0, 0x7FD0
    ctx->pc = 0x2ff7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32720));
    // 0x2ff7d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ff7d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff7d4: 0xc096b20  jal         func_25AC80
    ctx->pc = 0x2FF7D4u;
    SET_GPR_U32(ctx, 31, 0x2FF7DCu);
    ctx->pc = 0x2FF7D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF7D4u;
    // 0x2ff7d8: 0xae220034  sw          $v0, 0x34($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25AC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AC80u, 0x2FF7D4u, 0x2FF7DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF7DCu;
label_2ff7dc:
    // 0x2ff7dc: 0x0  nop
    ctx->pc = 0x2ff7dcu;
    // NOP
label_2ff7e0:
    // 0x2ff7e0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2ff7e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x2ff7e4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2ff7e4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2ff7e8: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FF7E8u;
    {
        const bool branch_taken_0x2ff7e8 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x2FF7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF7E8u;
        // 0x2ff7ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff7e8) {
            ctx->pc = 0x2FF7F8u;
            goto label_2ff7f8;
        }
    }
    ctx->pc = 0x2FF7F0u;
    // 0x2ff7f0: 0xc0741a8  jal         func_1D06A0
    ctx->pc = 0x2FF7F0u;
    SET_GPR_U32(ctx, 31, 0x2FF7F8u);
    ctx->pc = 0x1D06A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D06A0u, 0x2FF7F0u, 0x2FF7F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF7F8u;
label_2ff7f8:
    // 0x2ff7f8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2ff7f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff7fc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2ff7fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ff800: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ff800u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ff804: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ff804u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ff808: 0x3e00008  jr          $ra
    ctx->pc = 0x2FF808u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FF80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF808u;
        // 0x2ff80c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FF808u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FF810u;
}
