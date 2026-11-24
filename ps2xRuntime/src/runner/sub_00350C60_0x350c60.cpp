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

// Function: sub_00350C60
// Address: 0x350c60 - 0x350d0c
void sub_00350C60_0x350c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00350C60_0x350c60");
#endif

    switch (ctx->pc) {
        case 0x350ce0u: goto label_350ce0;
        default: break;
    }

    ctx->pc = 0x350c60u;

    // 0x350c60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x350c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x350c64: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x350c64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x350c68: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x350c68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x350c6c: 0x27838060  addiu       $v1, $gp, -0x7FA0
    ctx->pc = 0x350c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x350c70: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x350c70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x350c74: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x350c74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x350c78: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x350c78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350c7c: 0x90246c1c  lbu         $a0, 0x6C1C($at)
    ctx->pc = 0x350c7cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x350c80: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x350c80u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x350c84: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x350c84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x350c88: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x350c88u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x350c8c: 0x1220001a  beqz        $s1, . + 4 + (0x1A << 2)
    ctx->pc = 0x350C8Cu;
    {
        const bool branch_taken_0x350c8c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x350c8c) {
            ctx->pc = 0x350CF8u;
            goto label_350cf8;
        }
    }
    ctx->pc = 0x350C94u;
    // 0x350c94: 0x9203002a  lbu         $v1, 0x2A($s0)
    ctx->pc = 0x350c94u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 42)));
    // 0x350c98: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x350c98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x350c9c: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x350C9Cu;
    {
        const bool branch_taken_0x350c9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x350c9c) {
            ctx->pc = 0x350CF0u;
            goto label_350cf0;
        }
    }
    ctx->pc = 0x350CA4u;
    // 0x350ca4: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x350ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
    // 0x350ca8: 0x86060060  lh          $a2, 0x60($s0)
    ctx->pc = 0x350ca8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x350cac: 0x24427aa0  addiu       $v0, $v0, 0x7AA0
    ctx->pc = 0x350cacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31392));
    // 0x350cb0: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x350cb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x350cb4: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x350cb4u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x657AA0u));
    // 0x350cb8: 0xc6000058  lwc1        $f0, 0x58($s0)
    ctx->pc = 0x350cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x350cbc: 0xc6010054  lwc1        $f1, 0x54($s0)
    ctx->pc = 0x350cbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x350cc0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x350cc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350cc4: 0xc6020050  lwc1        $f2, 0x50($s0)
    ctx->pc = 0x350cc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x350cc8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x350cc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x350ccc: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x350cccu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x350cd0: 0xe7a20030  swc1        $f2, 0x30($sp)
    ctx->pc = 0x350cd0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x350cd4: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x350cd4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x350cd8: 0xc0a68b8  jal         func_29A2E0
    ctx->pc = 0x350CD8u;
    SET_GPR_U32(ctx, 31, 0x350CE0u);
    ctx->pc = 0x350CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350CD8u;
    // 0x350cdc: 0xe7a00038  swc1        $f0, 0x38($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A2E0u, 0x350CD8u, 0x350CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350CE0u;
label_350ce0:
    // 0x350ce0: 0xae2028f4  sw          $zero, 0x28F4($s1)
    ctx->pc = 0x350ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 10484), GPR_U32(ctx, 0));
    // 0x350ce4: 0x9203002a  lbu         $v1, 0x2A($s0)
    ctx->pc = 0x350ce4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 42)));
    // 0x350ce8: 0x306300ef  andi        $v1, $v1, 0xEF
    ctx->pc = 0x350ce8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)239);
    // 0x350cec: 0xa203002a  sb          $v1, 0x2A($s0)
    ctx->pc = 0x350cecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 42), (uint8_t)GPR_U32(ctx, 3));
label_350cf0:
    // 0x350cf0: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x350CF0u;
    {
        const bool branch_taken_0x350cf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x350cf0) {
            ctx->pc = 0x350CF8u;
            goto label_350cf8;
        }
    }
    ctx->pc = 0x350CF8u;
label_350cf8:
    // 0x350cf8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x350cf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x350cfc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x350cfcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x350d00: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x350d00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x350d04: 0x3e00008  jr          $ra
    ctx->pc = 0x350D04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x350D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350D04u;
        // 0x350d08: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x350D04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x350D0Cu;
}
