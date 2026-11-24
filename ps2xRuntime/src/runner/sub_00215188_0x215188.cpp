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

// Function: sub_00215188
// Address: 0x215188 - 0x215224
void sub_00215188_0x215188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00215188_0x215188");
#endif

    switch (ctx->pc) {
        case 0x2151b0u: goto label_2151b0;
        case 0x2151c0u: goto label_2151c0;
        case 0x2151f4u: goto label_2151f4;
        default: break;
    }

    ctx->pc = 0x215188u;

    // 0x215188: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x215188u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x21518c: 0x2405005d  addiu       $a1, $zero, 0x5D
    ctx->pc = 0x21518cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 93));
    // 0x215190: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x215190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x215194: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x215194u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215198: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x215198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x21519c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x21519cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2151a0: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x2151a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x2151a4: 0x8e111fc0  lw          $s1, 0x1FC0($s0)
    ctx->pc = 0x2151a4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8128)));
    // 0x2151a8: 0xc087ed0  jal         func_21FB40
    ctx->pc = 0x2151A8u;
    SET_GPR_U32(ctx, 31, 0x2151B0u);
    ctx->pc = 0x2151ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2151A8u;
    // 0x2151ac: 0x8e320000  lw          $s2, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FB40u, 0x2151A8u, 0x2151B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2151B0u;
label_2151b0:
    // 0x2151b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2151b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2151b4: 0x2405005e  addiu       $a1, $zero, 0x5E
    ctx->pc = 0x2151b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 94));
    // 0x2151b8: 0xc087ed0  jal         func_21FB40
    ctx->pc = 0x2151B8u;
    SET_GPR_U32(ctx, 31, 0x2151C0u);
    ctx->pc = 0x2151BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2151B8u;
    // 0x2151bc: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FB40u, 0x2151B8u, 0x2151C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2151C0u;
label_2151c0:
    // 0x2151c0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2151c0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2151c4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2151c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2151c8: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2151C8u;
    {
        const bool branch_taken_0x2151c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2151CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2151C8u;
        // 0x2151cc: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2151c8) {
            ctx->pc = 0x21520Cu;
            goto label_21520c;
        }
    }
    ctx->pc = 0x2151D0u;
    // 0x2151d0: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x2151D0u;
    {
        const bool branch_taken_0x2151d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2151D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2151D0u;
        // 0x2151d4: 0x240200c0  addiu       $v0, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2151d0) {
            ctx->pc = 0x21520Cu;
            goto label_21520c;
        }
    }
    ctx->pc = 0x2151D8u;
    // 0x2151d8: 0x8e230078  lw          $v1, 0x78($s1)
    ctx->pc = 0x2151d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x2151dc: 0x5462000c  bnel        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2151DCu;
    {
        const bool branch_taken_0x2151dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2151dc) {
            ctx->pc = 0x2151E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2151DCu;
            // 0x2151e0: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x215210u;
            goto label_215210;
        }
    }
    ctx->pc = 0x2151E4u;
    // 0x2151e4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2151e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2151e8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2151e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2151ec: 0xc07fc48  jal         func_1FF120
    ctx->pc = 0x2151ECu;
    SET_GPR_U32(ctx, 31, 0x2151F4u);
    ctx->pc = 0x2151F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2151ECu;
    // 0x2151f0: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF120u, 0x2151ECu, 0x2151F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2151F4u;
label_2151f4:
    // 0x2151f4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2151F4u;
    {
        const bool branch_taken_0x2151f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2151F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2151F4u;
        // 0x2151f8: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2151f4) {
            ctx->pc = 0x215210u;
            goto label_215210;
        }
    }
    ctx->pc = 0x2151FCu;
    // 0x2151fc: 0x240200c8  addiu       $v0, $zero, 0xC8
    ctx->pc = 0x2151fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x215200: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x215200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x215204: 0xae220078  sw          $v0, 0x78($s1)
    ctx->pc = 0x215204u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 2));
    // 0x215208: 0xae230074  sw          $v1, 0x74($s1)
    ctx->pc = 0x215208u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 3));
label_21520c:
    // 0x21520c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x21520cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_215210:
    // 0x215210: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x215210u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x215214: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x215214u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x215218: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x215218u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x21521c: 0x3e00008  jr          $ra
    ctx->pc = 0x21521Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x215220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21521Cu;
        // 0x215220: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21521Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x215224u;
}
