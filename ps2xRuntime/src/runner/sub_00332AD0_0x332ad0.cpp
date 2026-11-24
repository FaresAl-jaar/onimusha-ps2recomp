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

// Function: sub_00332AD0
// Address: 0x332ad0 - 0x332b58
void sub_00332AD0_0x332ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00332AD0_0x332ad0");
#endif

    switch (ctx->pc) {
        case 0x332b0cu: goto label_332b0c;
        case 0x332b14u: goto label_332b14;
        case 0x332b28u: goto label_332b28;
        case 0x332b3cu: goto label_332b3c;
        case 0x332b4cu: goto label_332b4c;
        default: break;
    }

    ctx->pc = 0x332ad0u;

    // 0x332ad0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x332ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x332ad4: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x332ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x332ad8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x332ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x332adc: 0x2442a290  addiu       $v0, $v0, -0x5D70
    ctx->pc = 0x332adcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943376));
    // 0x332ae0: 0x78460000  lq          $a2, 0x0($v0)
    ctx->pc = 0x332ae0u;
    SET_GPR_VEC(ctx, 6, FAST_READ128(0x4EA290u));
    // 0x332ae4: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x332ae4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x332ae8: 0x78430010  lq          $v1, 0x10($v0)
    ctx->pc = 0x332ae8u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x4EA2A0u));
    // 0x332aec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x332aecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332af0: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x332af0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x332af4: 0x7ce60000  sq          $a2, 0x0($a3)
    ctx->pc = 0x332af4u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 6));
    // 0x332af8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x332af8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x332afc: 0x7ce30010  sq          $v1, 0x10($a3)
    ctx->pc = 0x332afcu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 16), GPR_VEC(ctx, 3));
    // 0x332b00: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x332b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x332b04: 0xc0640c4  jal         func_190310
    ctx->pc = 0x332B04u;
    SET_GPR_U32(ctx, 31, 0x332B0Cu);
    ctx->pc = 0x332B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332B04u;
    // 0x332b08: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190310u, 0x332B04u, 0x332B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332B0Cu;
label_332b0c:
    // 0x332b0c: 0xc064114  jal         func_190450
    ctx->pc = 0x332B0Cu;
    SET_GPR_U32(ctx, 31, 0x332B14u);
    ctx->pc = 0x332B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332B0Cu;
    // 0x332b10: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190450u, 0x332B0Cu, 0x332B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332B14u;
label_332b14:
    // 0x332b14: 0x3c024451  lui         $v0, 0x4451
    ctx->pc = 0x332b14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17489 << 16));
    // 0x332b18: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x332b18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x332b1c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x332b1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x332b20: 0xc0640e4  jal         func_190390
    ctx->pc = 0x332B20u;
    SET_GPR_U32(ctx, 31, 0x332B28u);
    ctx->pc = 0x190390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190390u, 0x332B20u, 0x332B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332B28u;
label_332b28:
    // 0x332b28: 0x3c02bee8  lui         $v0, 0xBEE8
    ctx->pc = 0x332b28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48872 << 16));
    // 0x332b2c: 0x34425697  ori         $v0, $v0, 0x5697
    ctx->pc = 0x332b2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22167);
    // 0x332b30: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x332b30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x332b34: 0xc064104  jal         func_190410
    ctx->pc = 0x332B34u;
    SET_GPR_U32(ctx, 31, 0x332B3Cu);
    ctx->pc = 0x190410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190410u, 0x332B34u, 0x332B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332B3Cu;
label_332b3c:
    // 0x332b3c: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x332b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x332b40: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x332b40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x332b44: 0xc0640f4  jal         func_1903D0
    ctx->pc = 0x332B44u;
    SET_GPR_U32(ctx, 31, 0x332B4Cu);
    ctx->pc = 0x1903D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1903D0u, 0x332B44u, 0x332B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332B4Cu;
label_332b4c:
    // 0x332b4c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x332b4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x332b50: 0x3e00008  jr          $ra
    ctx->pc = 0x332B50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x332B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332B50u;
        // 0x332b54: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x332B50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x332B58u;
}
