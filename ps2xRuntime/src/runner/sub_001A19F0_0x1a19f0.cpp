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

// Function: sub_001A19F0
// Address: 0x1a19f0 - 0x1a1b18
void sub_001A19F0_0x1a19f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A19F0_0x1a19f0");
#endif

    switch (ctx->pc) {
        case 0x1a1a08u: goto label_1a1a08;
        default: break;
    }

    ctx->pc = 0x1a19f0u;

    // 0x1a19f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a19f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a19f4: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x1a19f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1a19f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a19f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a19fc: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x1a19fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1a1a00: 0x10e00008  beqz        $a3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A1A00u;
    {
        const bool branch_taken_0x1a1a00 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1A00u;
        // 0x1a1a04: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1a00) {
            ctx->pc = 0x1A1A24u;
            goto label_1a1a24;
        }
    }
    ctx->pc = 0x1A1A08u;
label_1a1a08:
    // 0x1a1a08: 0xa0e00000  sb          $zero, 0x0($a3)
    ctx->pc = 0x1a1a08u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a1a0c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1a1a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1a1a10: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1a1a10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1a1a14: 0x0  nop
    ctx->pc = 0x1a1a14u;
    // NOP
    // 0x1a1a18: 0x0  nop
    ctx->pc = 0x1a1a18u;
    // NOP
    // 0x1a1a1c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1A1A1Cu;
    {
        const bool branch_taken_0x1a1a1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a1a1c) {
            ctx->pc = 0x1A1A08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a1a08;
        }
    }
    ctx->pc = 0x1A1A24u;
