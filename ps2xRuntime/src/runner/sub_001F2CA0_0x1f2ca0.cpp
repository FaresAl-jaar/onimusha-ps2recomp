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

// Function: sub_001F2CA0
// Address: 0x1f2ca0 - 0x1f2d4c
void sub_001F2CA0_0x1f2ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F2CA0_0x1f2ca0");
#endif

    switch (ctx->pc) {
        case 0x1f2cb4u: goto label_1f2cb4;
        case 0x1f2d00u: goto label_1f2d00;
        case 0x1f2d08u: goto label_1f2d08;
        default: break;
    }

    ctx->pc = 0x1f2ca0u;

    // 0x1f2ca0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f2ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f2ca4: 0x3c040087  lui         $a0, 0x87
    ctx->pc = 0x1f2ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)135 << 16));
    // 0x1f2ca8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f2ca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f2cac: 0xc0a737c  jal         func_29CDF0
    ctx->pc = 0x1F2CACu;
    SET_GPR_U32(ctx, 31, 0x1F2CB4u);
    ctx->pc = 0x1F2CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2CACu;
    // 0x1f2cb0: 0x24841390  addiu       $a0, $a0, 0x1390 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29CDF0u, 0x1F2CACu, 0x1F2CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2CB4u;
label_1f2cb4:
    // 0x1f2cb4: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x1f2cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x1f2cb8: 0x3c040087  lui         $a0, 0x87
    ctx->pc = 0x1f2cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)135 << 16));
    // 0x1f2cbc: 0x24422ab0  addiu       $v0, $v0, 0x2AB0
    ctx->pc = 0x1f2cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10928));
    // 0x1f2cc0: 0x3c010087  lui         $at, 0x87
    ctx->pc = 0x1f2cc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)135 << 16));
    // 0x1f2cc4: 0xac2214b0  sw          $v0, 0x14B0($at)
    ctx->pc = 0x1f2cc4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x8714B0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8714B0u, _value); } while (0);
    // 0x1f2cc8: 0x248414c0  addiu       $a0, $a0, 0x14C0
    ctx->pc = 0x1f2cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5312));
    // 0x1f2ccc: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x1f2cccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x1f2cd0: 0x3c010087  lui         $at, 0x87
    ctx->pc = 0x1f2cd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)135 << 16));
    // 0x1f2cd4: 0x24422ac0  addiu       $v0, $v0, 0x2AC0
    ctx->pc = 0x1f2cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10944));
    // 0x1f2cd8: 0xa7808818  sh          $zero, -0x77E8($gp)
    ctx->pc = 0x1f2cd8u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294936600), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f2cdc: 0xac2214b4  sw          $v0, 0x14B4($at)
    ctx->pc = 0x1f2cdcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x8714B4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8714B4u, _value); } while (0);
    // 0x1f2ce0: 0xa780881c  sh          $zero, -0x77E4($gp)
    ctx->pc = 0x1f2ce0u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294936604), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f2ce4: 0xa7808820  sh          $zero, -0x77E0($gp)
    ctx->pc = 0x1f2ce4u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294936608), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f2ce8: 0xa7808824  sh          $zero, -0x77DC($gp)
    ctx->pc = 0x1f2ce8u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294936612), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f2cec: 0xa7808828  sh          $zero, -0x77D8($gp)
    ctx->pc = 0x1f2cecu;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294936616), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f2cf0: 0xa780882c  sh          $zero, -0x77D4($gp)
    ctx->pc = 0x1f2cf0u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294936620), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f2cf4: 0xa7808830  sh          $zero, -0x77D0($gp)
    ctx->pc = 0x1f2cf4u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294936624), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f2cf8: 0xc07cba4  jal         func_1F2E90
    ctx->pc = 0x1F2CF8u;
    SET_GPR_U32(ctx, 31, 0x1F2D00u);
    ctx->pc = 0x1F2CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2CF8u;
    // 0x1f2cfc: 0xaf808834  sw          $zero, -0x77CC($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936628), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F2E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F2E90u, 0x1F2CF8u, 0x1F2D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2D00u;
label_1f2d00:
    // 0x1f2d00: 0xc0ae70c  jal         func_2B9C30
    ctx->pc = 0x1F2D00u;
    SET_GPR_U32(ctx, 31, 0x1F2D08u);
    ctx->pc = 0x2B9C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B9C30u, 0x1F2D00u, 0x1F2D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2D08u;
label_1f2d08:
    // 0x1f2d08: 0x3c010087  lui         $at, 0x87
    ctx->pc = 0x1f2d08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)135 << 16));
    // 0x1f2d0c: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x1f2d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1f2d10: 0xa0201552  sb          $zero, 0x1552($at)
    ctx->pc = 0x1f2d10u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x871552u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x871552u, _value); } while (0);
    // 0x1f2d14: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f2d14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f2d18: 0x3c010087  lui         $at, 0x87
    ctx->pc = 0x1f2d18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)135 << 16));
    // 0x1f2d1c: 0xa0241551  sb          $a0, 0x1551($at)
    ctx->pc = 0x1f2d1cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x871551u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x871551u, _value); } while (0);
    // 0x1f2d20: 0x3c010087  lui         $at, 0x87
    ctx->pc = 0x1f2d20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)135 << 16));
    // 0x1f2d24: 0xa0242a11  sb          $a0, 0x2A11($at)
    ctx->pc = 0x1f2d24u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x872A11u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x872A11u, _value); } while (0);
    // 0x1f2d28: 0x3c010087  lui         $at, 0x87
    ctx->pc = 0x1f2d28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)135 << 16));
    // 0x1f2d2c: 0xa0232a12  sb          $v1, 0x2A12($at)
    ctx->pc = 0x1f2d2cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x872A12u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x872A12u, _value); } while (0);
    // 0x1f2d30: 0x3c010087  lui         $at, 0x87
    ctx->pc = 0x1f2d30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)135 << 16));
    // 0x1f2d34: 0xa0201553  sb          $zero, 0x1553($at)
    ctx->pc = 0x1f2d34u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x871553u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x871553u, _value); } while (0);
    // 0x1f2d38: 0x3c010087  lui         $at, 0x87
    ctx->pc = 0x1f2d38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)135 << 16));
    // 0x1f2d3c: 0xa0202a13  sb          $zero, 0x2A13($at)
    ctx->pc = 0x1f2d3cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x872A13u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x872A13u, _value); } while (0);
    // 0x1f2d40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f2d40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f2d44: 0x3e00008  jr          $ra
    ctx->pc = 0x1F2D44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F2D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2D44u;
        // 0x1f2d48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F2D44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F2D4Cu;
}
