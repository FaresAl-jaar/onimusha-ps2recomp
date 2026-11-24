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

// Function: sub_002CB140
// Address: 0x2cb140 - 0x2cb1dc
void sub_002CB140_0x2cb140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CB140_0x2cb140");
#endif

    switch (ctx->pc) {
        case 0x2cb1ccu: goto label_2cb1cc;
        default: break;
    }

    ctx->pc = 0x2cb140u;

    // 0x2cb140: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2cb140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2cb144: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2cb144u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2cb148: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cb148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2cb14c: 0x27868060  addiu       $a2, $gp, -0x7FA0
    ctx->pc = 0x2cb14cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x2cb150: 0x90236c1c  lbu         $v1, 0x6C1C($at)
    ctx->pc = 0x2cb150u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x2cb154: 0x93858a24  lbu         $a1, -0x75DC($gp)
    ctx->pc = 0x2cb154u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937124)));
    // 0x2cb158: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x2cb158u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2cb15c: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x2cb15cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x2cb160: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x2cb160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x2cb164: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2cb164u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2cb168: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x2cb168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2cb16c: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x2cb16cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2cb170: 0x10a00017  beqz        $a1, . + 4 + (0x17 << 2)
    ctx->pc = 0x2CB170u;
    {
        const bool branch_taken_0x2cb170 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB170u;
        // 0x2cb174: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb170) {
            ctx->pc = 0x2CB1D0u;
            goto label_2cb1d0;
        }
    }
    ctx->pc = 0x2CB178u;
    // 0x2cb178: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2cb178u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2cb17c: 0x8c23cebc  lw          $v1, -0x3144($at)
    ctx->pc = 0x2cb17cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x2cb180: 0x30632000  andi        $v1, $v1, 0x2000
    ctx->pc = 0x2cb180u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
    // 0x2cb184: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x2CB184u;
    {
        const bool branch_taken_0x2cb184 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cb184) {
            ctx->pc = 0x2CB1C0u;
            goto label_2cb1c0;
        }
    }
    ctx->pc = 0x2CB18Cu;
    // 0x2cb18c: 0x10c00010  beqz        $a2, . + 4 + (0x10 << 2)
    ctx->pc = 0x2CB18Cu;
    {
        const bool branch_taken_0x2cb18c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cb18c) {
            ctx->pc = 0x2CB1D0u;
            goto label_2cb1d0;
        }
    }
    ctx->pc = 0x2CB194u;
    // 0x2cb194: 0x8cc329c0  lw          $v1, 0x29C0($a2)
    ctx->pc = 0x2cb194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 10688)));
    // 0x2cb198: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x2cb198u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2cb19c: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2CB19Cu;
    {
        const bool branch_taken_0x2cb19c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cb19c) {
            ctx->pc = 0x2CB1D0u;
            goto label_2cb1d0;
        }
    }
    ctx->pc = 0x2CB1A4u;
    // 0x2cb1a4: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x2CB1A4u;
    {
        const bool branch_taken_0x2cb1a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cb1a4) {
            ctx->pc = 0x2CB1D0u;
            goto label_2cb1d0;
        }
    }
    ctx->pc = 0x2CB1ACu;
    // 0x2cb1ac: 0x8c8329c0  lw          $v1, 0x29C0($a0)
    ctx->pc = 0x2cb1acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10688)));
    // 0x2cb1b0: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x2cb1b0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2cb1b4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2CB1B4u;
    {
        const bool branch_taken_0x2cb1b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cb1b4) {
            ctx->pc = 0x2CB1D0u;
            goto label_2cb1d0;
        }
    }
    ctx->pc = 0x2CB1BCu;
    // 0x2cb1bc: 0x0  nop
    ctx->pc = 0x2cb1bcu;
    // NOP
label_2cb1c0:
    // 0x2cb1c0: 0x3c040092  lui         $a0, 0x92
    ctx->pc = 0x2cb1c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
    // 0x2cb1c4: 0xc0e3640  jal         func_38D900
    ctx->pc = 0x2CB1C4u;
    SET_GPR_U32(ctx, 31, 0x2CB1CCu);
    ctx->pc = 0x2CB1C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB1C4u;
    // 0x2cb1c8: 0x248428b0  addiu       $a0, $a0, 0x28B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38D900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D900u, 0x2CB1C4u, 0x2CB1CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB1CCu;
label_2cb1cc:
    // 0x2cb1cc: 0xa3808a24  sb          $zero, -0x75DC($gp)
    ctx->pc = 0x2cb1ccu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937124), (uint8_t)GPR_U32(ctx, 0));
label_2cb1d0:
    // 0x2cb1d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cb1d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cb1d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2CB1D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CB1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB1D4u;
        // 0x2cb1d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CB1D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CB1DCu;
}
