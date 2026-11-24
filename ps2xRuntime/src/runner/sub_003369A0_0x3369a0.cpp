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

// Function: sub_003369A0
// Address: 0x3369a0 - 0x336a44
void sub_003369A0_0x3369a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003369A0_0x3369a0");
#endif

    switch (ctx->pc) {
        case 0x3369c4u: goto label_3369c4;
        default: break;
    }

    ctx->pc = 0x3369a0u;

    // 0x3369a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3369a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3369a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3369a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3369a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3369a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3369ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3369acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3369b0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x3369b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3369b4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x3369b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3369b8: 0x94440004  lhu         $a0, 0x4($v0)
    ctx->pc = 0x3369b8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x3369bc: 0xc0d23ec  jal         func_348FB0
    ctx->pc = 0x3369BCu;
    SET_GPR_U32(ctx, 31, 0x3369C4u);
    ctx->pc = 0x3369C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3369BCu;
    // 0x3369c0: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x348FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348FB0u, 0x3369BCu, 0x3369C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3369C4u;
label_3369c4:
    // 0x3369c4: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x3369c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3369c8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x3369c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x3369cc: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x3369CCu;
    {
        const bool branch_taken_0x3369cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3369cc) {
            ctx->pc = 0x3369F8u;
            goto label_3369f8;
        }
    }
    ctx->pc = 0x3369D4u;
    // 0x3369d4: 0x92050008  lbu         $a1, 0x8($s0)
    ctx->pc = 0x3369d4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3369d8: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x3369d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x3369dc: 0x64040002  daddiu      $a0, $zero, 0x2
    ctx->pc = 0x3369dcu;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)2);
    // 0x3369e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3369e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3369e4: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x3369e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x3369e8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x3369e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x3369ec: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x3369ECu;
    {
        const bool branch_taken_0x3369ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3369F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3369ECu;
        // 0x3369f0: 0xa2030008  sb          $v1, 0x8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3369ec) {
            ctx->pc = 0x336A30u;
            goto label_336a30;
        }
    }
    ctx->pc = 0x3369F4u;
    // 0x3369f4: 0x0  nop
    ctx->pc = 0x3369f4u;
    // NOP
label_3369f8:
    // 0x3369f8: 0x9442000a  lhu         $v0, 0xA($v0)
    ctx->pc = 0x3369f8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x3369fc: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3369FCu;
    {
        const bool branch_taken_0x3369fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3369fc) {
            ctx->pc = 0x336A28u;
            goto label_336a28;
        }
    }
    ctx->pc = 0x336A04u;
    // 0x336a04: 0x92050008  lbu         $a1, 0x8($s0)
    ctx->pc = 0x336a04u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x336a08: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x336a08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x336a0c: 0x64040003  daddiu      $a0, $zero, 0x3
    ctx->pc = 0x336a0cu;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)3);
    // 0x336a10: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x336a10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x336a14: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x336a14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x336a18: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x336a18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x336a1c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x336A1Cu;
    {
        const bool branch_taken_0x336a1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x336A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336A1Cu;
        // 0x336a20: 0xa2030008  sb          $v1, 0x8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336a1c) {
            ctx->pc = 0x336A30u;
            goto label_336a30;
        }
    }
    ctx->pc = 0x336A24u;
    // 0x336a24: 0x0  nop
    ctx->pc = 0x336a24u;
    // NOP
label_336a28:
    // 0x336a28: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x336a28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x336a2c: 0x0  nop
    ctx->pc = 0x336a2cu;
    // NOP
label_336a30:
    // 0x336a30: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x336a30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x336a34: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x336a34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x336a38: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x336a38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x336a3c: 0x3e00008  jr          $ra
    ctx->pc = 0x336A3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x336A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336A3Cu;
        // 0x336a40: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x336A3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x336A44u;
}
