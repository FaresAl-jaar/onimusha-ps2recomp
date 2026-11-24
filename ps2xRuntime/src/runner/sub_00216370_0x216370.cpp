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

// Function: sub_00216370
// Address: 0x216370 - 0x216414
void sub_00216370_0x216370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00216370_0x216370");
#endif

    switch (ctx->pc) {
        case 0x2163bcu: goto label_2163bc;
        case 0x2163f0u: goto label_2163f0;
        default: break;
    }

    ctx->pc = 0x216370u;

    // 0x216370: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x216370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x216374: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x216374u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x216378: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x216378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x21637c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21637cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216380: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x216380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x216384: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x216384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x216388: 0x24428728  addiu       $v0, $v0, -0x78D8
    ctx->pc = 0x216388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936360));
    // 0x21638c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x21638cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x216390: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x216390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x216394: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x216394u;
    {
        const bool branch_taken_0x216394 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x216398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216394u;
        // 0x216398: 0x26110d30  addiu       $s1, $s0, 0xD30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 3376));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216394) {
            ctx->pc = 0x2163B0u;
            goto label_2163b0;
        }
    }
    ctx->pc = 0x21639Cu;
    // 0x21639c: 0x3402ac44  ori         $v0, $zero, 0xAC44
    ctx->pc = 0x21639cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)44100);
    // 0x2163a0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2163a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2163a4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2163A4u;
    {
        const bool branch_taken_0x2163a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2163A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2163A4u;
        // 0x2163a8: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2163a4) {
            ctx->pc = 0x2163D0u;
            goto label_2163d0;
        }
    }
    ctx->pc = 0x2163ACu;
    // 0x2163ac: 0x0  nop
    ctx->pc = 0x2163acu;
    // NOP
label_2163b0:
    // 0x2163b0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2163b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2163b4: 0xc0841c0  jal         func_210700
    ctx->pc = 0x2163B4u;
    SET_GPR_U32(ctx, 31, 0x2163BCu);
    ctx->pc = 0x2163B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2163B4u;
    // 0x2163b8: 0x27a60004  addiu       $a2, $sp, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x210700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210700u, 0x2163B4u, 0x2163BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2163BCu;
label_2163bc:
    // 0x2163bc: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2163BCu;
    {
        const bool branch_taken_0x2163bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2163bc) {
            ctx->pc = 0x2163C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2163BCu;
            // 0x2163c0: 0x8e2201f0  lw          $v0, 0x1F0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 496)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2163D4u;
            goto label_2163d4;
        }
    }
    ctx->pc = 0x2163C4u;
    // 0x2163c4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2163C4u;
    {
        const bool branch_taken_0x2163c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2163C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2163C4u;
        // 0x2163c8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2163c4) {
            ctx->pc = 0x216400u;
            goto label_216400;
        }
    }
    ctx->pc = 0x2163CCu;
    // 0x2163cc: 0x0  nop
    ctx->pc = 0x2163ccu;
    // NOP
label_2163d0:
    // 0x2163d0: 0x8e2201f0  lw          $v0, 0x1F0($s1)
    ctx->pc = 0x2163d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 496)));
label_2163d4:
    // 0x2163d4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2163d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2163d8: 0x8e050d94  lw          $a1, 0xD94($s0)
    ctx->pc = 0x2163d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3476)));
    // 0x2163dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2163dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2163e0: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x2163e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2163e4: 0xae2201f0  sw          $v0, 0x1F0($s1)
    ctx->pc = 0x2163e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 496), GPR_U32(ctx, 2));
    // 0x2163e8: 0xc080568  jal         func_2015A0
    ctx->pc = 0x2163E8u;
    SET_GPR_U32(ctx, 31, 0x2163F0u);
    ctx->pc = 0x2163ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2163E8u;
    // 0x2163ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2015A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2015A0u, 0x2163E8u, 0x2163F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2163F0u;
label_2163f0:
    // 0x2163f0: 0x8e230164  lw          $v1, 0x164($s1)
    ctx->pc = 0x2163f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 356)));
    // 0x2163f4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2163f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2163f8: 0x28440000  slti        $a0, $v0, 0x0
    ctx->pc = 0x2163f8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x2163fc: 0x4100b  movn        $v0, $zero, $a0
    ctx->pc = 0x2163fcu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_216400:
    // 0x216400: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x216400u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x216404: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x216404u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x216408: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x216408u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21640c: 0x3e00008  jr          $ra
    ctx->pc = 0x21640Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x216410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21640Cu;
        // 0x216410: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21640Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x216414u;
}
