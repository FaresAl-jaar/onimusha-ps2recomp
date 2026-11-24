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

// Function: sub_00253878
// Address: 0x253878 - 0x25390c
void sub_00253878_0x253878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00253878_0x253878");
#endif

    switch (ctx->pc) {
        case 0x253878u: goto label_253878;
        case 0x25387cu: goto label_25387c;
        case 0x253880u: goto label_253880;
        case 0x253884u: goto label_253884;
        case 0x253888u: goto label_253888;
        case 0x25388cu: goto label_25388c;
        case 0x253890u: goto label_253890;
        case 0x253894u: goto label_253894;
        case 0x253898u: goto label_253898;
        case 0x25389cu: goto label_25389c;
        case 0x2538a0u: goto label_2538a0;
        case 0x2538a4u: goto label_2538a4;
        case 0x2538a8u: goto label_2538a8;
        case 0x2538acu: goto label_2538ac;
        case 0x2538b0u: goto label_2538b0;
        case 0x2538b4u: goto label_2538b4;
        case 0x2538b8u: goto label_2538b8;
        case 0x2538bcu: goto label_2538bc;
        case 0x2538c0u: goto label_2538c0;
        case 0x2538c4u: goto label_2538c4;
        case 0x2538c8u: goto label_2538c8;
        case 0x2538ccu: goto label_2538cc;
        case 0x2538d0u: goto label_2538d0;
        case 0x2538d4u: goto label_2538d4;
        case 0x2538d8u: goto label_2538d8;
        case 0x2538dcu: goto label_2538dc;
        case 0x2538e0u: goto label_2538e0;
        case 0x2538e4u: goto label_2538e4;
        case 0x2538e8u: goto label_2538e8;
        case 0x2538ecu: goto label_2538ec;
        case 0x2538f0u: goto label_2538f0;
        case 0x2538f4u: goto label_2538f4;
        case 0x2538f8u: goto label_2538f8;
        case 0x2538fcu: goto label_2538fc;
        case 0x253900u: goto label_253900;
        case 0x253904u: goto label_253904;
        case 0x253908u: goto label_253908;
        default: break;
    }

    ctx->pc = 0x253878u;

label_253878:
    // 0x253878: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x253878u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_25387c:
    // 0x25387c: 0x2ca20006  sltiu       $v0, $a1, 0x6
    ctx->pc = 0x25387cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_253880:
    // 0x253880: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x253880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_253884:
    // 0x253884: 0x2c830008  sltiu       $v1, $a0, 0x8
    ctx->pc = 0x253884u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_253888:
    // 0x253888: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_25388c:
    if (ctx->pc == 0x25388Cu) {
        ctx->pc = 0x25388Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253888u;
        // 0x25388c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x253890u;
        goto label_253890;
    }
    ctx->pc = 0x253888u;
    {
        const bool branch_taken_0x253888 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25388Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253888u;
        // 0x25388c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253888) {
            ctx->pc = 0x2538A0u;
            goto label_2538a0;
        }
    }
    ctx->pc = 0x253890u;
label_253890:
    // 0x253890: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x253890u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_253894:
    // 0x253894: 0x10000006  b           . + 4 + (0x6 << 2)
label_253898:
    if (ctx->pc == 0x253898u) {
        ctx->pc = 0x253898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253894u;
        // 0x253898: 0x2484f0a0  addiu       $a0, $a0, -0xF60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963360));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25389Cu;
        goto label_25389c;
    }
    ctx->pc = 0x253894u;
    {
        const bool branch_taken_0x253894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x253898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253894u;
        // 0x253898: 0x2484f0a0  addiu       $a0, $a0, -0xF60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963360));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253894) {
            ctx->pc = 0x2538B0u;
            goto label_2538b0;
        }
    }
    ctx->pc = 0x25389Cu;
label_25389c:
    // 0x25389c: 0x0  nop
    ctx->pc = 0x25389cu;
    // NOP
label_2538a0:
    // 0x2538a0: 0x54600007  bnel        $v1, $zero, . + 4 + (0x7 << 2)
