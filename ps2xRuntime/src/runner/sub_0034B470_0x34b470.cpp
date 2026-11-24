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

// Function: sub_0034B470
// Address: 0x34b470 - 0x34b4ec
void sub_0034B470_0x34b470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034B470_0x34b470");
#endif

    switch (ctx->pc) {
        case 0x34b484u: goto label_34b484;
        case 0x34b48cu: goto label_34b48c;
        default: break;
    }

    ctx->pc = 0x34b470u;

    // 0x34b470: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x34b470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x34b474: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x34b474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x34b478: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x34b478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x34b47c: 0xc0a4a1c  jal         func_292870
    ctx->pc = 0x34B47Cu;
    SET_GPR_U32(ctx, 31, 0x34B484u);
    ctx->pc = 0x34B480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B47Cu;
    // 0x34b480: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292870u, 0x34B47Cu, 0x34B484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B484u;
label_34b484:
    // 0x34b484: 0xc04d4a0  jal         func_135280
    ctx->pc = 0x34B484u;
    SET_GPR_U32(ctx, 31, 0x34B48Cu);
    ctx->pc = 0x135280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135280u, 0x34B484u, 0x34B48Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B48Cu;
label_34b48c:
    // 0x34b48c: 0x8e06004c  lw          $a2, 0x4C($s0)
    ctx->pc = 0x34b48cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x34b490: 0x30470001  andi        $a3, $v0, 0x1
    ctx->pc = 0x34b490u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x34b494: 0x71940  sll         $v1, $a3, 5
    ctx->pc = 0x34b494u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
    // 0x34b498: 0x3c040800  lui         $a0, 0x800
    ctx->pc = 0x34b498u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2048 << 16));
    // 0x34b49c: 0x672823  subu        $a1, $v1, $a3
    ctx->pc = 0x34b49cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x34b4a0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34b4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34b4a4: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x34b4a4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x34b4a8: 0xe31804  sllv        $v1, $v1, $a3
    ctx->pc = 0x34b4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 7) & 0x1F));
    // 0x34b4ac: 0x601827  not         $v1, $v1
    ctx->pc = 0x34b4acu;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 3) | GPR_U64(ctx, 0)));
    // 0x34b4b0: 0x8cc6007c  lw          $a2, 0x7C($a2)
    ctx->pc = 0x34b4b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 124)));
    // 0x34b4b4: 0xa63021  addu        $a2, $a1, $a2
    ctx->pc = 0x34b4b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x34b4b8: 0x8cc50004  lw          $a1, 0x4($a2)
    ctx->pc = 0x34b4b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x34b4bc: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x34b4bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x34b4c0: 0xacc40004  sw          $a0, 0x4($a2)
    ctx->pc = 0x34b4c0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 4));
    // 0x34b4c4: 0xae0304c4  sw          $v1, 0x4C4($s0)
    ctx->pc = 0x34b4c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1220), GPR_U32(ctx, 3));
    // 0x34b4c8: 0xae0304c8  sw          $v1, 0x4C8($s0)
    ctx->pc = 0x34b4c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1224), GPR_U32(ctx, 3));
    // 0x34b4cc: 0xae0304cc  sw          $v1, 0x4CC($s0)
    ctx->pc = 0x34b4ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1228), GPR_U32(ctx, 3));
    // 0x34b4d0: 0xae002b60  sw          $zero, 0x2B60($s0)
    ctx->pc = 0x34b4d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11104), GPR_U32(ctx, 0));
    // 0x34b4d4: 0xa2002b69  sb          $zero, 0x2B69($s0)
    ctx->pc = 0x34b4d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11113), (uint8_t)GPR_U32(ctx, 0));
    // 0x34b4d8: 0xae002b64  sw          $zero, 0x2B64($s0)
    ctx->pc = 0x34b4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11108), GPR_U32(ctx, 0));
    // 0x34b4dc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x34b4dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34b4e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34b4e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34b4e4: 0x3e00008  jr          $ra
    ctx->pc = 0x34B4E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34B4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B4E4u;
        // 0x34b4e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34B4E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34B4ECu;
}
