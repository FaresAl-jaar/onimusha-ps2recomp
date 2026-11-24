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

// Function: sub_001A45B0
// Address: 0x1a45b0 - 0x1a46e4
void sub_001A45B0_0x1a45b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A45B0_0x1a45b0");
#endif

    switch (ctx->pc) {
        case 0x1a45dcu: goto label_1a45dc;
        default: break;
    }

    ctx->pc = 0x1a45b0u;

    // 0x1a45b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a45b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a45b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a45b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a45b8: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x1a45b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a45bc: 0x10600046  beqz        $v1, . + 4 + (0x46 << 2)
    ctx->pc = 0x1A45BCu;
    {
        const bool branch_taken_0x1a45bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a45bc) {
            ctx->pc = 0x1A46D8u;
            goto label_1a46d8;
        }
    }
    ctx->pc = 0x1A45C4u;
    // 0x1a45c4: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x1a45c4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a45c8: 0x3c050085  lui         $a1, 0x85
    ctx->pc = 0x1a45c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)133 << 16));
    // 0x1a45cc: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x1a45ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x1a45d0: 0x24a5f190  addiu       $a1, $a1, -0xE70
    ctx->pc = 0x1a45d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963600));
    // 0x1a45d4: 0xc04bca8  jal         func_12F2A0
    ctx->pc = 0x1A45D4u;
    SET_GPR_U32(ctx, 31, 0x1A45DCu);
    ctx->pc = 0x1A45D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A45D4u;
    // 0x1a45d8: 0x24846ca0  addiu       $a0, $a0, 0x6CA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F2A0u, 0x1A45D4u, 0x1A45DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A45DCu;
