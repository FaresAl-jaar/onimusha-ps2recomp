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

// Function: sub_001E7050
// Address: 0x1e7050 - 0x1e70dc
void sub_001E7050_0x1e7050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E7050_0x1e7050");
#endif

    switch (ctx->pc) {
        case 0x1e706cu: goto label_1e706c;
        case 0x1e707cu: goto label_1e707c;
        case 0x1e70bcu: goto label_1e70bc;
        default: break;
    }

    ctx->pc = 0x1e7050u;

    // 0x1e7050: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e7050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e7054: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e7054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1e7058: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e7058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e705c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e705cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e7060: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e7060u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7064: 0xc078684  jal         func_1E1A10
    ctx->pc = 0x1E7064u;
    SET_GPR_U32(ctx, 31, 0x1E706Cu);
    ctx->pc = 0x1E7068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7064u;
    // 0x1e7068: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E1A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1A10u, 0x1E7064u, 0x1E706Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E706Cu;
label_1e706c:
    // 0x1e706c: 0x26240030  addiu       $a0, $s1, 0x30
    ctx->pc = 0x1e706cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x1e7070: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e7070u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7074: 0xc076bec  jal         func_1DAFB0
    ctx->pc = 0x1E7074u;
    SET_GPR_U32(ctx, 31, 0x1E707Cu);
    ctx->pc = 0x1E7078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7074u;
    // 0x1e7078: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DAFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DAFB0u, 0x1E7074u, 0x1E707Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E707Cu;
label_1e707c:
    // 0x1e707c: 0x7a220060  lq          $v0, 0x60($s1)
    ctx->pc = 0x1e707cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x1e7080: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x1e7080u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x1e7084: 0x24845c10  addiu       $a0, $a0, 0x5C10
    ctx->pc = 0x1e7084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23568));
    // 0x1e7088: 0x26250050  addiu       $a1, $s1, 0x50
    ctx->pc = 0x1e7088u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x1e708c: 0x7e220010  sq          $v0, 0x10($s1)
    ctx->pc = 0x1e708cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 2));
    // 0x1e7090: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1e7090u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e7094: 0xa2220002  sb          $v0, 0x2($s1)
    ctx->pc = 0x1e7094u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x1e7098: 0xa2200004  sb          $zero, 0x4($s1)
    ctx->pc = 0x1e7098u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e709c: 0x96220036  lhu         $v0, 0x36($s1)
    ctx->pc = 0x1e709cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 54)));
    // 0x1e70a0: 0xc62c0038  lwc1        $f12, 0x38($s1)
    ctx->pc = 0x1e70a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1e70a4: 0xc62d003c  lwc1        $f13, 0x3C($s1)
    ctx->pc = 0x1e70a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1e70a8: 0xc62e0040  lwc1        $f14, 0x40($s1)
    ctx->pc = 0x1e70a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1e70ac: 0xc62f0044  lwc1        $f15, 0x44($s1)
    ctx->pc = 0x1e70acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x1e70b0: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1e70b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1e70b4: 0xc097880  jal         func_25E200
    ctx->pc = 0x1E70B4u;
    SET_GPR_U32(ctx, 31, 0x1E70BCu);
    ctx->pc = 0x1E70B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E70B4u;
    // 0x1e70b8: 0x3046ffff  andi        $a2, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E200u, 0x1E70B4u, 0x1E70BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E70BCu;
label_1e70bc:
    // 0x1e70bc: 0xae220070  sw          $v0, 0x70($s1)
    ctx->pc = 0x1e70bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 2));
    // 0x1e70c0: 0x8e220070  lw          $v0, 0x70($s1)
    ctx->pc = 0x1e70c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x1e70c4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e70c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e70c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e70c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e70cc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e70ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e70d0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1e70d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1e70d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1E70D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E70D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E70D4u;
        // 0x1e70d8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E70D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E70DCu;
}
