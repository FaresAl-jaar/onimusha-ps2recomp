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

// Function: sub_002FE9B0
// Address: 0x2fe9b0 - 0x2fea6c
void sub_002FE9B0_0x2fe9b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FE9B0_0x2fe9b0");
#endif

    switch (ctx->pc) {
        case 0x2fe9ecu: goto label_2fe9ec;
        case 0x2fea04u: goto label_2fea04;
        case 0x2fea2cu: goto label_2fea2c;
        default: break;
    }

    ctx->pc = 0x2fe9b0u;

    // 0x2fe9b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2fe9b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2fe9b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2fe9b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2fe9b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2fe9b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2fe9bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2fe9bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2fe9c0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2fe9c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe9c4: 0xac850090  sw          $a1, 0x90($a0)
    ctx->pc = 0x2fe9c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 144), GPR_U32(ctx, 5));
    // 0x2fe9c8: 0x8c820090  lw          $v0, 0x90($a0)
    ctx->pc = 0x2fe9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 144)));
    // 0x2fe9cc: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2FE9CCu;
    {
        const bool branch_taken_0x2fe9cc = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x2FE9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE9CCu;
        // 0x2fe9d0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe9cc) {
            ctx->pc = 0x2FE9D8u;
            goto label_2fe9d8;
        }
    }
    ctx->pc = 0x2FE9D4u;
    // 0x2fe9d4: 0xae000090  sw          $zero, 0x90($s0)
    ctx->pc = 0x2fe9d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 0));
label_2fe9d8:
    // 0x2fe9d8: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x2fe9d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2fe9dc: 0x92060011  lbu         $a2, 0x11($s0)
    ctx->pc = 0x2fe9dcu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 17)));
    // 0x2fe9e0: 0x8e070090  lw          $a3, 0x90($s0)
    ctx->pc = 0x2fe9e0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x2fe9e4: 0xc096fd8  jal         func_25BF60
    ctx->pc = 0x2FE9E4u;
    SET_GPR_U32(ctx, 31, 0x2FE9ECu);
    ctx->pc = 0x2FE9E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE9E4u;
    // 0x2fe9e8: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BF60u, 0x2FE9E4u, 0x2FE9ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE9ECu;
label_2fe9ec:
    // 0x2fe9ec: 0x7a220000  lq          $v0, 0x0($s1)
    ctx->pc = 0x2fe9ecu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2fe9f0: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x2fe9f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x2fe9f4: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x2fe9f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x2fe9f8: 0x26060060  addiu       $a2, $s0, 0x60
    ctx->pc = 0x2fe9f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x2fe9fc: 0xc07679c  jal         func_1D9E70
    ctx->pc = 0x2FE9FCu;
    SET_GPR_U32(ctx, 31, 0x2FEA04u);
    ctx->pc = 0x2FEA00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE9FCu;
    // 0x2fea00: 0x7e020060  sq          $v0, 0x60($s0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 16), 96), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E70u, 0x2FE9FCu, 0x2FEA04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FEA04u;
label_2fea04:
    // 0x2fea04: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x2fea04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x2fea08: 0x78235c70  lq          $v1, 0x5C70($at)
    ctx->pc = 0x2fea08u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x665C70u));
    // 0x2fea0c: 0x7e030080  sq          $v1, 0x80($s0)
    ctx->pc = 0x2fea0cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 128), GPR_VEC(ctx, 3));
    // 0x2fea10: 0x92030010  lbu         $v1, 0x10($s0)
    ctx->pc = 0x2fea10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2fea14: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2fea14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2fea18: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2FEA18u;
    {
        const bool branch_taken_0x2fea18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FEA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEA18u;
        // 0x2fea1c: 0x26040070  addiu       $a0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fea18) {
            ctx->pc = 0x2FEA50u;
            goto label_2fea50;
        }
    }
    ctx->pc = 0x2FEA20u;
    // 0x2fea20: 0x27a5003c  addiu       $a1, $sp, 0x3C
    ctx->pc = 0x2fea20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x2fea24: 0xc096cb8  jal         func_25B2E0
    ctx->pc = 0x2FEA24u;
    SET_GPR_U32(ctx, 31, 0x2FEA2Cu);
    ctx->pc = 0x2FEA28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FEA24u;
    // 0x2fea28: 0x26060080  addiu       $a2, $s0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B2E0u, 0x2FEA24u, 0x2FEA2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FEA2Cu;
label_2fea2c:
    // 0x2fea2c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FEA2Cu;
    {
        const bool branch_taken_0x2fea2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fea2c) {
            ctx->pc = 0x2FEA40u;
            goto label_2fea40;
        }
    }
    ctx->pc = 0x2FEA34u;
    // 0x2fea34: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x2fea34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fea38: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2FEA38u;
    {
        const bool branch_taken_0x2fea38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FEA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEA38u;
        // 0x2fea3c: 0xe6000074  swc1        $f0, 0x74($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fea38) {
            ctx->pc = 0x2FEA50u;
            goto label_2fea50;
        }
    }
    ctx->pc = 0x2FEA40u;
label_2fea40:
    // 0x2fea40: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2fea40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2fea44: 0xc4600024  lwc1        $f0, 0x24($v1)
    ctx->pc = 0x2fea44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fea48: 0xe6000074  swc1        $f0, 0x74($s0)
    ctx->pc = 0x2fea48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
    // 0x2fea4c: 0x0  nop
    ctx->pc = 0x2fea4cu;
    // NOP
label_2fea50:
    // 0x2fea50: 0x7a030070  lq          $v1, 0x70($s0)
    ctx->pc = 0x2fea50u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x2fea54: 0x7e030050  sq          $v1, 0x50($s0)
    ctx->pc = 0x2fea54u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 80), GPR_VEC(ctx, 3));
    // 0x2fea58: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2fea58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2fea5c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2fea5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fea60: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2fea60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fea64: 0x3e00008  jr          $ra
    ctx->pc = 0x2FEA64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FEA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEA64u;
        // 0x2fea68: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FEA64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FEA6Cu;
}
