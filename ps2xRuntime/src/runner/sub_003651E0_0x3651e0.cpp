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

// Function: sub_003651E0
// Address: 0x3651e0 - 0x365300
void sub_003651E0_0x3651e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003651E0_0x3651e0");
#endif

    switch (ctx->pc) {
        case 0x365234u: goto label_365234;
        case 0x365248u: goto label_365248;
        case 0x365270u: goto label_365270;
        case 0x365280u: goto label_365280;
        case 0x3652c8u: goto label_3652c8;
        case 0x3652d8u: goto label_3652d8;
        case 0x3652e4u: goto label_3652e4;
        case 0x3652ecu: goto label_3652ec;
        default: break;
    }

    ctx->pc = 0x3651e0u;

    // 0x3651e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3651e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3651e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3651e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3651e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3651e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3651ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3651ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3651f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3651f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3651f4: 0x90840002  lbu         $a0, 0x2($a0)
    ctx->pc = 0x3651f4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x3651f8: 0x10830011  beq         $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x3651F8u;
    {
        const bool branch_taken_0x3651f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3651f8) {
            ctx->pc = 0x365240u;
            goto label_365240;
        }
    }
    ctx->pc = 0x365200u;
    // 0x365200: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x365200u;
    {
        const bool branch_taken_0x365200 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x365200) {
            ctx->pc = 0x365210u;
            goto label_365210;
        }
    }
    ctx->pc = 0x365208u;
    // 0x365208: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x365208u;
    {
        const bool branch_taken_0x365208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x365208) {
            ctx->pc = 0x3652F0u;
            goto label_3652f0;
        }
    }
    ctx->pc = 0x365210u;
label_365210:
    // 0x365210: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x365210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x365214: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x365214u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x365218: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x365218u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x36521c: 0x9022feea  lbu         $v0, -0x116($at)
    ctx->pc = 0x36521cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x92FEEAu));
    // 0x365220: 0x278485b0  addiu       $a0, $gp, -0x7A50
    ctx->pc = 0x365220u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    // 0x365224: 0x304200fe  andi        $v0, $v0, 0xFE
    ctx->pc = 0x365224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)254);
    // 0x365228: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x365228u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x36522c: 0xc0550b0  jal         func_1542C0
    ctx->pc = 0x36522Cu;
    SET_GPR_U32(ctx, 31, 0x365234u);
    ctx->pc = 0x365230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36522Cu;
    // 0x365230: 0xa022feea  sb          $v0, -0x116($at) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294967018), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1542C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1542C0u, 0x36522Cu, 0x365234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365234u;
label_365234:
    // 0x365234: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x365234u;
    {
        const bool branch_taken_0x365234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x365234) {
            ctx->pc = 0x3652F0u;
            goto label_3652f0;
        }
    }
    ctx->pc = 0x36523Cu;
    // 0x36523c: 0x0  nop
    ctx->pc = 0x36523cu;
    // NOP
label_365240:
    // 0x365240: 0xc05551c  jal         func_155470
    ctx->pc = 0x365240u;
    SET_GPR_U32(ctx, 31, 0x365248u);
    ctx->pc = 0x365244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365240u;
    // 0x365244: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155470u, 0x365240u, 0x365248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365248u;
label_365248:
    // 0x365248: 0x14400029  bnez        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x365248u;
    {
        const bool branch_taken_0x365248 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36524Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365248u;
        // 0x36524c: 0x3c010093  lui         $at, 0x93 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x365248) {
            ctx->pc = 0x3652F0u;
            goto label_3652f0;
        }
    }
    ctx->pc = 0x365250u;
    // 0x365250: 0x9023ff2c  lbu         $v1, -0xD4($at)
    ctx->pc = 0x365250u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294967084)));
    // 0x365254: 0x28630003  slti        $v1, $v1, 0x3
    ctx->pc = 0x365254u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x365258: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x365258u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x36525c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x36525cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x365260: 0x10600023  beqz        $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x365260u;
    {
        const bool branch_taken_0x365260 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x365264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365260u;
        // 0x365264: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
        ctx->in_delay_slot = false;
        if (branch_taken_0x365260) {
            ctx->pc = 0x3652F0u;
            goto label_3652f0;
        }
    }
    ctx->pc = 0x365268u;
    // 0x365268: 0xc0550b4  jal         func_1542D0
    ctx->pc = 0x365268u;
    SET_GPR_U32(ctx, 31, 0x365270u);
    ctx->pc = 0x1542D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1542D0u, 0x365268u, 0x365270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365270u;
