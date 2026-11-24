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

// Function: sub_0033A9C0
// Address: 0x33a9c0 - 0x33aa60
void sub_0033A9C0_0x33a9c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033A9C0_0x33a9c0");
#endif

    switch (ctx->pc) {
        case 0x33aa10u: goto label_33aa10;
        default: break;
    }

    ctx->pc = 0x33a9c0u;

    // 0x33a9c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x33a9c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x33a9c4: 0x3c032f00  lui         $v1, 0x2F00
    ctx->pc = 0x33a9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12032 << 16));
    // 0x33a9c8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x33a9c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x33a9cc: 0x34620500  ori         $v0, $v1, 0x500
    ctx->pc = 0x33a9ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1280);
    // 0x33a9d0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x33a9d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x33a9d4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x33a9d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a9d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x33a9d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x33a9dc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x33a9dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a9e0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x33a9e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a9e4: 0xac900048  sw          $s0, 0x48($a0)
    ctx->pc = 0x33a9e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 16));
    // 0x33a9e8: 0x26070020  addiu       $a3, $s0, 0x20
    ctx->pc = 0x33a9e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x33a9ec: 0x90a608e8  lbu         $a2, 0x8E8($a1)
    ctx->pc = 0x33a9ecu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2280)));
    // 0x33a9f0: 0xac86004c  sw          $a2, 0x4C($a0)
    ctx->pc = 0x33a9f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 6));
    // 0x33a9f4: 0x90a908e8  lbu         $t1, 0x8E8($a1)
    ctx->pc = 0x33a9f4u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2280)));
    // 0x33a9f8: 0x3c040090  lui         $a0, 0x90
    ctx->pc = 0x33a9f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)144 << 16));
    // 0x33a9fc: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x33a9fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x33aa00: 0x24844aa0  addiu       $a0, $a0, 0x4AA0
    ctx->pc = 0x33aa00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19104));
    // 0x33aa04: 0x34650700  ori         $a1, $v1, 0x700
    ctx->pc = 0x33aa04u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1792);
    // 0x33aa08: 0xc0c99d0  jal         func_326740
    ctx->pc = 0x33AA08u;
    SET_GPR_U32(ctx, 31, 0x33AA10u);
    ctx->pc = 0x33AA0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33AA08u;
    // 0x33aa0c: 0x49280a  movz        $a1, $v0, $t1 (Delay Slot)
    if (GPR_U64(ctx, 9) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326740u, 0x33AA08u, 0x33AA10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33AA10u;
label_33aa10:
    // 0x33aa10: 0x920508e8  lbu         $a1, 0x8E8($s0)
    ctx->pc = 0x33aa10u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2280)));
    // 0x33aa14: 0x24070006  addiu       $a3, $zero, 0x6
    ctx->pc = 0x33aa14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x33aa18: 0x24041aa8  addiu       $a0, $zero, 0x1AA8
    ctx->pc = 0x33aa18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6824));
    // 0x33aa1c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x33aa1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x33aa20: 0x53140  sll         $a2, $a1, 5
    ctx->pc = 0x33aa20u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x33aa24: 0x2263021  addu        $a2, $s1, $a2
    ctx->pc = 0x33aa24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x33aa28: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x33aa28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x33aa2c: 0xa0c70000  sb          $a3, 0x0($a2)
    ctx->pc = 0x33aa2cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x33aa30: 0xa0c50001  sb          $a1, 0x1($a2)
    ctx->pc = 0x33aa30u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 5));
    // 0x33aa34: 0xa4c40002  sh          $a0, 0x2($a2)
    ctx->pc = 0x33aa34u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 2), (uint16_t)GPR_U32(ctx, 4));
    // 0x33aa38: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x33aa38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x33aa3c: 0xacc40004  sw          $a0, 0x4($a2)
    ctx->pc = 0x33aa3cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 4));
    // 0x33aa40: 0xacc00008  sw          $zero, 0x8($a2)
    ctx->pc = 0x33aa40u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
    // 0x33aa44: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x33aa44u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
    // 0x33aa48: 0xacc30010  sw          $v1, 0x10($a2)
    ctx->pc = 0x33aa48u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 3));
    // 0x33aa4c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x33aa4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33aa50: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x33aa50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33aa54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x33aa54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33aa58: 0x3e00008  jr          $ra
    ctx->pc = 0x33AA58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33AA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AA58u;
        // 0x33aa5c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33AA58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33AA60u;
}
