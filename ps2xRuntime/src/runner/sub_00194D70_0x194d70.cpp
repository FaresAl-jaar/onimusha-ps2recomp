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

// Function: sub_00194D70
// Address: 0x194d70 - 0x194df8
void sub_00194D70_0x194d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00194D70_0x194d70");
#endif

    switch (ctx->pc) {
        case 0x194d94u: goto label_194d94;
        case 0x194da0u: goto label_194da0;
        case 0x194db8u: goto label_194db8;
        case 0x194dd0u: goto label_194dd0;
        default: break;
    }

    ctx->pc = 0x194d70u;

    // 0x194d70: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x194d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x194d74: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x194d74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x194d78: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x194d78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x194d7c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x194d7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x194d80: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x194d80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194d84: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x194d84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194d88: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x194d88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x194d8c: 0xc041472  jal         func_1051C8
    ctx->pc = 0x194D8Cu;
    SET_GPR_U32(ctx, 31, 0x194D94u);
    ctx->pc = 0x194D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194D8Cu;
    // 0x194d90: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x194D8Cu, 0x194D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194D94u;
label_194d94:
    // 0x194d94: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x194d94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194d98: 0xc06522c  jal         func_1948B0
    ctx->pc = 0x194D98u;
    SET_GPR_U32(ctx, 31, 0x194DA0u);
    ctx->pc = 0x194D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194D98u;
    // 0x194d9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1948B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1948B0u, 0x194D98u, 0x194DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194DA0u;
label_194da0:
    // 0x194da0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x194da0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194da4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x194da4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x194da8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x194da8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194dac: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x194dacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194db0: 0xc0652ac  jal         func_194AB0
    ctx->pc = 0x194DB0u;
    SET_GPR_U32(ctx, 31, 0x194DB8u);
    ctx->pc = 0x194DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194DB0u;
    // 0x194db4: 0x27a70040  addiu       $a3, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x194AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x194AB0u, 0x194DB0u, 0x194DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194DB8u;
label_194db8:
    // 0x194db8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x194db8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194dbc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x194dbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194dc0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x194dc0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x194dc4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x194dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x194dc8: 0xc0652ac  jal         func_194AB0
    ctx->pc = 0x194DC8u;
    SET_GPR_U32(ctx, 31, 0x194DD0u);
    ctx->pc = 0x194DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194DC8u;
    // 0x194dcc: 0x27a70040  addiu       $a3, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x194AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x194AB0u, 0x194DC8u, 0x194DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194DD0u;
label_194dd0:
    // 0x194dd0: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x194dd0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x194dd4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x194DD4u;
    {
        const bool branch_taken_0x194dd4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x194DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194DD4u;
        // 0x194dd8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194dd4) {
            ctx->pc = 0x194DE0u;
            goto label_194de0;
        }
    }
    ctx->pc = 0x194DDCu;
    // 0x194ddc: 0x2402fff5  addiu       $v0, $zero, -0xB
    ctx->pc = 0x194ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
label_194de0:
    // 0x194de0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x194de0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x194de4: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x194de4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x194de8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x194de8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x194dec: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x194decu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x194df0: 0x3e00008  jr          $ra
    ctx->pc = 0x194DF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x194DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194DF0u;
        // 0x194df4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x194DF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x194DF8u;
}
