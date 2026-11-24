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

// Function: sub_003C0570
// Address: 0x3c0570 - 0x3c05f8
void sub_003C0570_0x3c0570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C0570_0x3c0570");
#endif

    switch (ctx->pc) {
        case 0x3c05b4u: goto label_3c05b4;
        default: break;
    }

    ctx->pc = 0x3c0570u;

    // 0x3c0570: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3c0570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3c0574: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x3c0574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x3c0578: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3c0578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3c057c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3c057cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3c0580: 0x9085000b  lbu         $a1, 0xB($a0)
    ctx->pc = 0x3c0580u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11)));
    // 0x3c0584: 0x10a3000e  beq         $a1, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x3C0584u;
    {
        const bool branch_taken_0x3c0584 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3C0588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0584u;
        // 0x3c0588: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0584) {
            ctx->pc = 0x3C05C0u;
            goto label_3c05c0;
        }
    }
    ctx->pc = 0x3C058Cu;
    // 0x3c058c: 0x9203000a  lbu         $v1, 0xA($s0)
    ctx->pc = 0x3c058cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x3c0590: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x3c0590u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x3c0594: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x3C0594u;
    {
        const bool branch_taken_0x3c0594 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C0598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0594u;
        // 0x3c0598: 0x51880  sll         $v1, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0594) {
            ctx->pc = 0x3C05C0u;
            goto label_3c05c0;
        }
    }
    ctx->pc = 0x3C059Cu;
    // 0x3c059c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x3c059cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x3c05a0: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x3c05a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x3c05a4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3C05A4u;
    {
        const bool branch_taken_0x3c05a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c05a4) {
            ctx->pc = 0x3C05C0u;
            goto label_3c05c0;
        }
    }
    ctx->pc = 0x3C05ACu;
    // 0x3c05ac: 0xc0effc8  jal         func_3BFF20
    ctx->pc = 0x3C05ACu;
    SET_GPR_U32(ctx, 31, 0x3C05B4u);
    ctx->pc = 0x3BFF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFF20u, 0x3C05ACu, 0x3C05B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C05B4u;
label_3c05b4:
    // 0x3c05b4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3C05B4u;
    {
        const bool branch_taken_0x3c05b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C05B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C05B4u;
        // 0x3c05b8: 0xa200004c  sb          $zero, 0x4C($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 76), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c05b4) {
            ctx->pc = 0x3C05E8u;
            goto label_3c05e8;
        }
    }
    ctx->pc = 0x3C05BCu;
    // 0x3c05bc: 0x0  nop
    ctx->pc = 0x3c05bcu;
    // NOP
label_3c05c0:
    // 0x3c05c0: 0x9203004c  lbu         $v1, 0x4C($s0)
    ctx->pc = 0x3c05c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x3c05c4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3c05c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3c05c8: 0xa203004c  sb          $v1, 0x4C($s0)
    ctx->pc = 0x3c05c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 76), (uint8_t)GPR_U32(ctx, 3));
    // 0x3c05cc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3c05ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3c05d0: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3C05D0u;
    {
        const bool branch_taken_0x3c05d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c05d0) {
            ctx->pc = 0x3C05E8u;
            goto label_3c05e8;
        }
    }
    ctx->pc = 0x3C05D8u;
    // 0x3c05d8: 0x9203004c  lbu         $v1, 0x4C($s0)
    ctx->pc = 0x3c05d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x3c05dc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3c05dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3c05e0: 0xa203004c  sb          $v1, 0x4C($s0)
    ctx->pc = 0x3c05e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 76), (uint8_t)GPR_U32(ctx, 3));
    // 0x3c05e4: 0x0  nop
    ctx->pc = 0x3c05e4u;
    // NOP
label_3c05e8:
    // 0x3c05e8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3c05e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3c05ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3c05ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3c05f0: 0x3e00008  jr          $ra
    ctx->pc = 0x3C05F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C05F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C05F0u;
        // 0x3c05f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C05F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C05F8u;
}
