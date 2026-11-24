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

// Function: sub_0011AAB0
// Address: 0x11aab0 - 0x11aec0
void sub_0011AAB0_0x11aab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011AAB0_0x11aab0");
#endif

    switch (ctx->pc) {
        case 0x11aaf4u: goto label_11aaf4;
        case 0x11aafcu: goto label_11aafc;
        case 0x11ac54u: goto label_11ac54;
        case 0x11ad50u: goto label_11ad50;
        case 0x11adacu: goto label_11adac;
        default: break;
    }

    ctx->pc = 0x11aab0u;

    // 0x11aab0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x11aab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11aab4: 0x440d6000  mfc1        $t5, $f12
    ctx->pc = 0x11aab4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 13, bits); }
    // 0x11aab8: 0x3c0f7fff  lui         $t7, 0x7FFF
    ctx->pc = 0x11aab8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)32767 << 16));
    // 0x11aabc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11aabcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11aac0: 0x35efffff  ori         $t7, $t7, 0xFFFF
    ctx->pc = 0x11aac0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)65535);
    // 0x11aac4: 0xe7b60010  swc1        $f22, 0x10($sp)
    ctx->pc = 0x11aac4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x11aac8: 0xe7b5000c  swc1        $f21, 0xC($sp)
    ctx->pc = 0x11aac8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x11aacc: 0x3c0c3f80  lui         $t4, 0x3F80
    ctx->pc = 0x11aaccu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)16256 << 16));
    // 0x11aad0: 0xe7b40008  swc1        $f20, 0x8($sp)
    ctx->pc = 0x11aad0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x11aad4: 0x1af7024  and         $t6, $t5, $t7
    ctx->pc = 0x11aad4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 13) & GPR_U64(ctx, 15));
    // 0x11aad8: 0x15cc000c  bne         $t6, $t4, . + 4 + (0xC << 2)
    ctx->pc = 0x11AAD8u;
    {
        const bool branch_taken_0x11aad8 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 12));
        ctx->pc = 0x11AADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AAD8u;
        // 0x11aadc: 0x18e782a  slt         $t7, $t4, $t6 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 14)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11aad8) {
            ctx->pc = 0x11AB0Cu;
            goto label_11ab0c;
        }
    }
    ctx->pc = 0x11AAE0u;
    // 0x11aae0: 0x1da00004  bgtz        $t5, . + 4 + (0x4 << 2)
    ctx->pc = 0x11AAE0u;
    {
        const bool branch_taken_0x11aae0 = (GPR_S64(ctx, 13) > 0);
        ctx->pc = 0x11AAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AAE0u;
        // 0x11aae4: 0x44800000  mtc1        $zero, $f0 (Delay Slot)
        { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11aae0) {
            ctx->pc = 0x11AAF4u;
            goto label_11aaf4;
        }
    }
    ctx->pc = 0x11AAE8u;
    // 0x11aae8: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x11aae8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x11aaec: 0x25ef2c60  addiu       $t7, $t7, 0x2C60
    ctx->pc = 0x11aaecu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 11360));
    // 0x11aaf0: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x11aaf0u;
    { uint32_t bits = FAST_READ32(0x662C60u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_11aaf4:
    // 0x11aaf4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11aaf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11aaf8: 0xc7b60010  lwc1        $f22, 0x10($sp)
    ctx->pc = 0x11aaf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_11aafc:
    // 0x11aafc: 0xc7b5000c  lwc1        $f21, 0xC($sp)
    ctx->pc = 0x11aafcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x11ab00: 0xc7b40008  lwc1        $f20, 0x8($sp)
    ctx->pc = 0x11ab00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x11ab04: 0x3e00008  jr          $ra
    ctx->pc = 0x11AB04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11AB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AB04u;
        // 0x11ab08: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11AB04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11AB0Cu;
label_11ab0c:
    // 0x11ab0c: 0x11e00007  beqz        $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x11AB0Cu;
    {
        const bool branch_taken_0x11ab0c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AB0Cu;
        // 0x11ab10: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ab0c) {
            ctx->pc = 0x11AB2Cu;
            goto label_11ab2c;
        }
    }
    ctx->pc = 0x11AB14u;
    // 0x11ab14: 0x460c6001  sub.s       $f0, $f12, $f12
    ctx->pc = 0x11ab14u;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[12]);
    // 0x11ab18: 0x0  nop
    ctx->pc = 0x11ab18u;
    // NOP
    // 0x11ab1c: 0x0  nop
    ctx->pc = 0x11ab1cu;
    // NOP
    // 0x11ab20: 0x46000003  div.s       $f0, $f0, $f0
    ctx->pc = 0x11ab20u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[0]); }
    // 0x11ab24: 0x1000fff5  b           . + 4 + (-0xB << 2)
    ctx->pc = 0x11AB24u;
    {
        const bool branch_taken_0x11ab24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AB24u;
        // 0x11ab28: 0xc7b60010  lwc1        $f22, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ab24) {
            ctx->pc = 0x11AAFCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11aafc;
        }
    }
    ctx->pc = 0x11AB2Cu;
