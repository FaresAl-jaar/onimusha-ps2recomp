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

// Function: sub_0029C450
// Address: 0x29c450 - 0x29c51c
void sub_0029C450_0x29c450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029C450_0x29c450");
#endif

    switch (ctx->pc) {
        case 0x29c47cu: goto label_29c47c;
        case 0x29c4b8u: goto label_29c4b8;
        case 0x29c4c0u: goto label_29c4c0;
        case 0x29c4f4u: goto label_29c4f4;
        case 0x29c504u: goto label_29c504;
        default: break;
    }

    ctx->pc = 0x29c450u;

    // 0x29c450: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x29c450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x29c454: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x29c454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x29c458: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x29c458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x29c45c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x29c45cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x29c460: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29c460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x29c464: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x29c464u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c468: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29c468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x29c46c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x29c46cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c470: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x29c470u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c474: 0xc0a6c8c  jal         func_29B230
    ctx->pc = 0x29C474u;
    SET_GPR_U32(ctx, 31, 0x29C47Cu);
    ctx->pc = 0x29C478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C474u;
    // 0x29c478: 0xa0820000  sb          $v0, 0x0($a0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29B230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29B230u, 0x29C474u, 0x29C47Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C47Cu;
label_29c47c:
    // 0x29c47c: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x29c47cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x29c480: 0xa242050e  sb          $v0, 0x50E($s2)
    ctx->pc = 0x29c480u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1294), (uint8_t)GPR_U32(ctx, 2));
    // 0x29c484: 0x9222000a  lbu         $v0, 0xA($s1)
    ctx->pc = 0x29c484u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x29c488: 0xa242000a  sb          $v0, 0xA($s2)
    ctx->pc = 0x29c488u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 10), (uint8_t)GPR_U32(ctx, 2));
    // 0x29c48c: 0x8e440050  lw          $a0, 0x50($s2)
    ctx->pc = 0x29c48cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x29c490: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x29C490u;
    {
        const bool branch_taken_0x29c490 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x29c490) {
            ctx->pc = 0x29C4B8u;
            goto label_29c4b8;
        }
    }
    ctx->pc = 0x29C498u;
    // 0x29c498: 0x908300ce  lbu         $v1, 0xCE($a0)
    ctx->pc = 0x29c498u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 206)));
    // 0x29c49c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29c49cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29c4a0: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x29C4A0u;
    {
        const bool branch_taken_0x29c4a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x29C4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C4A0u;
        // 0x29c4a4: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c4a0) {
            ctx->pc = 0x29C4B8u;
            goto label_29c4b8;
        }
    }
    ctx->pc = 0x29C4A8u;
    // 0x29c4a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29c4a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c4ac: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x29c4acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c4b0: 0xc060a74  jal         func_1829D0
    ctx->pc = 0x29C4B0u;
    SET_GPR_U32(ctx, 31, 0x29C4B8u);
    ctx->pc = 0x29C4B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C4B0u;
    // 0x29c4b4: 0xc0402d  daddu       $t0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1829D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1829D0u, 0x29C4B0u, 0x29C4B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C4B8u;
label_29c4b8:
    // 0x29c4b8: 0xc09f968  jal         func_27E5A0
    ctx->pc = 0x29C4B8u;
    SET_GPR_U32(ctx, 31, 0x29C4C0u);
    ctx->pc = 0x29C4BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C4B8u;
    // 0x29c4bc: 0x264401c0  addiu       $a0, $s2, 0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27E5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E5A0u, 0x29C4B8u, 0x29C4C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C4C0u;
label_29c4c0:
    // 0x29c4c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29c4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29c4c4: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x29C4C4u;
    {
        const bool branch_taken_0x29c4c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C4C4u;
        // 0x29c4c8: 0xa2420208  sb          $v0, 0x208($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 520), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c4c4) {
            ctx->pc = 0x29C4D8u;
            goto label_29c4d8;
        }
    }
    ctx->pc = 0x29C4CCu;
    // 0x29c4cc: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x29c4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x29c4d0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x29C4D0u;
    {
        const bool branch_taken_0x29c4d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C4D0u;
        // 0x29c4d4: 0xae420500  sw          $v0, 0x500($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1280), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c4d0) {
            ctx->pc = 0x29C4E0u;
            goto label_29c4e0;
        }
    }
    ctx->pc = 0x29C4D8u;
label_29c4d8:
    // 0x29c4d8: 0xae400500  sw          $zero, 0x500($s2)
    ctx->pc = 0x29c4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1280), GPR_U32(ctx, 0));
    // 0x29c4dc: 0x0  nop
    ctx->pc = 0x29c4dcu;
    // NOP
label_29c4e0:
    // 0x29c4e0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x29c4e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c4e4: 0x264404e0  addiu       $a0, $s2, 0x4E0
    ctx->pc = 0x29c4e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1248));
    // 0x29c4e8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x29c4e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c4ec: 0xc09d6b8  jal         func_275AE0
    ctx->pc = 0x29C4ECu;
    SET_GPR_U32(ctx, 31, 0x29C4F4u);
    ctx->pc = 0x29C4F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C4ECu;
    // 0x29c4f0: 0xa2500505  sb          $s0, 0x505($s2) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 18), 1285), (uint8_t)GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275AE0u, 0x29C4ECu, 0x29C4F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C4F4u;
label_29c4f4:
    // 0x29c4f4: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x29c4f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x29c4f8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x29c4f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c4fc: 0xc0a7394  jal         func_29CE50
    ctx->pc = 0x29C4FCu;
    SET_GPR_U32(ctx, 31, 0x29C504u);
    ctx->pc = 0x29C500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C4FCu;
    // 0x29c500: 0x24844e70  addiu       $a0, $a0, 0x4E70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20080));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29CE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29CE50u, 0x29C4FCu, 0x29C504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C504u;
label_29c504:
    // 0x29c504: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x29c504u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29c508: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x29c508u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29c50c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29c50cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29c510: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29c510u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29c514: 0x3e00008  jr          $ra
    ctx->pc = 0x29C514u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29C518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C514u;
        // 0x29c518: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29C514u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29C51Cu;
}
