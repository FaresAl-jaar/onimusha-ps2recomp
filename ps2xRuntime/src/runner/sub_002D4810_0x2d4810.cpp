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

// Function: sub_002D4810
// Address: 0x2d4810 - 0x2d48ac
void sub_002D4810_0x2d4810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D4810_0x2d4810");
#endif

    switch (ctx->pc) {
        case 0x2d485cu: goto label_2d485c;
        case 0x2d4890u: goto label_2d4890;
        default: break;
    }

    ctx->pc = 0x2d4810u;

    // 0x2d4810: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d4810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2d4814: 0x3c030410  lui         $v1, 0x410
    ctx->pc = 0x2d4814u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1040 << 16));
    // 0x2d4818: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2d4818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2d481c: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x2d481cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x2d4820: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d4820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d4824: 0x34630047  ori         $v1, $v1, 0x47
    ctx->pc = 0x2d4824u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)71);
    // 0x2d4828: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d4828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d482c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2d482cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4830: 0x8c900000  lw          $s0, 0x0($a0)
    ctx->pc = 0x2d4830u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d4834: 0x344217fd  ori         $v0, $v0, 0x17FD
    ctx->pc = 0x2d4834u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6141);
    // 0x2d4838: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x2d4838u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x2d483c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2d483cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4840: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x2d4840u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x2d4844: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x2d4844u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x2d4848: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x2d4848u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x2d484c: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x2d484cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x2d4850: 0x8e260040  lw          $a2, 0x40($s1)
    ctx->pc = 0x2d4850u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x2d4854: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x2D4854u;
    SET_GPR_U32(ctx, 31, 0x2D485Cu);
    ctx->pc = 0x2D4858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4854u;
    // 0x2d4858: 0x2484cc60  addiu       $a0, $a0, -0x33A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954080));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x2D4854u, 0x2D485Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D485Cu;
label_2d485c:
    // 0x2d485c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2d485cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2d4860: 0x3c020410  lui         $v0, 0x410
    ctx->pc = 0x2d4860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1040 << 16));
    // 0x2d4864: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x2d4864u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x2d4868: 0x3442004e  ori         $v0, $v0, 0x4E
    ctx->pc = 0x2d4868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)78);
    // 0x2d486c: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x2d486cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x2d4870: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x2d4870u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x2d4874: 0x3c023a00  lui         $v0, 0x3A00
    ctx->pc = 0x2d4874u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14848 << 16));
    // 0x2d4878: 0x2484cc60  addiu       $a0, $a0, -0x33A0
    ctx->pc = 0x2d4878u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954080));
    // 0x2d487c: 0x344200c0  ori         $v0, $v0, 0xC0
    ctx->pc = 0x2d487cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)192);
    // 0x2d4880: 0xfe020018  sd          $v0, 0x18($s0)
    ctx->pc = 0x2d4880u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 2));
    // 0x2d4884: 0x8e260040  lw          $a2, 0x40($s1)
    ctx->pc = 0x2d4884u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x2d4888: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x2D4888u;
    SET_GPR_U32(ctx, 31, 0x2D4890u);
    ctx->pc = 0x2D488Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4888u;
    // 0x2d488c: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x2D4888u, 0x2D4890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4890u;
label_2d4890:
    // 0x2d4890: 0x26100020  addiu       $s0, $s0, 0x20
    ctx->pc = 0x2d4890u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x2d4894: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x2d4894u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    // 0x2d4898: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2d4898u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d489c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d489cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d48a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d48a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d48a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2D48A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D48A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D48A4u;
        // 0x2d48a8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D48A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D48ACu;
}