label_1a1a24:
    // 0x1a1a24: 0x78a50000  lq          $a1, 0x0($a1)
    ctx->pc = 0x1a1a24u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a1a28: 0x24870020  addiu       $a3, $a0, 0x20
    ctx->pc = 0x1a1a28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1a1a2c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1a1a2cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1a30: 0x24900030  addiu       $s0, $a0, 0x30
    ctx->pc = 0x1a1a30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x1a1a34: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1a1a34u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1a38: 0x27b80020  addiu       $t8, $sp, 0x20
    ctx->pc = 0x1a1a38u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1a1a3c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1a1a3cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1a40: 0x24990070  addiu       $t9, $a0, 0x70
    ctx->pc = 0x1a1a40u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
    // 0x1a1a44: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1a1a44u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1a48: 0x27ae0020  addiu       $t6, $sp, 0x20
    ctx->pc = 0x1a1a48u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1a1a4c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1a1a4cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1a50: 0x248f0090  addiu       $t7, $a0, 0x90
    ctx->pc = 0x1a1a50u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 4), 144));
    // 0x1a1a54: 0x7ce50000  sq          $a1, 0x0($a3)
    ctx->pc = 0x1a1a54u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 5));
    // 0x1a1a58: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1a1a58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1a1a5c: 0x78d10000  lq          $s1, 0x0($a2)
    ctx->pc = 0x1a1a5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1a1a60: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1a1a60u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a1a64: 0x27ac0020  addiu       $t4, $sp, 0x20
    ctx->pc = 0x1a1a64u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1a1a68: 0x248d00a0  addiu       $t5, $a0, 0xA0
    ctx->pc = 0x1a1a68u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
    // 0x1a1a6c: 0x27aa0020  addiu       $t2, $sp, 0x20
    ctx->pc = 0x1a1a6cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1a1a70: 0x248b00b0  addiu       $t3, $a0, 0xB0
    ctx->pc = 0x1a1a70u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), 176));
    // 0x1a1a74: 0x27a80020  addiu       $t0, $sp, 0x20
    ctx->pc = 0x1a1a74u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1a1a78: 0x24890080  addiu       $t1, $a0, 0x80
    ctx->pc = 0x1a1a78u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
    // 0x1a1a7c: 0x24850030  addiu       $a1, $a0, 0x30
    ctx->pc = 0x1a1a7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x1a1a80: 0x248700c0  addiu       $a3, $a0, 0xC0
    ctx->pc = 0x1a1a80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    // 0x1a1a84: 0x7e110000  sq          $s1, 0x0($s0)
    ctx->pc = 0x1a1a84u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 17));
    // 0x1a1a88: 0x78d10010  lq          $s1, 0x10($a2)
    ctx->pc = 0x1a1a88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x1a1a8c: 0x7e110010  sq          $s1, 0x10($s0)
    ctx->pc = 0x1a1a8cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 17));
    // 0x1a1a90: 0x78d10020  lq          $s1, 0x20($a2)
    ctx->pc = 0x1a1a90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x1a1a94: 0x7e110020  sq          $s1, 0x20($s0)
    ctx->pc = 0x1a1a94u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 17));
    // 0x1a1a98: 0x78d10030  lq          $s1, 0x30($a2)
    ctx->pc = 0x1a1a98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x1a1a9c: 0x7e110030  sq          $s1, 0x30($s0)
    ctx->pc = 0x1a1a9cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), GPR_VEC(ctx, 17));
    // 0x1a1aa0: 0x7b030000  lq          $v1, 0x0($t8)
    ctx->pc = 0x1a1aa0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x1a1aa4: 0x7f230000  sq          $v1, 0x0($t9)
    ctx->pc = 0x1a1aa4u;
    WRITE128(ADD32(GPR_U32(ctx, 25), 0), GPR_VEC(ctx, 3));
    // 0x1a1aa8: 0x79c30000  lq          $v1, 0x0($t6)
    ctx->pc = 0x1a1aa8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x1a1aac: 0x7de30000  sq          $v1, 0x0($t7)
    ctx->pc = 0x1a1aacu;
    WRITE128(ADD32(GPR_U32(ctx, 15), 0), GPR_VEC(ctx, 3));
    // 0x1a1ab0: 0x79830000  lq          $v1, 0x0($t4)
    ctx->pc = 0x1a1ab0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x1a1ab4: 0x7da30000  sq          $v1, 0x0($t5)
    ctx->pc = 0x1a1ab4u;
    WRITE128(ADD32(GPR_U32(ctx, 13), 0), GPR_VEC(ctx, 3));
    // 0x1a1ab8: 0x79430000  lq          $v1, 0x0($t2)
    ctx->pc = 0x1a1ab8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x1a1abc: 0x7d630000  sq          $v1, 0x0($t3)
    ctx->pc = 0x1a1abcu;
    WRITE128(ADD32(GPR_U32(ctx, 11), 0), GPR_VEC(ctx, 3));
    // 0x1a1ac0: 0x79030000  lq          $v1, 0x0($t0)
    ctx->pc = 0x1a1ac0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1a1ac4: 0x7d230000  sq          $v1, 0x0($t1)
    ctx->pc = 0x1a1ac4u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 3));
    // 0x1a1ac8: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x1a1ac8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a1acc: 0x7ce30000  sq          $v1, 0x0($a3)
    ctx->pc = 0x1a1accu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 3));
    // 0x1a1ad0: 0x78a30010  lq          $v1, 0x10($a1)
    ctx->pc = 0x1a1ad0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1a1ad4: 0x7ce30010  sq          $v1, 0x10($a3)
    ctx->pc = 0x1a1ad4u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 16), GPR_VEC(ctx, 3));
    // 0x1a1ad8: 0x78a30020  lq          $v1, 0x20($a1)
    ctx->pc = 0x1a1ad8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x1a1adc: 0x7ce30020  sq          $v1, 0x20($a3)
    ctx->pc = 0x1a1adcu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 32), GPR_VEC(ctx, 3));
    // 0x1a1ae0: 0x78a30030  lq          $v1, 0x30($a1)
    ctx->pc = 0x1a1ae0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x1a1ae4: 0x7ce30030  sq          $v1, 0x30($a3)
    ctx->pc = 0x1a1ae4u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 48), GPR_VEC(ctx, 3));
    // 0x1a1ae8: 0xc4810020  lwc1        $f1, 0x20($a0)
    ctx->pc = 0x1a1ae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a1aec: 0xe48100f0  swc1        $f1, 0xF0($a0)
    ctx->pc = 0x1a1aecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 240), bits); }
    // 0x1a1af0: 0xc4810024  lwc1        $f1, 0x24($a0)
    ctx->pc = 0x1a1af0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a1af4: 0xe48100f4  swc1        $f1, 0xF4($a0)
    ctx->pc = 0x1a1af4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 244), bits); }
    // 0x1a1af8: 0xc4810028  lwc1        $f1, 0x28($a0)
    ctx->pc = 0x1a1af8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a1afc: 0xe48100f8  swc1        $f1, 0xF8($a0)
    ctx->pc = 0x1a1afcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 248), bits); }
    // 0x1a1b00: 0xe48000fc  swc1        $f0, 0xFC($a0)
    ctx->pc = 0x1a1b00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 252), bits); }
    // 0x1a1b04: 0xac800100  sw          $zero, 0x100($a0)
    ctx->pc = 0x1a1b04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 256), GPR_U32(ctx, 0));
    // 0x1a1b08: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a1b08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a1b0c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a1b0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a1b10: 0x3e00008  jr          $ra
    ctx->pc = 0x1A1B10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A1B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1B10u;
        // 0x1a1b14: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1B10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A1B18u;
}