label_365270:
    // 0x365270: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x365270u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x365274: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x365274u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x365278: 0xc05e390  jal         func_178E40
    ctx->pc = 0x365278u;
    SET_GPR_U32(ctx, 31, 0x365280u);
    ctx->pc = 0x36527Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365278u;
    // 0x36527c: 0x2484cea0  addiu       $a0, $a0, -0x3160 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178E40u, 0x365278u, 0x365280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365280u;
label_365280:
    // 0x365280: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x365280u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x365284: 0x3c02ff7f  lui         $v0, 0xFF7F
    ctx->pc = 0x365284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65407 << 16));
    // 0x365288: 0x8c26ceb8  lw          $a2, -0x3148($at)
    ctx->pc = 0x365288u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x36528c: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x36528cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x365290: 0x3c02ffbf  lui         $v0, 0xFFBF
    ctx->pc = 0x365290u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65471 << 16));
    // 0x365294: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x365294u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x365298: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x365298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x36529c: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x36529cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    // 0x3652a0: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x3652a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x3652a4: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x3652a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x3652a8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3652a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3652ac: 0xac23ceb8  sw          $v1, -0x3148($at)
    ctx->pc = 0x3652acu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x81CEB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEB8u, _value); } while (0);
    // 0x3652b0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3652b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3652b4: 0x8c23ceb8  lw          $v1, -0x3148($at)
    ctx->pc = 0x3652b4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x3652b8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3652b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3652bc: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3652bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3652c0: 0xc04ca38  jal         func_1328E0
    ctx->pc = 0x3652C0u;
    SET_GPR_U32(ctx, 31, 0x3652C8u);
    ctx->pc = 0x3652C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3652C0u;
    // 0x3652c4: 0xac22ceb8  sw          $v0, -0x3148($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954680), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1328E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1328E0u, 0x3652C0u, 0x3652C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3652C8u;
label_3652c8:
    // 0x3652c8: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x3652c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x3652cc: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x3652ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x3652d0: 0xc04ca38  jal         func_1328E0
    ctx->pc = 0x3652D0u;
    SET_GPR_U32(ctx, 31, 0x3652D8u);
    ctx->pc = 0x3652D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3652D0u;
    // 0x3652d4: 0x2484fe40  addiu       $a0, $a0, -0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1328E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1328E0u, 0x3652D0u, 0x3652D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3652D8u;
label_3652d8:
    // 0x3652d8: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3652d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3652dc: 0xc095128  jal         func_2544A0
    ctx->pc = 0x3652DCu;
    SET_GPR_U32(ctx, 31, 0x3652E4u);
    ctx->pc = 0x3652E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3652DCu;
    // 0x3652e0: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2544A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2544A0u, 0x3652DCu, 0x3652E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3652E4u;
label_3652e4:
    // 0x3652e4: 0xc09c3f4  jal         func_270FD0
    ctx->pc = 0x3652E4u;
    SET_GPR_U32(ctx, 31, 0x3652ECu);
    ctx->pc = 0x270FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270FD0u, 0x3652E4u, 0x3652ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3652ECu;
label_3652ec:
    // 0x3652ec: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x3652ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
label_3652f0:
    // 0x3652f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3652f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3652f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3652f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3652f8: 0x3e00008  jr          $ra
    ctx->pc = 0x3652F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3652FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3652F8u;
        // 0x3652fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3652F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x365300u;
}