label_11ab2c:
    // 0x11ab2c: 0x3c0f3eff  lui         $t7, 0x3EFF
    ctx->pc = 0x11ab2cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)16127 << 16));
    // 0x11ab30: 0x35efffff  ori         $t7, $t7, 0xFFFF
    ctx->pc = 0x11ab30u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)65535);
    // 0x11ab34: 0x1ee782a  slt         $t7, $t7, $t6
    ctx->pc = 0x11ab34u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 14)) ? 1 : 0);
    // 0x11ab38: 0x15e00049  bnez        $t7, . + 4 + (0x49 << 2)
    ctx->pc = 0x11AB38u;
    {
        const bool branch_taken_0x11ab38 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x11AB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AB38u;
        // 0x11ab3c: 0x3c0f0066  lui         $t7, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ab38) {
            ctx->pc = 0x11AC60u;
            goto label_11ac60;
        }
    }
    ctx->pc = 0x11AB40u;
    // 0x11ab40: 0x25ef2c64  addiu       $t7, $t7, 0x2C64
    ctx->pc = 0x11ab40u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 11364));
    // 0x11ab44: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x11ab44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11ab48: 0x3c0f2300  lui         $t7, 0x2300
    ctx->pc = 0x11ab48u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)8960 << 16));
    // 0x11ab4c: 0x1ee782a  slt         $t7, $t7, $t6
    ctx->pc = 0x11ab4cu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 14)) ? 1 : 0);
    // 0x11ab50: 0x11e0ffe8  beqz        $t7, . + 4 + (-0x18 << 2)
    ctx->pc = 0x11AB50u;
    {
        const bool branch_taken_0x11ab50 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AB50u;
        // 0x11ab54: 0x3c0f0066  lui         $t7, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ab50) {
            ctx->pc = 0x11AAF4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11aaf4;
        }
    }
    ctx->pc = 0x11AB58u;
    // 0x11ab58: 0x460c6542  mul.s       $f21, $f12, $f12
    ctx->pc = 0x11ab58u;
    ctx->f[21] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x11ab5c: 0x25ef2c68  addiu       $t7, $t7, 0x2C68
    ctx->pc = 0x11ab5cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 11368));
    // 0x11ab60: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x11ab60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11ab64: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x11ab64u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x11ab68: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x11ab68u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x11ab6c: 0x25ef2c6c  addiu       $t7, $t7, 0x2C6C
    ctx->pc = 0x11ab6cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 11372));
    // 0x11ab70: 0xc5e10000  lwc1        $f1, 0x0($t7)
    ctx->pc = 0x11ab70u;
    { uint32_t bits = FAST_READ32(0x662C6Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11ab74: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x11ab74u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x11ab78: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x11ab78u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x11ab7c: 0x25ef2c70  addiu       $t7, $t7, 0x2C70
    ctx->pc = 0x11ab7cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 11376));
    // 0x11ab80: 0xc5e20000  lwc1        $f2, 0x0($t7)
    ctx->pc = 0x11ab80u;
    { uint32_t bits = FAST_READ32(0x662C70u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11ab84: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x11ab84u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x11ab88: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x11ab88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x11ab8c: 0x25ef2c74  addiu       $t7, $t7, 0x2C74
    ctx->pc = 0x11ab8cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 11380));
    // 0x11ab90: 0xc5e30000  lwc1        $f3, 0x0($t7)
    ctx->pc = 0x11ab90u;
    { uint32_t bits = FAST_READ32(0x662C74u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x11ab94: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x11ab94u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x11ab98: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x11ab98u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x11ab9c: 0x25ef2c78  addiu       $t7, $t7, 0x2C78
    ctx->pc = 0x11ab9cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 11384));
    // 0x11aba0: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x11aba0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x11aba4: 0xc5e20000  lwc1        $f2, 0x0($t7)
    ctx->pc = 0x11aba4u;
    { uint32_t bits = FAST_READ32(0x662C78u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11aba8: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x11aba8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x11abac: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x11abacu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x11abb0: 0x25ef2c7c  addiu       $t7, $t7, 0x2C7C
    ctx->pc = 0x11abb0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 11388));
    // 0x11abb4: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x11abb4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x11abb8: 0xc5e30000  lwc1        $f3, 0x0($t7)
    ctx->pc = 0x11abb8u;
    { uint32_t bits = FAST_READ32(0x662C7Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x11abbc: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x11abbcu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x11abc0: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x11abc0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x11abc4: 0x25ef2c80  addiu       $t7, $t7, 0x2C80
    ctx->pc = 0x11abc4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 11392));
    // 0x11abc8: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x11abc8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x11abcc: 0xc5e20000  lwc1        $f2, 0x0($t7)
    ctx->pc = 0x11abccu;
    { uint32_t bits = FAST_READ32(0x662C80u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11abd0: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x11abd0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x11abd4: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x11abd4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x11abd8: 0x25ef2c84  addiu       $t7, $t7, 0x2C84
    ctx->pc = 0x11abd8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 11396));
    // 0x11abdc: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x11abdcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x11abe0: 0xc5e30000  lwc1        $f3, 0x0($t7)
    ctx->pc = 0x11abe0u;
    { uint32_t bits = FAST_READ32(0x662C84u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x11abe4: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x11abe4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x11abe8: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x11abe8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x11abec: 0x25ef2c88  addiu       $t7, $t7, 0x2C88
    ctx->pc = 0x11abecu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 11400));
    // 0x11abf0: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x11abf0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x11abf4: 0xc5e20000  lwc1        $f2, 0x0($t7)
    ctx->pc = 0x11abf4u;
    { uint32_t bits = FAST_READ32(0x662C88u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11abf8: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x11abf8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x11abfc: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x11abfcu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x11ac00: 0x25ef2c8c  addiu       $t7, $t7, 0x2C8C
    ctx->pc = 0x11ac00u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 11404));
    // 0x11ac04: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x11ac04u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x11ac08: 0xc5e30000  lwc1        $f3, 0x0($t7)
    ctx->pc = 0x11ac08u;
    { uint32_t bits = FAST_READ32(0x662C8Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x11ac0c: 0x46030d80  add.s       $f22, $f1, $f3
    ctx->pc = 0x11ac0cu;
    ctx->f[22] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x11ac10: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x11ac10u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x11ac14: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x11ac14u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x11ac18: 0x25ef2c90  addiu       $t7, $t7, 0x2C90
    ctx->pc = 0x11ac18u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 11408));
    // 0x11ac1c: 0xc5e10000  lwc1        $f1, 0x0($t7)
    ctx->pc = 0x11ac1cu;
    { uint32_t bits = FAST_READ32(0x662C90u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11ac20: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x11ac20u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x11ac24: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x11ac24u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x11ac28: 0x25ef2c94  addiu       $t7, $t7, 0x2C94
    ctx->pc = 0x11ac28u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 11412));
    // 0x11ac2c: 0x4600ad02  mul.s       $f20, $f21, $f0
    ctx->pc = 0x11ac2cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x11ac30: 0x0  nop
    ctx->pc = 0x11ac30u;
    // NOP
    // 0x11ac34: 0x0  nop
    ctx->pc = 0x11ac34u;
    // NOP
    // 0x11ac38: 0x4616a003  div.s       $f0, $f20, $f22
    ctx->pc = 0x11ac38u;
    { if (ctx->f[22] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[20], ctx->f[22]); }
    // 0x11ac3c: 0x46006042  mul.s       $f1, $f12, $f0
    ctx->pc = 0x11ac3cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x11ac40: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x11ac40u;
    { uint32_t bits = FAST_READ32(0x662C94u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11ac44: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x11ac44u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x11ac48: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x11ac48u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x11ac4c: 0x25ef2c64  addiu       $t7, $t7, 0x2C64
    ctx->pc = 0x11ac4cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 11364));
    // 0x11ac50: 0x46006001  sub.s       $f0, $f12, $f0
    ctx->pc = 0x11ac50u;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
