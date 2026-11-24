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

// Function: sub_002D48B0
// Address: 0x2d48b0 - 0x2d494c
void sub_002D48B0_0x2d48b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D48B0_0x2d48b0");
#endif

    switch (ctx->pc) {
        case 0x2d48fcu: goto label_2d48fc;
        case 0x2d4930u: goto label_2d4930;
        default: break;
    }

    ctx->pc = 0x2d48b0u;

    // 0x2d48b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d48b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2d48b4: 0x3c030410  lui         $v1, 0x410
    ctx->pc = 0x2d48b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1040 << 16));
    // 0x2d48b8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2d48b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2d48bc: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x2d48bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x2d48c0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d48c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d48c4: 0x34630047  ori         $v1, $v1, 0x47
    ctx->pc = 0x2d48c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)71);
    // 0x2d48c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d48c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d48cc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2d48ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d48d0: 0x8c900000  lw          $s0, 0x0($a0)
    ctx->pc = 0x2d48d0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d48d4: 0x344217fd  ori         $v0, $v0, 0x17FD
    ctx->pc = 0x2d48d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6141);
    // 0x2d48d8: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x2d48d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x2d48dc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2d48dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d48e0: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x2d48e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x2d48e4: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x2d48e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x2d48e8: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x2d48e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x2d48ec: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x2d48ecu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x2d48f0: 0x8e260040  lw          $a2, 0x40($s1)
    ctx->pc = 0x2d48f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x2d48f4: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x2D48F4u;
    SET_GPR_U32(ctx, 31, 0x2D48FCu);
    ctx->pc = 0x2D48F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D48F4u;
    // 0x2d48f8: 0x2484cc60  addiu       $a0, $a0, -0x33A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954080));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x2D48F4u, 0x2D48FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D48FCu;
label_2d48fc:
    // 0x2d48fc: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2d48fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2d4900: 0x3c020410  lui         $v0, 0x410
    ctx->pc = 0x2d4900u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1040 << 16));
    // 0x2d4904: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x2d4904u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x2d4908: 0x3442004e  ori         $v0, $v0, 0x4E
    ctx->pc = 0x2d4908u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)78);
    // 0x2d490c: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x2d490cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x2d4910: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x2d4910u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x2d4914: 0x3c023a00  lui         $v0, 0x3A00
    ctx->pc = 0x2d4914u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14848 << 16));
    // 0x2d4918: 0x2484cc60  addiu       $a0, $a0, -0x33A0
    ctx->pc = 0x2d4918u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954080));
    // 0x2d491c: 0x344200c0  ori         $v0, $v0, 0xC0
    ctx->pc = 0x2d491cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)192);
    // 0x2d4920: 0xfe020018  sd          $v0, 0x18($s0)
    ctx->pc = 0x2d4920u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 2));
    // 0x2d4924: 0x8e260040  lw          $a2, 0x40($s1)
    ctx->pc = 0x2d4924u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x2d4928: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x2D4928u;
    SET_GPR_U32(ctx, 31, 0x2D4930u);
    ctx->pc = 0x2D492Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4928u;
    // 0x2d492c: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x2D4928u, 0x2D4930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4930u;
label_2d4930:
    // 0x2d4930: 0x26100020  addiu       $s0, $s0, 0x20
    ctx->pc = 0x2d4930u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x2d4934: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x2d4934u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    // 0x2d4938: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2d4938u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d493c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d493cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d4940: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d4940u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d4944: 0x3e00008  jr          $ra
    ctx->pc = 0x2D4944u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D4948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4944u;
        // 0x2d4948: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D4944u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D494Cu;
}
