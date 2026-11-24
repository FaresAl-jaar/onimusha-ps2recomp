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

// Function: sub_003BBB50
// Address: 0x3bbb50 - 0x3bbbf8
void sub_003BBB50_0x3bbb50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BBB50_0x3bbb50");
#endif

    switch (ctx->pc) {
        case 0x3bbba4u: goto label_3bbba4;
        case 0x3bbbc8u: goto label_3bbbc8;
        case 0x3bbbe4u: goto label_3bbbe4;
        default: break;
    }

    ctx->pc = 0x3bbb50u;

    // 0x3bbb50: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3bbb50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3bbb54: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x3bbb54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x3bbb58: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3bbb58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3bbb5c: 0x27828060  addiu       $v0, $gp, -0x7FA0
    ctx->pc = 0x3bbb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x3bbb60: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3bbb60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3bbb64: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3bbb64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3bbb68: 0xdf838428  ld          $v1, -0x7BD8($gp)
    ctx->pc = 0x3bbb68u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294935592)));
    // 0x3bbb6c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3bbb6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bbb70: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x3bbb70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x3bbb74: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x3bbb74u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
    // 0x3bbb78: 0x90236c1c  lbu         $v1, 0x6C1C($at)
    ctx->pc = 0x3bbb78u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x3bbb7c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3bbb7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3bbb80: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3bbb80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3bbb84: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3bbb84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3bbb88: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3BBB88u;
    {
        const bool branch_taken_0x3bbb88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3bbb88) {
            ctx->pc = 0x3BBB98u;
            goto label_3bbb98;
        }
    }
    ctx->pc = 0x3BBB90u;
    // 0x3bbb90: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3bbb90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bbb94: 0x0  nop
    ctx->pc = 0x3bbb94u;
    // NOP
label_3bbb98:
    // 0x3bbb98: 0x8e042b50  lw          $a0, 0x2B50($s0)
    ctx->pc = 0x3bbb98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11088)));
    // 0x3bbb9c: 0xc0edd90  jal         func_3B7640
    ctx->pc = 0x3BBB9Cu;
    SET_GPR_U32(ctx, 31, 0x3BBBA4u);
    ctx->pc = 0x3BBBA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BBB9Cu;
    // 0x3bbba0: 0x24450020  addiu       $a1, $v0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B7640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B7640u, 0x3BBB9Cu, 0x3BBBA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BBBA4u;
label_3bbba4:
    // 0x3bbba4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x3bbba4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3bbba8: 0x8e052b50  lw          $a1, 0x2B50($s0)
    ctx->pc = 0x3bbba8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11088)));
    // 0x3bbbac: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3bbbacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3bbbb0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3bbbb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3bbbb4: 0x438823  subu        $s1, $v0, $v1
    ctx->pc = 0x3bbbb4u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3bbbb8: 0x3c023e00  lui         $v0, 0x3E00
    ctx->pc = 0x3bbbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15872 << 16));
    // 0x3bbbbc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3bbbbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3bbbc0: 0xc0eddec  jal         func_3B77B0
    ctx->pc = 0x3BBBC0u;
    SET_GPR_U32(ctx, 31, 0x3BBBC8u);
    ctx->pc = 0x3BBBC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BBBC0u;
    // 0x3bbbc4: 0x322600ff  andi        $a2, $s1, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B77B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B77B0u, 0x3BBBC0u, 0x3BBBC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BBBC8u;
label_3bbbc8:
    // 0x3bbbc8: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x3bbbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x3bbbcc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3bbbccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bbbd0: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x3bbbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x3bbbd4: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x3bbbd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3bbbd8: 0x84470048  lh          $a3, 0x48($v0)
    ctx->pc = 0x3bbbd8u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x3bbbdc: 0xc0eef1c  jal         func_3BBC70
    ctx->pc = 0x3BBBDCu;
    SET_GPR_U32(ctx, 31, 0x3BBBE4u);
    ctx->pc = 0x3BBBE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BBBDCu;
    // 0x3bbbe0: 0x2406001e  addiu       $a2, $zero, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BBC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BBC70u, 0x3BBBDCu, 0x3BBBE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BBBE4u;
label_3bbbe4:
    // 0x3bbbe4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3bbbe4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3bbbe8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3bbbe8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3bbbec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3bbbecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3bbbf0: 0x3e00008  jr          $ra
    ctx->pc = 0x3BBBF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BBBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BBBF0u;
        // 0x3bbbf4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BBBF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BBBF8u;
}
