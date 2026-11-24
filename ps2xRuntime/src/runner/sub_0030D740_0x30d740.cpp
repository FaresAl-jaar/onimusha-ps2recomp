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

// Function: sub_0030D740
// Address: 0x30d740 - 0x30d7c4
void sub_0030D740_0x30d740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030D740_0x30d740");
#endif

    switch (ctx->pc) {
        case 0x30d764u: goto label_30d764;
        case 0x30d778u: goto label_30d778;
        case 0x30d78cu: goto label_30d78c;
        case 0x30d79cu: goto label_30d79c;
        case 0x30d7a4u: goto label_30d7a4;
        default: break;
    }

    ctx->pc = 0x30d740u;

    // 0x30d740: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x30d740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x30d744: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x30d744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x30d748: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x30d748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x30d74c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x30d74cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d750: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x30d750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x30d754: 0x8e250518  lw          $a1, 0x518($s1)
    ctx->pc = 0x30d754u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1304)));
    // 0x30d758: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x30d758u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x30d75c: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x30D75Cu;
    SET_GPR_U32(ctx, 31, 0x30D764u);
    ctx->pc = 0x30D760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D75Cu;
    // 0x30d760: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x30D75Cu, 0x30D764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D764u;
label_30d764:
    // 0x30d764: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x30d764u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d768: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x30D768u;
    {
        const bool branch_taken_0x30d768 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D768u;
        // 0x30d76c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d768) {
            ctx->pc = 0x30D790u;
            goto label_30d790;
        }
    }
    ctx->pc = 0x30D770u;
    // 0x30d770: 0xc0c085c  jal         func_302170
    ctx->pc = 0x30D770u;
    SET_GPR_U32(ctx, 31, 0x30D778u);
    ctx->pc = 0x302170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302170u, 0x30D770u, 0x30D778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D778u;
label_30d778:
    // 0x30d778: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x30d778u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x30d77c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x30d77cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d780: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x30d780u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x30d784: 0xc097674  jal         func_25D9D0
    ctx->pc = 0x30D784u;
    SET_GPR_U32(ctx, 31, 0x30D78Cu);
    ctx->pc = 0x30D788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D784u;
    // 0x30d788: 0x2407000d  addiu       $a3, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25D9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D9D0u, 0x30D784u, 0x30D78Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D78Cu;
label_30d78c:
    // 0x30d78c: 0x0  nop
    ctx->pc = 0x30d78cu;
    // NOP
label_30d790:
    // 0x30d790: 0x8e250550  lw          $a1, 0x550($s1)
    ctx->pc = 0x30d790u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1360)));
    // 0x30d794: 0xc0c0844  jal         func_302110
    ctx->pc = 0x30D794u;
    SET_GPR_U32(ctx, 31, 0x30D79Cu);
    ctx->pc = 0x30D798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D794u;
    // 0x30d798: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302110u, 0x30D794u, 0x30D79Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D79Cu;
label_30d79c:
    // 0x30d79c: 0xc0c0858  jal         func_302160
    ctx->pc = 0x30D79Cu;
    SET_GPR_U32(ctx, 31, 0x30D7A4u);
    ctx->pc = 0x30D7A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D79Cu;
    // 0x30d7a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302160u, 0x30D79Cu, 0x30D7A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D7A4u;
label_30d7a4:
    // 0x30d7a4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x30D7A4u;
    {
        const bool branch_taken_0x30d7a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30d7a4) {
            ctx->pc = 0x30D7B0u;
            goto label_30d7b0;
        }
    }
    ctx->pc = 0x30D7ACu;
    // 0x30d7ac: 0xa440056e  sh          $zero, 0x56E($v0)
    ctx->pc = 0x30d7acu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 1390), (uint16_t)GPR_U32(ctx, 0));
label_30d7b0:
    // 0x30d7b0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x30d7b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30d7b4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x30d7b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30d7b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30d7b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30d7bc: 0x3e00008  jr          $ra
    ctx->pc = 0x30D7BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30D7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D7BCu;
        // 0x30d7c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30D7BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30D7C4u;
}
