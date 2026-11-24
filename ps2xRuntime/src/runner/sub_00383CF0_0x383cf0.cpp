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

// Function: sub_00383CF0
// Address: 0x383cf0 - 0x383d84
void sub_00383CF0_0x383cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00383CF0_0x383cf0");
#endif

    switch (ctx->pc) {
        case 0x383d2cu: goto label_383d2c;
        case 0x383d40u: goto label_383d40;
        case 0x383d60u: goto label_383d60;
        case 0x383d74u: goto label_383d74;
        default: break;
    }

    ctx->pc = 0x383cf0u;

    // 0x383cf0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x383cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x383cf4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x383cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x383cf8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x383cf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x383cfc: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x383cfcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x383d00: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x383d00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x383d04: 0x2442c250  addiu       $v0, $v0, -0x3DB0
    ctx->pc = 0x383d04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951504));
    // 0x383d08: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x383d08u;
    { uint32_t bits = FAST_READ32(0x68C250u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x383d0c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x383d0cu;
    { uint32_t bits = FAST_READ32(0x68C254u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x383d10: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x383d10u;
    { uint32_t bits = FAST_READ32(0x68C258u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x383d14: 0xe4820010  swc1        $f2, 0x10($a0)
    ctx->pc = 0x383d14u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x383d18: 0xe4810014  swc1        $f1, 0x14($a0)
    ctx->pc = 0x383d18u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x383d1c: 0x14a00006  bnez        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x383D1Cu;
    {
        const bool branch_taken_0x383d1c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x383D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383D1Cu;
        // 0x383d20: 0xe4800018  swc1        $f0, 0x18($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x383d1c) {
            ctx->pc = 0x383D38u;
            goto label_383d38;
        }
    }
    ctx->pc = 0x383D24u;
    // 0x383d24: 0xc0e0fc8  jal         func_383F20
    ctx->pc = 0x383D24u;
    SET_GPR_U32(ctx, 31, 0x383D2Cu);
    ctx->pc = 0x383F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x383F20u, 0x383D24u, 0x383D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x383D2Cu;
label_383d2c:
    // 0x383d2c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x383D2Cu;
    {
        const bool branch_taken_0x383d2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x383d2c) {
            ctx->pc = 0x383D78u;
            goto label_383d78;
        }
    }
    ctx->pc = 0x383D34u;
    // 0x383d34: 0x0  nop
    ctx->pc = 0x383d34u;
    // NOP
label_383d38:
    // 0x383d38: 0xc0e114c  jal         func_384530
    ctx->pc = 0x383D38u;
    SET_GPR_U32(ctx, 31, 0x383D40u);
    ctx->pc = 0x384530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x384530u, 0x383D38u, 0x383D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x383D40u;
label_383d40:
    // 0x383d40: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x383d40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x383d44: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x383d44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x383d48: 0x2484cbe0  addiu       $a0, $a0, -0x3420
    ctx->pc = 0x383d48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    // 0x383d4c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x383d4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x383d50: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x383d50u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x383d54: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x383d54u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x383d58: 0xc063c70  jal         func_18F1C0
    ctx->pc = 0x383D58u;
    SET_GPR_U32(ctx, 31, 0x383D60u);
    ctx->pc = 0x383D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x383D58u;
    // 0x383d5c: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F1C0u, 0x383D58u, 0x383D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x383D60u;
label_383d60:
    // 0x383d60: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x383d60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x383d64: 0x240519e7  addiu       $a1, $zero, 0x19E7
    ctx->pc = 0x383d64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6631));
    // 0x383d68: 0x24844060  addiu       $a0, $a0, 0x4060
    ctx->pc = 0x383d68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16480));
    // 0x383d6c: 0xc0ce590  jal         func_339640
    ctx->pc = 0x383D6Cu;
    SET_GPR_U32(ctx, 31, 0x383D74u);
    ctx->pc = 0x383D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x383D6Cu;
    // 0x383d70: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x339640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339640u, 0x383D6Cu, 0x383D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x383D74u;
label_383d74:
    // 0x383d74: 0x0  nop
    ctx->pc = 0x383d74u;
    // NOP
label_383d78:
    // 0x383d78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x383d78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x383d7c: 0x3e00008  jr          $ra
    ctx->pc = 0x383D7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x383D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383D7Cu;
        // 0x383d80: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x383D7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x383D84u;
}
