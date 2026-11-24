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

// Function: sub_00255EF0
// Address: 0x255ef0 - 0x255f74
void sub_00255EF0_0x255ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00255EF0_0x255ef0");
#endif

    switch (ctx->pc) {
        case 0x255f14u: goto label_255f14;
        case 0x255f5cu: goto label_255f5c;
        default: break;
    }

    ctx->pc = 0x255ef0u;

    // 0x255ef0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x255ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x255ef4: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x255ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x255ef8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x255ef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x255efc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x255efcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x255f00: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x255f00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255f04: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x255f04u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x255f08: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x255f08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x255f0c: 0xc095018  jal         func_254060
    ctx->pc = 0x255F0Cu;
    SET_GPR_U32(ctx, 31, 0x255F14u);
    ctx->pc = 0x255F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255F0Cu;
    // 0x255f10: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254060u, 0x255F0Cu, 0x255F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255F14u;
label_255f14:
    // 0x255f14: 0x24430190  addiu       $v1, $v0, 0x190
    ctx->pc = 0x255f14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 400));
    // 0x255f18: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x255f18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x255f1c: 0xa6030002  sh          $v1, 0x2($s0)
    ctx->pc = 0x255f1cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x255f20: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x255f20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x255f24: 0xa2020004  sb          $v0, 0x4($s0)
    ctx->pc = 0x255f24u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x255f28: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x255f28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x255f2c: 0xa2030005  sb          $v1, 0x5($s0)
    ctx->pc = 0x255f2cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 3));
    // 0x255f30: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x255f30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x255f34: 0xa2020006  sb          $v0, 0x6($s0)
    ctx->pc = 0x255f34u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6), (uint8_t)GPR_U32(ctx, 2));
    // 0x255f38: 0x24030021  addiu       $v1, $zero, 0x21
    ctx->pc = 0x255f38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x255f3c: 0xa2030007  sb          $v1, 0x7($s0)
    ctx->pc = 0x255f3cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 7), (uint8_t)GPR_U32(ctx, 3));
    // 0x255f40: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x255f40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x255f44: 0xa2000008  sb          $zero, 0x8($s0)
    ctx->pc = 0x255f44u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x255f48: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x255f48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x255f4c: 0xa2000009  sb          $zero, 0x9($s0)
    ctx->pc = 0x255f4cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 9), (uint8_t)GPR_U32(ctx, 0));
    // 0x255f50: 0xa200000a  sb          $zero, 0xA($s0)
    ctx->pc = 0x255f50u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10), (uint8_t)GPR_U32(ctx, 0));
    // 0x255f54: 0xc095018  jal         func_254060
    ctx->pc = 0x255F54u;
    SET_GPR_U32(ctx, 31, 0x255F5Cu);
    ctx->pc = 0x255F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255F54u;
    // 0x255f58: 0xa602000c  sh          $v0, 0xC($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254060u, 0x255F54u, 0x255F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255F5Cu;
label_255f5c:
    // 0x255f5c: 0x2443019c  addiu       $v1, $v0, 0x19C
    ctx->pc = 0x255f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 412));
    // 0x255f60: 0xa603000e  sh          $v1, 0xE($s0)
    ctx->pc = 0x255f60u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x255f64: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x255f64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x255f68: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x255f68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x255f6c: 0x3e00008  jr          $ra
    ctx->pc = 0x255F6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x255F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255F6Cu;
        // 0x255f70: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x255F6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x255F74u;
}
