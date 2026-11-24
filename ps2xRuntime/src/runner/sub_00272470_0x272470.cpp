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

// Function: sub_00272470
// Address: 0x272470 - 0x272528
void sub_00272470_0x272470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00272470_0x272470");
#endif

    switch (ctx->pc) {
        case 0x272498u: goto label_272498;
        case 0x2724c0u: goto label_2724c0;
        case 0x2724d0u: goto label_2724d0;
        case 0x27250cu: goto label_27250c;
        default: break;
    }

    ctx->pc = 0x272470u;

    // 0x272470: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x272470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x272474: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x272474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x272478: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x272478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x27247c: 0x90830003  lbu         $v1, 0x3($a0)
    ctx->pc = 0x27247cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x272480: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x272480u;
    {
        const bool branch_taken_0x272480 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x272484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272480u;
        // 0x272484: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272480) {
            ctx->pc = 0x272490u;
            goto label_272490;
        }
    }
    ctx->pc = 0x272488u;
    // 0x272488: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x272488u;
    {
        const bool branch_taken_0x272488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x272488) {
            ctx->pc = 0x272518u;
            goto label_272518;
        }
    }
    ctx->pc = 0x272490u;
label_272490:
    // 0x272490: 0xc05551c  jal         func_155470
    ctx->pc = 0x272490u;
    SET_GPR_U32(ctx, 31, 0x272498u);
    ctx->pc = 0x272494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272490u;
    // 0x272494: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155470u, 0x272490u, 0x272498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272498u;
label_272498:
    // 0x272498: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x272498u;
    {
        const bool branch_taken_0x272498 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27249Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272498u;
        // 0x27249c: 0x3c010093  lui         $at, 0x93 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272498) {
            ctx->pc = 0x272518u;
            goto label_272518;
        }
    }
    ctx->pc = 0x2724A0u;
    // 0x2724a0: 0x9023ff2c  lbu         $v1, -0xD4($at)
    ctx->pc = 0x2724a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294967084)));
    // 0x2724a4: 0x28630003  slti        $v1, $v1, 0x3
    ctx->pc = 0x2724a4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2724a8: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x2724a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x2724ac: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2724acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2724b0: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x2724B0u;
    {
        const bool branch_taken_0x2724b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2724B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2724B0u;
        // 0x2724b4: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2724b0) {
            ctx->pc = 0x272518u;
            goto label_272518;
        }
    }
    ctx->pc = 0x2724B8u;
    // 0x2724b8: 0xc0550b4  jal         func_1542D0
    ctx->pc = 0x2724B8u;
    SET_GPR_U32(ctx, 31, 0x2724C0u);
    ctx->pc = 0x1542D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1542D0u, 0x2724B8u, 0x2724C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2724C0u;
label_2724c0:
    // 0x2724c0: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x2724c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2724c4: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x2724c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x2724c8: 0xc05e390  jal         func_178E40
    ctx->pc = 0x2724C8u;
    SET_GPR_U32(ctx, 31, 0x2724D0u);
    ctx->pc = 0x2724CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2724C8u;
    // 0x2724cc: 0x2484cea0  addiu       $a0, $a0, -0x3160 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178E40u, 0x2724C8u, 0x2724D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2724D0u;
label_2724d0:
    // 0x2724d0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2724d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2724d4: 0x3c02ff7f  lui         $v0, 0xFF7F
    ctx->pc = 0x2724d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65407 << 16));
    // 0x2724d8: 0x8c24ceb8  lw          $a0, -0x3148($at)
    ctx->pc = 0x2724d8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x2724dc: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x2724dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2724e0: 0x3c02ffbf  lui         $v0, 0xFFBF
    ctx->pc = 0x2724e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65471 << 16));
    // 0x2724e4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2724e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2724e8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2724e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2724ec: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2724ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2724f0: 0xac23ceb8  sw          $v1, -0x3148($at)
    ctx->pc = 0x2724f0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x81CEB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEB8u, _value); } while (0);
    // 0x2724f4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2724f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2724f8: 0x8c23ceb8  lw          $v1, -0x3148($at)
    ctx->pc = 0x2724f8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x2724fc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2724fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x272500: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x272500u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x272504: 0xc09c3f4  jal         func_270FD0
    ctx->pc = 0x272504u;
    SET_GPR_U32(ctx, 31, 0x27250Cu);
    ctx->pc = 0x272508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272504u;
    // 0x272508: 0xac22ceb8  sw          $v0, -0x3148($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954680), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x270FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270FD0u, 0x272504u, 0x27250Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27250Cu;
label_27250c:
    // 0x27250c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x27250cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x272510: 0xa2030002  sb          $v1, 0x2($s0)
    ctx->pc = 0x272510u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x272514: 0x0  nop
    ctx->pc = 0x272514u;
    // NOP
label_272518:
    // 0x272518: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x272518u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27251c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27251cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x272520: 0x3e00008  jr          $ra
    ctx->pc = 0x272520u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x272524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272520u;
        // 0x272524: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x272520u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x272528u;
}
