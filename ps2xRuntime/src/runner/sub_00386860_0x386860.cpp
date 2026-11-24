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

// Function: sub_00386860
// Address: 0x386860 - 0x3868f8
void sub_00386860_0x386860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00386860_0x386860");
#endif

    switch (ctx->pc) {
        case 0x386884u: goto label_386884;
        default: break;
    }

    ctx->pc = 0x386860u;

    // 0x386860: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x386860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x386864: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x386864u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x386868: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x386868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x38686c: 0x24060148  addiu       $a2, $zero, 0x148
    ctx->pc = 0x38686cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 328));
    // 0x386870: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x386870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x386874: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x386874u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x386878: 0x3c040092  lui         $a0, 0x92
    ctx->pc = 0x386878u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
    // 0x38687c: 0xc049590  jal         func_125640
    ctx->pc = 0x38687Cu;
    SET_GPR_U32(ctx, 31, 0x386884u);
    ctx->pc = 0x386880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38687Cu;
    // 0x386880: 0x24842160  addiu       $a0, $a0, 0x2160 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x38687Cu, 0x386884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x386884u;
label_386884:
    // 0x386884: 0xa2000120  sb          $zero, 0x120($s0)
    ctx->pc = 0x386884u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 288), (uint8_t)GPR_U32(ctx, 0));
    // 0x386888: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x386888u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x38688c: 0xa204012a  sb          $a0, 0x12A($s0)
    ctx->pc = 0x38688cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 298), (uint8_t)GPR_U32(ctx, 4));
    // 0x386890: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x386890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x386894: 0xae10012c  sw          $s0, 0x12C($s0)
    ctx->pc = 0x386894u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 16));
    // 0x386898: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x386898u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x38689c: 0xa6040128  sh          $a0, 0x128($s0)
    ctx->pc = 0x38689cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3868a0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3868a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3868a4: 0xa2030134  sb          $v1, 0x134($s0)
    ctx->pc = 0x3868a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 308), (uint8_t)GPR_U32(ctx, 3));
    // 0x3868a8: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x3868a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x3868ac: 0xa205013e  sb          $a1, 0x13E($s0)
    ctx->pc = 0x3868acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 318), (uint8_t)GPR_U32(ctx, 5));
    // 0x3868b0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3868b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3868b4: 0xae040140  sw          $a0, 0x140($s0)
    ctx->pc = 0x3868b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 320), GPR_U32(ctx, 4));
    // 0x3868b8: 0x9024fc8c  lbu         $a0, -0x374($at)
    ctx->pc = 0x3868b8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x81FC8Cu));
    // 0x3868bc: 0x14830008  bne         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3868BCu;
    {
        const bool branch_taken_0x3868bc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x3868C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3868BCu;
        // 0x3868c0: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3868bc) {
            ctx->pc = 0x3868E0u;
            goto label_3868e0;
        }
    }
    ctx->pc = 0x3868C4u;
    // 0x3868c4: 0x8c23ceb8  lw          $v1, -0x3148($at)
    ctx->pc = 0x3868c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954680)));
    // 0x3868c8: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x3868c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x3868cc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3868CCu;
    {
        const bool branch_taken_0x3868cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3868D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3868CCu;
        // 0x3868d0: 0x24030170  addiu       $v1, $zero, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 368));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3868cc) {
            ctx->pc = 0x3868E0u;
            goto label_3868e0;
        }
    }
    ctx->pc = 0x3868D4u;
    // 0x3868d4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3868D4u;
    {
        const bool branch_taken_0x3868d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3868D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3868D4u;
        // 0x3868d8: 0xa603013c  sh          $v1, 0x13C($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 316), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3868d4) {
            ctx->pc = 0x3868E8u;
            goto label_3868e8;
        }
    }
    ctx->pc = 0x3868DCu;
    // 0x3868dc: 0x0  nop
    ctx->pc = 0x3868dcu;
    // NOP
label_3868e0:
    // 0x3868e0: 0x24030130  addiu       $v1, $zero, 0x130
    ctx->pc = 0x3868e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
    // 0x3868e4: 0xa603013c  sh          $v1, 0x13C($s0)
    ctx->pc = 0x3868e4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 316), (uint16_t)GPR_U32(ctx, 3));
label_3868e8:
    // 0x3868e8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3868e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3868ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3868ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3868f0: 0x3e00008  jr          $ra
    ctx->pc = 0x3868F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3868F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3868F0u;
        // 0x3868f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3868F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3868F8u;
}
