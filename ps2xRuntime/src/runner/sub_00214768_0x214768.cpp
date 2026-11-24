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

// Function: sub_00214768
// Address: 0x214768 - 0x214808
void sub_00214768_0x214768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00214768_0x214768");
#endif

    switch (ctx->pc) {
        case 0x2147acu: goto label_2147ac;
        case 0x2147c8u: goto label_2147c8;
        case 0x2147e8u: goto label_2147e8;
        default: break;
    }

    ctx->pc = 0x214768u;

    // 0x214768: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x214768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x21476c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x21476cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x214770: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x214770u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214774: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x214774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x214778: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x214778u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21477c: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x21477cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x214780: 0x26500030  addiu       $s0, $s2, 0x30
    ctx->pc = 0x214780u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x214784: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x214784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x214788: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x214788u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21478c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x21478cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x214790: 0x27a80004  addiu       $t0, $sp, 0x4
    ctx->pc = 0x214790u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x214794: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x214794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x214798: 0x8cb10000  lw          $s1, 0x0($a1)
    ctx->pc = 0x214798u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x21479c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x21479cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2147a0: 0x8e060160  lw          $a2, 0x160($s0)
    ctx->pc = 0x2147a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
    // 0x2147a4: 0xc07ed0c  jal         func_1FB430
    ctx->pc = 0x2147A4u;
    SET_GPR_U32(ctx, 31, 0x2147ACu);
    ctx->pc = 0x2147A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2147A4u;
    // 0x2147a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB430u, 0x2147A4u, 0x2147ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2147ACu;
label_2147ac:
    // 0x2147ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2147acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2147b0: 0x8e060164  lw          $a2, 0x164($s0)
    ctx->pc = 0x2147b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 356)));
    // 0x2147b4: 0x264500e0  addiu       $a1, $s2, 0xE0
    ctx->pc = 0x2147b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 224));
    // 0x2147b8: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x2147b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2147bc: 0x27a80004  addiu       $t0, $sp, 0x4
    ctx->pc = 0x2147bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x2147c0: 0xc07ed0c  jal         func_1FB430
    ctx->pc = 0x2147C0u;
    SET_GPR_U32(ctx, 31, 0x2147C8u);
    ctx->pc = 0x2147C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2147C0u;
    // 0x2147c4: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB430u, 0x2147C0u, 0x2147C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2147C8u;
label_2147c8:
    // 0x2147c8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2147c8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2147cc: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x2147ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x2147d0: 0x16600003  bnez        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x2147D0u;
    {
        const bool branch_taken_0x2147d0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x2147D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2147D0u;
        // 0x2147d4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2147d0) {
            ctx->pc = 0x2147E0u;
            goto label_2147e0;
        }
    }
    ctx->pc = 0x2147D8u;
    // 0x2147d8: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2147D8u;
    {
        const bool branch_taken_0x2147d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2147DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2147D8u;
        // 0x2147dc: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2147d8) {
            ctx->pc = 0x2147ECu;
            goto label_2147ec;
        }
    }
    ctx->pc = 0x2147E0u;
label_2147e0:
    // 0x2147e0: 0xc0848e0  jal         func_212380
    ctx->pc = 0x2147E0u;
    SET_GPR_U32(ctx, 31, 0x2147E8u);
    ctx->pc = 0x2147E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2147E0u;
    // 0x2147e4: 0x34a50d0d  ori         $a1, $a1, 0xD0D (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3341);
    ctx->in_delay_slot = false;
    ctx->pc = 0x212380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212380u, 0x2147E0u, 0x2147E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2147E8u;
label_2147e8:
    // 0x2147e8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2147e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2147ec:
    // 0x2147ec: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2147ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2147f0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2147f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2147f4: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x2147f4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2147f8: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x2147f8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2147fc: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x2147fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x214800: 0x3e00008  jr          $ra
    ctx->pc = 0x214800u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x214804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214800u;
        // 0x214804: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x214800u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x214808u;
}