label_11ac54:
    // 0x11ac54: 0xc5e10000  lwc1        $f1, 0x0($t7)
    ctx->pc = 0x11ac54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11ac58: 0x1000ffa6  b           . + 4 + (-0x5A << 2)
    ctx->pc = 0x11AC58u;
    {
        const bool branch_taken_0x11ac58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AC58u;
        // 0x11ac5c: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ac58) {
            ctx->pc = 0x11AAF4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11aaf4;
        }
    }
    ctx->pc = 0x11AC60u;
label_11ac60:
    // 0x11ac60: 0x5a10049  bgez        $t5, . + 4 + (0x49 << 2)
    ctx->pc = 0x11AC60u;
    {
        const bool branch_taken_0x11ac60 = (GPR_S64(ctx, 13) >= 0);
        ctx->pc = 0x11AC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AC60u;
        // 0x11ac64: 0x3c0f0066  lui         $t7, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ac60) {
            ctx->pc = 0x11AD88u;
            goto label_11ad88;
        }
    }
    ctx->pc = 0x11AC68u;
    // 0x11ac68: 0x25ef2c8c  addiu       $t7, $t7, 0x2C8C
    ctx->pc = 0x11ac68u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 11404));
    // 0x11ac6c: 0xc5e40000  lwc1        $f4, 0x0($t7)
    ctx->pc = 0x11ac6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x11ac70: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x11ac70u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x11ac74: 0x46046080  add.s       $f2, $f12, $f4
    ctx->pc = 0x11ac74u;
    ctx->f[2] = FPU_ADD_S(ctx->f[12], ctx->f[4]);
    // 0x11ac78: 0x25ef2c98  addiu       $t7, $t7, 0x2C98
    ctx->pc = 0x11ac78u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 11416));
    // 0x11ac7c: 0xc5e10000  lwc1        $f1, 0x0($t7)
    ctx->pc = 0x11ac7cu;
    { uint32_t bits = FAST_READ32(0x662C98u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11ac80: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x11ac80u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x11ac84: 0x46011542  mul.s       $f21, $f2, $f1
    ctx->pc = 0x11ac84u;
    ctx->f[21] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x11ac88: 0x25ef2c68  addiu       $t7, $t7, 0x2C68
    ctx->pc = 0x11ac88u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 11368));
    // 0x11ac8c: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x11ac8cu;
    { uint32_t bits = FAST_READ32(0x662C68u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11ac90: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x11ac90u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x11ac94: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x11ac94u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x11ac98: 0x25ef2c6c  addiu       $t7, $t7, 0x2C6C
    ctx->pc = 0x11ac98u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 11372));
    // 0x11ac9c: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x11ac9cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x11aca0: 0xc5e10000  lwc1        $f1, 0x0($t7)
    ctx->pc = 0x11aca0u;
    { uint32_t bits = FAST_READ32(0x662C6Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11aca4: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x11aca4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x11aca8: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x11aca8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x11acac: 0x25ef2c70  addiu       $t7, $t7, 0x2C70
    ctx->pc = 0x11acacu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 11376));
    // 0x11acb0: 0xc5e20000  lwc1        $f2, 0x0($t7)
    ctx->pc = 0x11acb0u;
    { uint32_t bits = FAST_READ32(0x662C70u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11acb4: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x11acb4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x11acb8: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x11acb8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x11acbc: 0x25ef2c74  addiu       $t7, $t7, 0x2C74
    ctx->pc = 0x11acbcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 11380));
    // 0x11acc0: 0xc5e30000  lwc1        $f3, 0x0($t7)
    ctx->pc = 0x11acc0u;
    { uint32_t bits = FAST_READ32(0x662C74u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x11acc4: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x11acc4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x11acc8: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x11acc8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x11accc: 0x25ef2c78  addiu       $t7, $t7, 0x2C78
    ctx->pc = 0x11acccu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 11384));
    // 0x11acd0: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x11acd0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x11acd4: 0xc5e20000  lwc1        $f2, 0x0($t7)
    ctx->pc = 0x11acd4u;
    { uint32_t bits = FAST_READ32(0x662C78u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11acd8: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x11acd8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x11acdc: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x11acdcu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x11ace0: 0x25ef2c7c  addiu       $t7, $t7, 0x2C7C
    ctx->pc = 0x11ace0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 11388));
    // 0x11ace4: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x11ace4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x11ace8: 0xc5e30000  lwc1        $f3, 0x0($t7)
    ctx->pc = 0x11ace8u;
    { uint32_t bits = FAST_READ32(0x662C7Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x11acec: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x11acecu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x11acf0: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x11acf0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x11acf4: 0x25ef2c80  addiu       $t7, $t7, 0x2C80
    ctx->pc = 0x11acf4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 11392));
    // 0x11acf8: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x11acf8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x11acfc: 0xc5e20000  lwc1        $f2, 0x0($t7)
    ctx->pc = 0x11acfcu;
    { uint32_t bits = FAST_READ32(0x662C80u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11ad00: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x11ad00u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x11ad04: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x11ad04u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x11ad08: 0x25ef2c84  addiu       $t7, $t7, 0x2C84
    ctx->pc = 0x11ad08u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 11396));
    // 0x11ad0c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x11ad0cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x11ad10: 0xc5e30000  lwc1        $f3, 0x0($t7)
    ctx->pc = 0x11ad10u;
    { uint32_t bits = FAST_READ32(0x662C84u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x11ad14: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x11ad14u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x11ad18: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x11ad18u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x11ad1c: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x11ad1cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x11ad20: 0x25ef2c88  addiu       $t7, $t7, 0x2C88
    ctx->pc = 0x11ad20u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 11400));
    // 0x11ad24: 0xc5e20000  lwc1        $f2, 0x0($t7)
    ctx->pc = 0x11ad24u;
    { uint32_t bits = FAST_READ32(0x662C88u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11ad28: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x11ad28u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x11ad2c: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x11ad2cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x11ad30: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x11ad30u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x11ad34: 0x25ef2c90  addiu       $t7, $t7, 0x2C90
    ctx->pc = 0x11ad34u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 11408));
    // 0x11ad38: 0x46040d80  add.s       $f22, $f1, $f4
    ctx->pc = 0x11ad38u;
    ctx->f[22] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x11ad3c: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x11ad3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x11ad40: 0xc5e10000  lwc1        $f1, 0x0($t7)
    ctx->pc = 0x11ad40u;
    { uint32_t bits = FAST_READ32(0x662C90u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11ad44: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x11ad44u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x11ad48: 0xc047138  jal         func_11C4E0
    ctx->pc = 0x11AD48u;
    SET_GPR_U32(ctx, 31, 0x11AD50u);
    ctx->pc = 0x11AD4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AD48u;
    // 0x11ad4c: 0x4600ad02  mul.s       $f20, $f21, $f0 (Delay Slot)
    ctx->f[20] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11C4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11C4E0u, 0x11AD48u, 0x11AD50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AD50u;
label_11ad50:
    // 0x11ad50: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x11ad50u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x11ad54: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x11ad54u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x11ad58: 0x25ef2c94  addiu       $t7, $t7, 0x2C94
    ctx->pc = 0x11ad58u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 11412));
    // 0x11ad5c: 0xc5e10000  lwc1        $f1, 0x0($t7)
    ctx->pc = 0x11ad5cu;
    { uint32_t bits = FAST_READ32(0x662C94u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11ad60: 0x0  nop
    ctx->pc = 0x11ad60u;
    // NOP
    // 0x11ad64: 0x0  nop
    ctx->pc = 0x11ad64u;
    // NOP
    // 0x11ad68: 0x4616a003  div.s       $f0, $f20, $f22
    ctx->pc = 0x11ad68u;
    { if (ctx->f[22] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[20], ctx->f[22]); }
    // 0x11ad6c: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x11ad6cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x11ad70: 0x25ef2c60  addiu       $t7, $t7, 0x2C60
    ctx->pc = 0x11ad70u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 11360));
    // 0x11ad74: 0x460c0082  mul.s       $f2, $f0, $f12
    ctx->pc = 0x11ad74u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x11ad78: 0x46011001  sub.s       $f0, $f2, $f1
    ctx->pc = 0x11ad78u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x11ad7c: 0x46006000  add.s       $f0, $f12, $f0
    ctx->pc = 0x11ad7cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x11ad80: 0x1000ffb4  b           . + 4 + (-0x4C << 2)
    ctx->pc = 0x11AD80u;
    {
        const bool branch_taken_0x11ad80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AD80u;
        // 0x11ad84: 0x46000000  add.s       $f0, $f0, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ad80) {
            ctx->pc = 0x11AC54u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11ac54;
        }
    }
    ctx->pc = 0x11AD88u;
