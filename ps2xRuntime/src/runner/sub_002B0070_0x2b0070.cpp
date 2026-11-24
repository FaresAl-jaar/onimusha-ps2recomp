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

// Function: sub_002B0070
// Address: 0x2b0070 - 0x2b00f8
void sub_002B0070_0x2b0070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B0070_0x2b0070");
#endif

    switch (ctx->pc) {
        case 0x2b0090u: goto label_2b0090;
        case 0x2b00d8u: goto label_2b00d8;
        default: break;
    }

    ctx->pc = 0x2b0070u;

    // 0x2b0070: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b0070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b0074: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b0074u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0078: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b0078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b007c: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x2b007cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2b0080: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b0080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2b0084: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b0084u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0088: 0xc049590  jal         func_125640
    ctx->pc = 0x2B0088u;
    SET_GPR_U32(ctx, 31, 0x2B0090u);
    ctx->pc = 0x2B008Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0088u;
    // 0x2b008c: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x2B0088u, 0x2B0090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0090u;
label_2b0090:
    // 0x2b0090: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2b0090u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2b0094: 0x8c22ceb8  lw          $v0, -0x3148($at)
    ctx->pc = 0x2b0094u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x2b0098: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x2b0098u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x2b009c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B009Cu;
    {
        const bool branch_taken_0x2b009c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B00A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B009Cu;
        // 0x2b00a0: 0x3c02426f  lui         $v0, 0x426F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17007 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b009c) {
            ctx->pc = 0x2B00B4u;
            goto label_2b00b4;
        }
    }
    ctx->pc = 0x2B00A4u;
    // 0x2b00a4: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2b00a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2b00a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b00a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b00ac: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2B00ACu;
    {
        const bool branch_taken_0x2b00ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B00B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B00ACu;
        // 0x2b00b0: 0xe6000004  swc1        $f0, 0x4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b00ac) {
            ctx->pc = 0x2B00C0u;
            goto label_2b00c0;
        }
    }
    ctx->pc = 0x2B00B4u;
label_2b00b4:
    // 0x2b00b4: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x2b00b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
    // 0x2b00b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b00b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b00bc: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x2b00bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_2b00c0:
    // 0x2b00c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b00c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b00c4: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x2b00c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x2b00c8: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x2b00c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2b00cc: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x2b00ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x2b00d0: 0xc08154e  jal         func_205538
    ctx->pc = 0x2B00D0u;
    SET_GPR_U32(ctx, 31, 0x2B00D8u);
    ctx->pc = 0x2B00D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B00D0u;
    // 0x2b00d4: 0xa2000010  sb          $zero, 0x10($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 16), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205538u, 0x2B00D0u, 0x2B00D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B00D8u;
label_2b00d8:
    // 0x2b00d8: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2b00d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2b00dc: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x2b00dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
    // 0x2b00e0: 0xae00005c  sw          $zero, 0x5C($s0)
    ctx->pc = 0x2b00e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 0));
    // 0x2b00e4: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x2b00e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
    // 0x2b00e8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b00e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b00ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b00ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b00f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2B00F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B00F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B00F0u;
        // 0x2b00f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B00F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B00F8u;
}
