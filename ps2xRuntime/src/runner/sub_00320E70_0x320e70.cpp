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

// Function: sub_00320E70
// Address: 0x320e70 - 0x320f24
void sub_00320E70_0x320e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00320E70_0x320e70");
#endif

    switch (ctx->pc) {
        case 0x320eb8u: goto label_320eb8;
        case 0x320ec8u: goto label_320ec8;
        default: break;
    }

    ctx->pc = 0x320e70u;

    // 0x320e70: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x320e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x320e74: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x320e74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x320e78: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x320e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x320e7c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x320e7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x320e80: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x320e80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x320e84: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x320e84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320e88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x320e88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x320e8c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x320e8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320e90: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x320e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x320e94: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x320e94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320e98: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x320e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x320e9c: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x320e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x320ea0: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x320ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x320ea4: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x320ea4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x320ea8: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x320ea8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x320eac: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x320eacu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x320eb0: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x320eb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x320eb4: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x320eb4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
label_320eb8:
    // 0x320eb8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x320eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x320ebc: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x320ebcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x320ec0: 0xc0414ca  jal         func_105328
    ctx->pc = 0x320EC0u;
    SET_GPR_U32(ctx, 31, 0x320EC8u);
    ctx->pc = 0x320EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320EC0u;
    // 0x320ec4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x320EC0u, 0x320EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320EC8u;
label_320ec8:
    // 0x320ec8: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x320ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x320ecc: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x320eccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x320ed0: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x320ed0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x320ed4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x320ed4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x320ed8: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x320ed8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x320edc: 0x7ca40000  sq          $a0, 0x0($a1)
    ctx->pc = 0x320edcu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 4));
    // 0x320ee0: 0x2a430004  slti        $v1, $s2, 0x4
    ctx->pc = 0x320ee0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x320ee4: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x320ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x320ee8: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x320ee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x320eec: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x320eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x320ef0: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x320ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x320ef4: 0xe6030010  swc1        $f3, 0x10($s0)
    ctx->pc = 0x320ef4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x320ef8: 0xe6020014  swc1        $f2, 0x14($s0)
    ctx->pc = 0x320ef8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x320efc: 0xe6010018  swc1        $f1, 0x18($s0)
    ctx->pc = 0x320efcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x320f00: 0xe600001c  swc1        $f0, 0x1C($s0)
    ctx->pc = 0x320f00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x320f04: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x320F04u;
    {
        const bool branch_taken_0x320f04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x320F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320F04u;
        // 0x320f08: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320f04) {
            ctx->pc = 0x320EB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_320eb8;
        }
    }
    ctx->pc = 0x320F0Cu;
    // 0x320f0c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x320f0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x320f10: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x320f10u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x320f14: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x320f14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x320f18: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x320f18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x320f1c: 0x3e00008  jr          $ra
    ctx->pc = 0x320F1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x320F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320F1Cu;
        // 0x320f20: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x320F1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x320F24u;
}
