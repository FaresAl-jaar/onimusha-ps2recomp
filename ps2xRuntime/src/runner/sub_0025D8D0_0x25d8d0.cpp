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

// Function: sub_0025D8D0
// Address: 0x25d8d0 - 0x25d9c4
void sub_0025D8D0_0x25d8d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025D8D0_0x25d8d0");
#endif

    switch (ctx->pc) {
        case 0x25d910u: goto label_25d910;
        case 0x25d924u: goto label_25d924;
        case 0x25d938u: goto label_25d938;
        case 0x25d98cu: goto label_25d98c;
        default: break;
    }

    ctx->pc = 0x25d8d0u;

    // 0x25d8d0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x25d8d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x25d8d4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x25d8d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x25d8d8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x25d8d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x25d8dc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x25d8dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x25d8e0: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x25d8e0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d8e4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x25d8e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x25d8e8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x25d8e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x25d8ec: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x25d8ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d8f0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25d8f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x25d8f4: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x25d8f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x25d8f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25d8f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25d8fc: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x25d8fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d900: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x25d900u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d904: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x25d904u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d908: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x25D908u;
    SET_GPR_U32(ctx, 31, 0x25D910u);
    ctx->pc = 0x25D90Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D908u;
    // 0x25d90c: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x25D908u, 0x25D910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D910u;
label_25d910:
    // 0x25d910: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x25d910u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x25d914: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x25d914u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d918: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x25d918u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d91c: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x25D91Cu;
    SET_GPR_U32(ctx, 31, 0x25D924u);
    ctx->pc = 0x25D920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D91Cu;
    // 0x25d920: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x25D91Cu, 0x25D924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D924u;
label_25d924:
    // 0x25d924: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x25d924u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x25d928: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x25d928u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d92c: 0x24844570  addiu       $a0, $a0, 0x4570
    ctx->pc = 0x25d92cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    // 0x25d930: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x25D930u;
    SET_GPR_U32(ctx, 31, 0x25D938u);
    ctx->pc = 0x25D934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D930u;
    // 0x25d934: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x25D930u, 0x25D938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D938u;
label_25d938:
    // 0x25d938: 0x12000017  beqz        $s0, . + 4 + (0x17 << 2)
    ctx->pc = 0x25D938u;
    {
        const bool branch_taken_0x25d938 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x25d938) {
            ctx->pc = 0x25D998u;
            goto label_25d998;
        }
    }
    ctx->pc = 0x25D940u;
    // 0x25d940: 0x12800015  beqz        $s4, . + 4 + (0x15 << 2)
    ctx->pc = 0x25D940u;
    {
        const bool branch_taken_0x25d940 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x25d940) {
            ctx->pc = 0x25D998u;
            goto label_25d998;
        }
    }
    ctx->pc = 0x25D948u;
    // 0x25d948: 0x12a0000b  beqz        $s5, . + 4 + (0xB << 2)
    ctx->pc = 0x25D948u;
    {
        const bool branch_taken_0x25d948 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x25d948) {
            ctx->pc = 0x25D978u;
            goto label_25d978;
        }
    }
    ctx->pc = 0x25D950u;
    // 0x25d950: 0x960429de  lhu         $a0, 0x29DE($s0)
    ctx->pc = 0x25d950u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10718)));
    // 0x25d954: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x25d954u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x25d958: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25d958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25d95c: 0x621004  sllv        $v0, $v0, $v1
    ctx->pc = 0x25d95cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x25d960: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x25d960u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x25d964: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25D964u;
    {
        const bool branch_taken_0x25d964 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D964u;
        // 0x25d968: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d964) {
            ctx->pc = 0x25D978u;
            goto label_25d978;
        }
    }
    ctx->pc = 0x25D96Cu;
    // 0x25d96c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x25D96Cu;
    {
        const bool branch_taken_0x25d96c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25d96c) {
            ctx->pc = 0x25D9A0u;
            goto label_25d9a0;
        }
    }
    ctx->pc = 0x25D974u;
    // 0x25d974: 0x0  nop
    ctx->pc = 0x25d974u;
    // NOP
label_25d978:
    // 0x25d978: 0x322500ff  andi        $a1, $s1, 0xFF
    ctx->pc = 0x25d978u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x25d97c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25d97cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d980: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x25d980u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d984: 0xc0a5564  jal         func_295590
    ctx->pc = 0x25D984u;
    SET_GPR_U32(ctx, 31, 0x25D98Cu);
    ctx->pc = 0x25D988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D984u;
    // 0x25d988: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295590u, 0x25D984u, 0x25D98Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D98Cu;
label_25d98c:
    // 0x25d98c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x25D98Cu;
    {
        const bool branch_taken_0x25d98c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D98Cu;
        // 0x25d990: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d98c) {
            ctx->pc = 0x25D9A0u;
            goto label_25d9a0;
        }
    }
    ctx->pc = 0x25D994u;
    // 0x25d994: 0x0  nop
    ctx->pc = 0x25d994u;
    // NOP
label_25d998:
    // 0x25d998: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x25d998u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d99c: 0x0  nop
    ctx->pc = 0x25d99cu;
    // NOP
label_25d9a0:
    // 0x25d9a0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x25d9a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x25d9a4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x25d9a4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25d9a8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x25d9a8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25d9ac: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x25d9acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25d9b0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x25d9b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25d9b4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25d9b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25d9b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25d9b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25d9bc: 0x3e00008  jr          $ra
    ctx->pc = 0x25D9BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25D9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D9BCu;
        // 0x25d9c0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25D9BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25D9C4u;
}