label_1a45dc:
    // 0x1a45dc: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1a45dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1a45e0: 0x2407f7ff  addiu       $a3, $zero, -0x801
    ctx->pc = 0x1a45e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965247));
    // 0x1a45e4: 0x8c28cecc  lw          $t0, -0x3134($at)
    ctx->pc = 0x1a45e4u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x81CECCu));
    // 0x1a45e8: 0x240dfbff  addiu       $t5, $zero, -0x401
    ctx->pc = 0x1a45e8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966271));
    // 0x1a45ec: 0x240cfdff  addiu       $t4, $zero, -0x201
    ctx->pc = 0x1a45ecu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966783));
    // 0x1a45f0: 0x240bff7f  addiu       $t3, $zero, -0x81
    ctx->pc = 0x1a45f0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x1a45f4: 0x240affbf  addiu       $t2, $zero, -0x41
    ctx->pc = 0x1a45f4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x1a45f8: 0x2409ffef  addiu       $t1, $zero, -0x11
    ctx->pc = 0x1a45f8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x1a45fc: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1a45fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1a4600: 0x1073824  and         $a3, $t0, $a3
    ctx->pc = 0x1a4600u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) & GPR_U64(ctx, 7));
    // 0x1a4604: 0x8c2ecec4  lw          $t6, -0x313C($at)
    ctx->pc = 0x1a4604u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954692)));
    // 0x1a4608: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1a4608u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1a460c: 0x8c26cec8  lw          $a2, -0x3138($at)
    ctx->pc = 0x1a460cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x81CEC8u));
    // 0x1a4610: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1a4610u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1a4614: 0x1c63025  or          $a2, $t6, $a2
    ctx->pc = 0x1a4614u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 14) | GPR_U64(ctx, 6));
    // 0x1a4618: 0x8c25ced0  lw          $a1, -0x3130($at)
    ctx->pc = 0x1a4618u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x81CED0u));
    // 0x1a461c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1a461cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1a4620: 0x8c24ced8  lw          $a0, -0x3128($at)
    ctx->pc = 0x1a4620u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81CED8u));
    // 0x1a4624: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1a4624u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1a4628: 0x8c23cedc  lw          $v1, -0x3124($at)
    ctx->pc = 0x1a4628u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEDCu));
    // 0x1a462c: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x1a462cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x1a4630: 0x8c2868a8  lw          $t0, 0x68A8($at)
    ctx->pc = 0x1a4630u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x7E68A8u));
    // 0x1a4634: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1a4634u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1a4638: 0xac27cecc  sw          $a3, -0x3134($at)
    ctx->pc = 0x1a4638u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x81CECCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CECCu, _value); } while (0);
    // 0x1a463c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1a463cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1a4640: 0x3c07f050  lui         $a3, 0xF050
    ctx->pc = 0x1a4640u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)61520 << 16));
    // 0x1a4644: 0x8c2ececc  lw          $t6, -0x3134($at)
    ctx->pc = 0x1a4644u;
    SET_GPR_S32(ctx, 14, (int32_t)FAST_READ32(0x81CECCu));
    // 0x1a4648: 0x34e791ff  ori         $a3, $a3, 0x91FF
    ctx->pc = 0x1a4648u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)37375);
    // 0x1a464c: 0x1073824  and         $a3, $t0, $a3
    ctx->pc = 0x1a464cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) & GPR_U64(ctx, 7));
    // 0x1a4650: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x1a4650u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x1a4654: 0xac2768a8  sw          $a3, 0x68A8($at)
    ctx->pc = 0x1a4654u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x7E68A8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7E68A8u, _value); } while (0);
    // 0x1a4658: 0x1cd3824  and         $a3, $t6, $t5
    ctx->pc = 0x1a4658u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 14) & GPR_U64(ctx, 13));
    // 0x1a465c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1a465cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1a4660: 0xac27cecc  sw          $a3, -0x3134($at)
    ctx->pc = 0x1a4660u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x81CECCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CECCu, _value); } while (0);
    // 0x1a4664: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1a4664u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1a4668: 0x8c27cecc  lw          $a3, -0x3134($at)
    ctx->pc = 0x1a4668u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x81CECCu));
    // 0x1a466c: 0xec3824  and         $a3, $a3, $t4
    ctx->pc = 0x1a466cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 12));
    // 0x1a4670: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1a4670u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1a4674: 0xac27cecc  sw          $a3, -0x3134($at)
    ctx->pc = 0x1a4674u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x81CECCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CECCu, _value); } while (0);
    // 0x1a4678: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1a4678u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1a467c: 0x8c27cecc  lw          $a3, -0x3134($at)
    ctx->pc = 0x1a467cu;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x81CECCu));
    // 0x1a4680: 0xeb3824  and         $a3, $a3, $t3
    ctx->pc = 0x1a4680u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 11));
    // 0x1a4684: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1a4684u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1a4688: 0xac27cecc  sw          $a3, -0x3134($at)
    ctx->pc = 0x1a4688u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x81CECCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CECCu, _value); } while (0);
    // 0x1a468c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1a468cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1a4690: 0x8c27cecc  lw          $a3, -0x3134($at)
    ctx->pc = 0x1a4690u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x81CECCu));
    // 0x1a4694: 0xea3824  and         $a3, $a3, $t2
    ctx->pc = 0x1a4694u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 10));
    // 0x1a4698: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1a4698u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1a469c: 0xac27cecc  sw          $a3, -0x3134($at)
    ctx->pc = 0x1a469cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x81CECCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CECCu, _value); } while (0);
    // 0x1a46a0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1a46a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1a46a4: 0x8c27cecc  lw          $a3, -0x3134($at)
    ctx->pc = 0x1a46a4u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x81CECCu));
    // 0x1a46a8: 0xe93824  and         $a3, $a3, $t1
    ctx->pc = 0x1a46a8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 9));
    // 0x1a46ac: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1a46acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1a46b0: 0xac27cecc  sw          $a3, -0x3134($at)
    ctx->pc = 0x1a46b0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x81CECCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CECCu, _value); } while (0);
    // 0x1a46b4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1a46b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1a46b8: 0x8c27cecc  lw          $a3, -0x3134($at)
    ctx->pc = 0x1a46b8u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x81CECCu));
    // 0x1a46bc: 0xe63025  or          $a2, $a3, $a2
    ctx->pc = 0x1a46bcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x1a46c0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1a46c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1a46c4: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x1a46c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x1a46c8: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x1a46c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x1a46cc: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1a46ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1a46d0: 0xac23cec0  sw          $v1, -0x3140($at)
    ctx->pc = 0x1a46d0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x81CEC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEC0u, _value); } while (0);
    // 0x1a46d4: 0x0  nop
    ctx->pc = 0x1a46d4u;
    // NOP
label_1a46d8:
    // 0x1a46d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a46d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a46dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1A46DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A46E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A46DCu;
        // 0x1a46e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A46DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A46E4u;
}