label_11ad88:
    // 0x11ad88: 0x25ef2c8c  addiu       $t7, $t7, 0x2C8C
    ctx->pc = 0x11ad88u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 11404));
    // 0x11ad8c: 0xc5f40000  lwc1        $f20, 0x0($t7)
    ctx->pc = 0x11ad8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x11ad90: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x11ad90u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x11ad94: 0x460ca041  sub.s       $f1, $f20, $f12
    ctx->pc = 0x11ad94u;
    ctx->f[1] = FPU_SUB_S(ctx->f[20], ctx->f[12]);
    // 0x11ad98: 0x25ef2c98  addiu       $t7, $t7, 0x2C98
    ctx->pc = 0x11ad98u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 11416));
    // 0x11ad9c: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x11ad9cu;
    { uint32_t bits = FAST_READ32(0x662C98u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11ada0: 0x46000d42  mul.s       $f21, $f1, $f0
    ctx->pc = 0x11ada0u;
    ctx->f[21] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x11ada4: 0xc047138  jal         func_11C4E0
    ctx->pc = 0x11ADA4u;
    SET_GPR_U32(ctx, 31, 0x11ADACu);
    ctx->pc = 0x11ADA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11ADA4u;
    // 0x11ada8: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11C4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11C4E0u, 0x11ADA4u, 0x11ADACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11ADACu;
label_11adac:
    // 0x11adac: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x11adacu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x11adb0: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x11adb0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x11adb4: 0x440e0000  mfc1        $t6, $f0
    ctx->pc = 0x11adb4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 14, bits); }
    // 0x11adb8: 0x25ef2c68  addiu       $t7, $t7, 0x2C68
    ctx->pc = 0x11adb8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 11368));
    // 0x11adbc: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x11adbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11adc0: 0x240ff000  addiu       $t7, $zero, -0x1000
    ctx->pc = 0x11adc0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
    // 0x11adc4: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x11adc4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x11adc8: 0x1cf6824  and         $t5, $t6, $t7
    ctx->pc = 0x11adc8u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 14) & GPR_U64(ctx, 15));
    // 0x11adcc: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x11adccu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x11add0: 0x25ef2c6c  addiu       $t7, $t7, 0x2C6C
    ctx->pc = 0x11add0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 11372));
    // 0x11add4: 0xc5e10000  lwc1        $f1, 0x0($t7)
    ctx->pc = 0x11add4u;
    { uint32_t bits = FAST_READ32(0x662C6Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11add8: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x11add8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x11addc: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x11addcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x11ade0: 0x25ef2c70  addiu       $t7, $t7, 0x2C70
    ctx->pc = 0x11ade0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 11376));
    // 0x11ade4: 0xc5e20000  lwc1        $f2, 0x0($t7)
    ctx->pc = 0x11ade4u;
    { uint32_t bits = FAST_READ32(0x662C70u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11ade8: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x11ade8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x11adec: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x11adecu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x11adf0: 0x25ef2c74  addiu       $t7, $t7, 0x2C74
    ctx->pc = 0x11adf0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 11380));
    // 0x11adf4: 0x448d1000  mtc1        $t5, $f2
    ctx->pc = 0x11adf4u;
    { uint32_t bits = GPR_U32(ctx, 13); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x11adf8: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x11adf8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x11adfc: 0x460260c0  add.s       $f3, $f12, $f2
    ctx->pc = 0x11adfcu;
    ctx->f[3] = FPU_ADD_S(ctx->f[12], ctx->f[2]);
    // 0x11ae00: 0x46021102  mul.s       $f4, $f2, $f2
    ctx->pc = 0x11ae00u;
    ctx->f[4] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x11ae04: 0xc5e20000  lwc1        $f2, 0x0($t7)
    ctx->pc = 0x11ae04u;
    { uint32_t bits = FAST_READ32(0x662C74u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11ae08: 0x4604a901  sub.s       $f4, $f21, $f4
    ctx->pc = 0x11ae08u;
    ctx->f[4] = FPU_SUB_S(ctx->f[21], ctx->f[4]);
    // 0x11ae0c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x11ae0cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x11ae10: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x11ae10u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x11ae14: 0x25ef2c78  addiu       $t7, $t7, 0x2C78
    ctx->pc = 0x11ae14u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 11384));
    // 0x11ae18: 0x0  nop
    ctx->pc = 0x11ae18u;
    // NOP
    // 0x11ae1c: 0x0  nop
    ctx->pc = 0x11ae1cu;
    // NOP
    // 0x11ae20: 0x46032103  div.s       $f4, $f4, $f3
    ctx->pc = 0x11ae20u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[4], ctx->f[3]); }
    // 0x11ae24: 0xc5e20000  lwc1        $f2, 0x0($t7)
    ctx->pc = 0x11ae24u;
    { uint32_t bits = FAST_READ32(0x662C78u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11ae28: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x11ae28u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x11ae2c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x11ae2cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x11ae30: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x11ae30u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x11ae34: 0x25ef2c7c  addiu       $t7, $t7, 0x2C7C
    ctx->pc = 0x11ae34u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 11388));
    // 0x11ae38: 0xc5e20000  lwc1        $f2, 0x0($t7)
    ctx->pc = 0x11ae38u;
    { uint32_t bits = FAST_READ32(0x662C7Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11ae3c: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x11ae3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x11ae40: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x11ae40u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x11ae44: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x11ae44u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x11ae48: 0x25ef2c80  addiu       $t7, $t7, 0x2C80
    ctx->pc = 0x11ae48u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 11392));
    // 0x11ae4c: 0xc5e20000  lwc1        $f2, 0x0($t7)
    ctx->pc = 0x11ae4cu;
    { uint32_t bits = FAST_READ32(0x662C80u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11ae50: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x11ae50u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x11ae54: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x11ae54u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x11ae58: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x11ae58u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x11ae5c: 0x25ef2c84  addiu       $t7, $t7, 0x2C84
    ctx->pc = 0x11ae5cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 11396));
    // 0x11ae60: 0xc5e30000  lwc1        $f3, 0x0($t7)
    ctx->pc = 0x11ae60u;
    { uint32_t bits = FAST_READ32(0x662C84u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x11ae64: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x11ae64u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x11ae68: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x11ae68u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x11ae6c: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x11ae6cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x11ae70: 0x25ef2c88  addiu       $t7, $t7, 0x2C88
    ctx->pc = 0x11ae70u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 11400));
    // 0x11ae74: 0xc5e20000  lwc1        $f2, 0x0($t7)
    ctx->pc = 0x11ae74u;
    { uint32_t bits = FAST_READ32(0x662C88u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11ae78: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x11ae78u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x11ae7c: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x11ae7cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x11ae80: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x11ae80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x11ae84: 0x25ef2c90  addiu       $t7, $t7, 0x2C90
    ctx->pc = 0x11ae84u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 11408));
    // 0x11ae88: 0x46140d80  add.s       $f22, $f1, $f20
    ctx->pc = 0x11ae88u;
    ctx->f[22] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
    // 0x11ae8c: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x11ae8cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x11ae90: 0xc5e10000  lwc1        $f1, 0x0($t7)
    ctx->pc = 0x11ae90u;
    { uint32_t bits = FAST_READ32(0x662C90u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11ae94: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x11ae94u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x11ae98: 0x4600ad02  mul.s       $f20, $f21, $f0
    ctx->pc = 0x11ae98u;
    ctx->f[20] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x11ae9c: 0x0  nop
    ctx->pc = 0x11ae9cu;
    // NOP
    // 0x11aea0: 0x0  nop
    ctx->pc = 0x11aea0u;
    // NOP
    // 0x11aea4: 0x4616a003  div.s       $f0, $f20, $f22
    ctx->pc = 0x11aea4u;
    { if (ctx->f[22] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[20], ctx->f[22]); }
    // 0x11aea8: 0x460c0042  mul.s       $f1, $f0, $f12
    ctx->pc = 0x11aea8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x11aeac: 0x46040800  add.s       $f0, $f1, $f4
    ctx->pc = 0x11aeacu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x11aeb0: 0x448d0800  mtc1        $t5, $f1
    ctx->pc = 0x11aeb0u;
    { uint32_t bits = GPR_U32(ctx, 13); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11aeb4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x11aeb4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x11aeb8: 0x1000ff0e  b           . + 4 + (-0xF2 << 2)
    ctx->pc = 0x11AEB8u;
    {
        const bool branch_taken_0x11aeb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AEB8u;
        // 0x11aebc: 0x46000000  add.s       $f0, $f0, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11aeb8) {
            ctx->pc = 0x11AAF4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11aaf4;
        }
    }
    ctx->pc = 0x11AEC0u;
}
