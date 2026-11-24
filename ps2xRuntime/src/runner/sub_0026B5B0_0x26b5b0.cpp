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

// Function: sub_0026B5B0
// Address: 0x26b5b0 - 0x26b698
void sub_0026B5B0_0x26b5b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026B5B0_0x26b5b0");
#endif

    switch (ctx->pc) {
        case 0x26b5d8u: goto label_26b5d8;
        case 0x26b600u: goto label_26b600;
        case 0x26b610u: goto label_26b610;
        case 0x26b658u: goto label_26b658;
        case 0x26b668u: goto label_26b668;
        case 0x26b670u: goto label_26b670;
        default: break;
    }

    ctx->pc = 0x26b5b0u;

    // 0x26b5b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x26b5b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x26b5b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x26b5b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x26b5b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x26b5b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x26b5bc: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x26b5bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x26b5c0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x26B5C0u;
    {
        const bool branch_taken_0x26b5c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B5C0u;
        // 0x26b5c4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b5c0) {
            ctx->pc = 0x26B5D0u;
            goto label_26b5d0;
        }
    }
    ctx->pc = 0x26B5C8u;
    // 0x26b5c8: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x26B5C8u;
    {
        const bool branch_taken_0x26b5c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26b5c8) {
            ctx->pc = 0x26B688u;
            goto label_26b688;
        }
    }
    ctx->pc = 0x26B5D0u;
label_26b5d0:
    // 0x26b5d0: 0xc05551c  jal         func_155470
    ctx->pc = 0x26B5D0u;
    SET_GPR_U32(ctx, 31, 0x26B5D8u);
    ctx->pc = 0x26B5D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B5D0u;
    // 0x26b5d4: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155470u, 0x26B5D0u, 0x26B5D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B5D8u;
label_26b5d8:
    // 0x26b5d8: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x26B5D8u;
    {
        const bool branch_taken_0x26b5d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26B5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B5D8u;
        // 0x26b5dc: 0x3c010093  lui         $at, 0x93 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b5d8) {
            ctx->pc = 0x26B688u;
            goto label_26b688;
        }
    }
    ctx->pc = 0x26B5E0u;
    // 0x26b5e0: 0x9023ff2c  lbu         $v1, -0xD4($at)
    ctx->pc = 0x26b5e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294967084)));
    // 0x26b5e4: 0x28630003  slti        $v1, $v1, 0x3
    ctx->pc = 0x26b5e4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x26b5e8: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x26b5e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x26b5ec: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x26b5ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x26b5f0: 0x10600025  beqz        $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x26B5F0u;
    {
        const bool branch_taken_0x26b5f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B5F0u;
        // 0x26b5f4: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b5f0) {
            ctx->pc = 0x26B688u;
            goto label_26b688;
        }
    }
    ctx->pc = 0x26B5F8u;
    // 0x26b5f8: 0xc0550b4  jal         func_1542D0
    ctx->pc = 0x26B5F8u;
    SET_GPR_U32(ctx, 31, 0x26B600u);
    ctx->pc = 0x1542D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1542D0u, 0x26B5F8u, 0x26B600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B600u;
label_26b600:
    // 0x26b600: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x26b600u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x26b604: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x26b604u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x26b608: 0xc05e390  jal         func_178E40
    ctx->pc = 0x26B608u;
    SET_GPR_U32(ctx, 31, 0x26B610u);
    ctx->pc = 0x26B60Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B608u;
    // 0x26b60c: 0x2484cea0  addiu       $a0, $a0, -0x3160 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178E40u, 0x26B608u, 0x26B610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B610u;
label_26b610:
    // 0x26b610: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x26b610u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x26b614: 0x3c02ff7f  lui         $v0, 0xFF7F
    ctx->pc = 0x26b614u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65407 << 16));
    // 0x26b618: 0x8c26ceb8  lw          $a2, -0x3148($at)
    ctx->pc = 0x26b618u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x26b61c: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x26b61cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x26b620: 0x3c02ffbf  lui         $v0, 0xFFBF
    ctx->pc = 0x26b620u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65471 << 16));
    // 0x26b624: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x26b624u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x26b628: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x26b628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x26b62c: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x26b62cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    // 0x26b630: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x26b630u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x26b634: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x26b634u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x26b638: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x26b638u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x26b63c: 0xac23ceb8  sw          $v1, -0x3148($at)
    ctx->pc = 0x26b63cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x81CEB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEB8u, _value); } while (0);
    // 0x26b640: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x26b640u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x26b644: 0x8c23ceb8  lw          $v1, -0x3148($at)
    ctx->pc = 0x26b644u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x26b648: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x26b648u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x26b64c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x26b64cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x26b650: 0xc04ca38  jal         func_1328E0
    ctx->pc = 0x26B650u;
    SET_GPR_U32(ctx, 31, 0x26B658u);
    ctx->pc = 0x26B654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B650u;
    // 0x26b654: 0xac22ceb8  sw          $v0, -0x3148($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954680), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1328E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1328E0u, 0x26B650u, 0x26B658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B658u;
label_26b658:
    // 0x26b658: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x26b658u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x26b65c: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x26b65cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x26b660: 0xc04ca38  jal         func_1328E0
    ctx->pc = 0x26B660u;
    SET_GPR_U32(ctx, 31, 0x26B668u);
    ctx->pc = 0x26B664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B660u;
    // 0x26b664: 0x2484fe40  addiu       $a0, $a0, -0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1328E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1328E0u, 0x26B660u, 0x26B668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B668u;
label_26b668:
    // 0x26b668: 0xc09c3f4  jal         func_270FD0
    ctx->pc = 0x26B668u;
    SET_GPR_U32(ctx, 31, 0x26B670u);
    ctx->pc = 0x270FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270FD0u, 0x26B668u, 0x26B670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B670u;
label_26b670:
    // 0x26b670: 0x92040002  lbu         $a0, 0x2($s0)
    ctx->pc = 0x26b670u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x26b674: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x26b674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26b678: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x26b678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x26b67c: 0xa2040002  sb          $a0, 0x2($s0)
    ctx->pc = 0x26b67cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x26b680: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x26b680u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x26b684: 0x0  nop
    ctx->pc = 0x26b684u;
    // NOP
label_26b688:
    // 0x26b688: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x26b688u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26b68c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26b68cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26b690: 0x3e00008  jr          $ra
    ctx->pc = 0x26B690u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26B694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B690u;
        // 0x26b694: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26B690u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26B698u;
}