label_2538a4:
    if (ctx->pc == 0x2538A4u) {
        ctx->pc = 0x2538A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2538A0u;
        // 0x2538a4: 0x410c0  sll         $v0, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2538A8u;
        goto label_2538a8;
    }
    ctx->pc = 0x2538A0u;
    {
        const bool branch_taken_0x2538a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2538a0) {
            ctx->pc = 0x2538A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2538A0u;
            // 0x2538a4: 0x410c0  sll         $v0, $a0, 3 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2538C0u;
            goto label_2538c0;
        }
    }
    ctx->pc = 0x2538A8u;
label_2538a8:
    // 0x2538a8: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x2538a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_2538ac:
    // 0x2538ac: 0x2484f0c8  addiu       $a0, $a0, -0xF38
    ctx->pc = 0x2538acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963400));
label_2538b0:
    // 0x2538b0: 0xc094c1e  jal         func_253078
label_2538b4:
    if (ctx->pc == 0x2538B4u) {
        ctx->pc = 0x2538B8u;
        goto label_2538b8;
    }
    ctx->pc = 0x2538B0u;
    SET_GPR_U32(ctx, 31, 0x2538B8u);
    ctx->pc = 0x253078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253078u, 0x2538B0u, 0x2538B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2538B8u;
label_2538b8:
    // 0x2538b8: 0x10000011  b           . + 4 + (0x11 << 2)
label_2538bc:
    if (ctx->pc == 0x2538BCu) {
        ctx->pc = 0x2538BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2538B8u;
        // 0x2538bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2538C0u;
        goto label_2538c0;
    }
    ctx->pc = 0x2538B8u;
    {
        const bool branch_taken_0x2538b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2538BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2538B8u;
        // 0x2538bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2538b8) {
            ctx->pc = 0x253900u;
            goto label_253900;
        }
    }
    ctx->pc = 0x2538C0u;
label_2538c0:
    // 0x2538c0: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x2538c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_2538c4:
    // 0x2538c4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2538c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2538c8:
    // 0x2538c8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2538c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_2538cc:
    // 0x2538cc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2538ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2538d0:
    // 0x2538d0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2538d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_2538d4:
    // 0x2538d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2538d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2538d8:
    // 0x2538d8: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x2538d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
label_2538dc:
    // 0x2538dc: 0x242186e0  addiu       $at, $at, -0x7920
    ctx->pc = 0x2538dcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 4294936288));
label_2538e0:
    // 0x2538e0: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x2538e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
label_2538e4:
    // 0x2538e4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2538e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2538e8:
    // 0x2538e8: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
label_2538ec:
    if (ctx->pc == 0x2538ECu) {
        ctx->pc = 0x2538ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2538E8u;
        // 0x2538ec: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2538F0u;
        goto label_2538f0;
    }
    ctx->pc = 0x2538E8u;
    {
        const bool branch_taken_0x2538e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2538e8) {
            ctx->pc = 0x2538ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2538E8u;
            // 0x2538ec: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x253900u;
            goto label_253900;
        }
    }
    ctx->pc = 0x2538F0u;
label_2538f0:
    // 0x2538f0: 0x60f809  jalr        $v1
label_2538f4:
    if (ctx->pc == 0x2538F4u) {
        ctx->pc = 0x2538F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2538F0u;
        // 0x2538f4: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2538F8u;
        goto label_2538f8;
    }
    ctx->pc = 0x2538F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2538F8u);
        ctx->pc = 0x2538F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2538F0u;
        // 0x2538f4: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2538F0u, 0x2538F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2538F8u;
label_2538f8:
    // 0x2538f8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2538f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2538fc:
    // 0x2538fc: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x2538fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_253900:
    // 0x253900: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x253900u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_253904:
    // 0x253904: 0x3e00008  jr          $ra
label_253908:
    if (ctx->pc == 0x253908u) {
        ctx->pc = 0x253908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253904u;
        // 0x253908: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25390Cu;
        goto label_fallthrough_0x253904;
    }
    ctx->pc = 0x253904u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x253908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253904u;
        // 0x253908: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x253904u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x253904:
    ctx->pc = 0x25390Cu;
}
