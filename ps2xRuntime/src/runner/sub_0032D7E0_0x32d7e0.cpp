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

// Function: sub_0032D7E0
// Address: 0x32d7e0 - 0x32d880
void sub_0032D7E0_0x32d7e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032D7E0_0x32d7e0");
#endif

    switch (ctx->pc) {
        case 0x32d7f4u: goto label_32d7f4;
        case 0x32d83cu: goto label_32d83c;
        case 0x32d870u: goto label_32d870;
        default: break;
    }

    ctx->pc = 0x32d7e0u;

    // 0x32d7e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x32d7e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x32d7e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x32d7e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x32d7e8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x32d7e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x32d7ec: 0xc0cb620  jal         func_32D880
    ctx->pc = 0x32D7ECu;
    SET_GPR_U32(ctx, 31, 0x32D7F4u);
    ctx->pc = 0x32D7F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D7ECu;
    // 0x32d7f0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32D880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32D880u, 0x32D7ECu, 0x32D7F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D7F4u;
label_32d7f4:
    // 0x32d7f4: 0xa2020005  sb          $v0, 0x5($s0)
    ctx->pc = 0x32d7f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 2));
    // 0x32d7f8: 0x92040004  lbu         $a0, 0x4($s0)
    ctx->pc = 0x32d7f8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x32d7fc: 0x92030005  lbu         $v1, 0x5($s0)
    ctx->pc = 0x32d7fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
    // 0x32d800: 0x1083001b  beq         $a0, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x32D800u;
    {
        const bool branch_taken_0x32d800 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x32d800) {
            ctx->pc = 0x32D870u;
            goto label_32d870;
        }
    }
    ctx->pc = 0x32D808u;
    // 0x32d808: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32d808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32d80c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x32d80cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x32d810: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x32d810u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x32d814: 0x2484cbe0  addiu       $a0, $a0, -0x3420
    ctx->pc = 0x32d814u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    // 0x32d818: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x32d818u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x32d81c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x32d81cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x32d820: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x32d820u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x32d824: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x32d824u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d828: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x32d828u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d82c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x32d82cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d830: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x32d830u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x32d834: 0xc063cd0  jal         func_18F340
    ctx->pc = 0x32D834u;
    SET_GPR_U32(ctx, 31, 0x32D83Cu);
    ctx->pc = 0x32D838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D834u;
    // 0x32d838: 0xa2000001  sb          $zero, 0x1($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F340u, 0x32D834u, 0x32D83Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D83Cu;
label_32d83c:
    // 0x32d83c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x32d83cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x32d840: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x32d840u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x32d844: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x32d844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x32d848: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x32d848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x32d84c: 0x3c020500  lui         $v0, 0x500
    ctx->pc = 0x32d84cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1280 << 16));
    // 0x32d850: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x32d850u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d854: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x32d854u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x32d858: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x32d858u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d85c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x32d85cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d860: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x32d860u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d864: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x32d864u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d868: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x32D868u;
    SET_GPR_U32(ctx, 31, 0x32D870u);
    ctx->pc = 0x32D86Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D868u;
    // 0x32d86c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x32D868u, 0x32D870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D870u;
label_32d870:
    // 0x32d870: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x32d870u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32d874: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x32d874u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32d878: 0x3e00008  jr          $ra
    ctx->pc = 0x32D878u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32D87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D878u;
        // 0x32d87c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32D878u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32D880u;
}
