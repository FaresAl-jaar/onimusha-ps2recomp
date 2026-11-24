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

// Function: sub_0026FCA0
// Address: 0x26fca0 - 0x26fd50
void sub_0026FCA0_0x26fca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026FCA0_0x26fca0");
#endif

    switch (ctx->pc) {
        case 0x26fcd8u: goto label_26fcd8;
        default: break;
    }

    ctx->pc = 0x26fca0u;

    // 0x26fca0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x26fca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x26fca4: 0x3c040085  lui         $a0, 0x85
    ctx->pc = 0x26fca4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)133 << 16));
    // 0x26fca8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x26fca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x26fcac: 0x3c01008c  lui         $at, 0x8C
    ctx->pc = 0x26fcacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)140 << 16));
    // 0x26fcb0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x26fcb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x26fcb4: 0x2484f280  addiu       $a0, $a0, -0xD80
    ctx->pc = 0x26fcb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963840));
    // 0x26fcb8: 0xa02005e0  sb          $zero, 0x5E0($at)
    ctx->pc = 0x26fcb8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x8C05E0u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x8C05E0u, _value); } while (0);
    // 0x26fcbc: 0x3c10008c  lui         $s0, 0x8C
    ctx->pc = 0x26fcbcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)140 << 16));
    // 0x26fcc0: 0x3c01008c  lui         $at, 0x8C
    ctx->pc = 0x26fcc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)140 << 16));
    // 0x26fcc4: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x26fcc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x26fcc8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x26fcc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26fccc: 0xa02005e1  sb          $zero, 0x5E1($at)
    ctx->pc = 0x26fcccu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x8C05E1u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x8C05E1u, _value); } while (0);
    // 0x26fcd0: 0xc0692d8  jal         func_1A4B60
    ctx->pc = 0x26FCD0u;
    SET_GPR_U32(ctx, 31, 0x26FCD8u);
    ctx->pc = 0x26FCD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26FCD0u;
    // 0x26fcd4: 0x261005e0  addiu       $s0, $s0, 0x5E0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1504));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4B60u, 0x26FCD0u, 0x26FCD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FCD8u;
label_26fcd8:
    // 0x26fcd8: 0x3c01008c  lui         $at, 0x8C
    ctx->pc = 0x26fcd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)140 << 16));
    // 0x26fcdc: 0xac2205e4  sw          $v0, 0x5E4($at)
    ctx->pc = 0x26fcdcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x8C05E4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8C05E4u, _value); } while (0);
    // 0x26fce0: 0x3c01008c  lui         $at, 0x8C
    ctx->pc = 0x26fce0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)140 << 16));
    // 0x26fce4: 0x8c2305e4  lw          $v1, 0x5E4($at)
    ctx->pc = 0x26fce4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x8C05E4u));
    // 0x26fce8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x26FCE8u;
    {
        const bool branch_taken_0x26fce8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26fce8) {
            ctx->pc = 0x26FD00u;
            goto label_26fd00;
        }
    }
    ctx->pc = 0x26FCF0u;
    // 0x26fcf0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x26fcf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x26fcf4: 0xa0600068  sb          $zero, 0x68($v1)
    ctx->pc = 0x26fcf4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 104), (uint8_t)GPR_U32(ctx, 0));
    // 0x26fcf8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x26fcf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x26fcfc: 0xa0600069  sb          $zero, 0x69($v1)
    ctx->pc = 0x26fcfcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 105), (uint8_t)GPR_U32(ctx, 0));
label_26fd00:
    // 0x26fd00: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x26fd00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26fd04: 0xa2030008  sb          $v1, 0x8($s0)
    ctx->pc = 0x26fd04u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 3));
    // 0x26fd08: 0x3c054380  lui         $a1, 0x4380
    ctx->pc = 0x26fd08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17280 << 16));
    // 0x26fd0c: 0x24030024  addiu       $v1, $zero, 0x24
    ctx->pc = 0x26fd0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x26fd10: 0xa2000009  sb          $zero, 0x9($s0)
    ctx->pc = 0x26fd10u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 9), (uint8_t)GPR_U32(ctx, 0));
    // 0x26fd14: 0xa203000a  sb          $v1, 0xA($s0)
    ctx->pc = 0x26fd14u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10), (uint8_t)GPR_U32(ctx, 3));
    // 0x26fd18: 0x3c044348  lui         $a0, 0x4348
    ctx->pc = 0x26fd18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17224 << 16));
    // 0x26fd1c: 0xa600000c  sh          $zero, 0xC($s0)
    ctx->pc = 0x26fd1cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 0));
    // 0x26fd20: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x26fd20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
    // 0x26fd24: 0xa600000e  sh          $zero, 0xE($s0)
    ctx->pc = 0x26fd24u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 0));
    // 0x26fd28: 0xa6000010  sh          $zero, 0x10($s0)
    ctx->pc = 0x26fd28u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 0));
    // 0x26fd2c: 0xa2000012  sb          $zero, 0x12($s0)
    ctx->pc = 0x26fd2cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 18), (uint8_t)GPR_U32(ctx, 0));
    // 0x26fd30: 0xae050014  sw          $a1, 0x14($s0)
    ctx->pc = 0x26fd30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 5));
    // 0x26fd34: 0xae040018  sw          $a0, 0x18($s0)
    ctx->pc = 0x26fd34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 4));
    // 0x26fd38: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x26fd38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x26fd3c: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x26fd3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    // 0x26fd40: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x26fd40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26fd44: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26fd44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26fd48: 0x3e00008  jr          $ra
    ctx->pc = 0x26FD48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26FD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FD48u;
        // 0x26fd4c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26FD48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26FD50u;
}
