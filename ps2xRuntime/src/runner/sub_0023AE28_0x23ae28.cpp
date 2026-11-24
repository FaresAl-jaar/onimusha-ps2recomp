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

// Function: sub_0023AE28
// Address: 0x23ae28 - 0x23aed8
void sub_0023AE28_0x23ae28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023AE28_0x23ae28");
#endif

    switch (ctx->pc) {
        case 0x23aeccu: goto label_23aecc;
        default: break;
    }

    ctx->pc = 0x23ae28u;

    // 0x23ae28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23ae28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23ae2c: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x23ae2cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ae30: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23ae30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23ae34: 0x15200006  bnez        $t1, . + 4 + (0x6 << 2)
    ctx->pc = 0x23AE34u;
    {
        const bool branch_taken_0x23ae34 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x23AE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AE34u;
        // 0x23ae38: 0xa0502d  daddu       $t2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ae34) {
            ctx->pc = 0x23AE50u;
            goto label_23ae50;
        }
    }
    ctx->pc = 0x23AE3Cu;
    // 0x23ae3c: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x23ae3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x23ae40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23ae40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23ae44: 0x2484b368  addiu       $a0, $a0, -0x4C98
    ctx->pc = 0x23ae44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947688));
    // 0x23ae48: 0x808baa4  j           func_22EA90
    ctx->pc = 0x23AE48u;
    ctx->pc = 0x23AE4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23AE48u;
    // 0x23ae4c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EA90u;
    sub_0022EA90_0x22ea90(rdram, ctx, runtime); return;
    ctx->pc = 0x23AE50u;
label_23ae50:
    // 0x23ae50: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x23ae50u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23ae54: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x23ae54u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x23ae58: 0x8527003c  lh          $a3, 0x3C($t1)
    ctx->pc = 0x23ae58u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 60)));
    // 0x23ae5c: 0x8d280008  lw          $t0, 0x8($t1)
    ctx->pc = 0x23ae5cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x23ae60: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x23ae60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ae64: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x23ae64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ae68: 0x632c0  sll         $a2, $a2, 11
    ctx->pc = 0x23ae68u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 11));
    // 0x23ae6c: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x23ae6cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x23ae70: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x23ae70u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x23ae74: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x23ae74u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x23ae78: 0x2465001f  addiu       $a1, $v1, 0x1F
    ctx->pc = 0x23ae78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 31));
    // 0x23ae7c: 0x28620000  slti        $v0, $v1, 0x0
    ctx->pc = 0x23ae7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x23ae80: 0xa2180b  movn        $v1, $a1, $v0
    ctx->pc = 0x23ae80u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 5));
    // 0x23ae84: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x23ae84u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
    // 0x23ae88: 0x6a1818  mult        $v1, $v1, $t2
    ctx->pc = 0x23ae88u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x23ae8c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x23ae8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x23ae90: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x23ae90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23ae94: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x23ae94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x23ae98: 0x244507ff  addiu       $a1, $v0, 0x7FF
    ctx->pc = 0x23ae98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2047));
    // 0x23ae9c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x23ae9cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23aea0: 0x28420000  slti        $v0, $v0, 0x0
    ctx->pc = 0x23aea0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x23aea4: 0xa2180b  movn        $v1, $a1, $v0
    ctx->pc = 0x23aea4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 5));
    // 0x23aea8: 0x31ac3  sra         $v1, $v1, 11
    ctx->pc = 0x23aea8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 11));
    // 0x23aeac: 0x67102a  slt         $v0, $v1, $a3
    ctx->pc = 0x23aeacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x23aeb0: 0x62380b  movn        $a3, $v1, $v0
    ctx->pc = 0x23aeb0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 3));
    // 0x23aeb4: 0x72c00  sll         $a1, $a3, 16
    ctx->pc = 0x23aeb4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x23aeb8: 0xa527003e  sh          $a3, 0x3E($t1)
    ctx->pc = 0x23aeb8u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 62), (uint16_t)GPR_U32(ctx, 7));
    // 0x23aebc: 0x11000003  beqz        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23AEBCu;
    {
        const bool branch_taken_0x23aebc = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x23AEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AEBCu;
        // 0x23aec0: 0x52943  sra         $a1, $a1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23aebc) {
            ctx->pc = 0x23AECCu;
            goto label_23aecc;
        }
    }
    ctx->pc = 0x23AEC4u;
    // 0x23aec4: 0xc08e0c6  jal         func_238318
    ctx->pc = 0x23AEC4u;
    SET_GPR_U32(ctx, 31, 0x23AECCu);
    ctx->pc = 0x238318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238318u, 0x23AEC4u, 0x23AECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23AECCu;
label_23aecc:
    // 0x23aecc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23aeccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23aed0: 0x3e00008  jr          $ra
    ctx->pc = 0x23AED0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23AED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AED0u;
        // 0x23aed4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23AED0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23AED8u;
}
