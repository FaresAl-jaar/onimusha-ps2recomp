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

// Function: sub_00193B00
// Address: 0x193b00 - 0x193ba4
void sub_00193B00_0x193b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00193B00_0x193b00");
#endif

    switch (ctx->pc) {
        case 0x193b48u: goto label_193b48;
        case 0x193b80u: goto label_193b80;
        default: break;
    }

    ctx->pc = 0x193b00u;

    // 0x193b00: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x193b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x193b04: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x193b04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x193b08: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x193b08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x193b0c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x193b0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193b10: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x193b10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x193b14: 0x3c060084  lui         $a2, 0x84
    ctx->pc = 0x193b14u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)132 << 16));
    // 0x193b18: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x193b18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x193b1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x193b1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x193b20: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x193b20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x193b24: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x193b24u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193b28: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x193b28u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x193b2c: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x193b2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193b30: 0x460c0502  mul.s       $f20, $f0, $f12
    ctx->pc = 0x193b30u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x193b34: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x193b34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193b38: 0x4600a024  .word       0x4600A024                   # cvt.w.s     $f0, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x193b38u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x193b3c: 0x44110000  mfc1        $s1, $f0
    ctx->pc = 0x193b3cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
    // 0x193b40: 0xc064f5c  jal         func_193D70
    ctx->pc = 0x193B40u;
    SET_GPR_U32(ctx, 31, 0x193B48u);
    ctx->pc = 0x193B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193B40u;
    // 0x193b44: 0x24c63100  addiu       $a2, $a2, 0x3100 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193D70u, 0x193B40u, 0x193B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193B48u;
label_193b48:
    // 0x193b48: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x193b48u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x193b4c: 0x1210c0  sll         $v0, $s2, 3
    ctx->pc = 0x193b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x193b50: 0x2223021  addu        $a2, $s1, $v0
    ctx->pc = 0x193b50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x193b54: 0x3c030084  lui         $v1, 0x84
    ctx->pc = 0x193b54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)132 << 16));
    // 0x193b58: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x193b58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x193b5c: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x193b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x193b60: 0x22900  sll         $a1, $v0, 4
    ctx->pc = 0x193b60u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x193b64: 0x24633100  addiu       $v1, $v1, 0x3100
    ctx->pc = 0x193b64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12544));
    // 0x193b68: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x193b68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x193b6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x193b6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193b70: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x193b70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x193b74: 0x623021  addu        $a2, $v1, $v0
    ctx->pc = 0x193b74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x193b78: 0xc0414c0  jal         func_105300
    ctx->pc = 0x193B78u;
    SET_GPR_U32(ctx, 31, 0x193B80u);
    ctx->pc = 0x193B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193B78u;
    // 0x193b7c: 0x4600a301  sub.s       $f12, $f20, $f0 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105300u, 0x193B78u, 0x193B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193B80u;
label_193b80:
    // 0x193b80: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x193b80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x193b84: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x193b84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x193b88: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x193b88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x193b8c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x193b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x193b90: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x193b90u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x193b94: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x193b94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x193b98: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x193b98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x193b9c: 0x3e00008  jr          $ra
    ctx->pc = 0x193B9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x193BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193B9Cu;
        // 0x193ba0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193B9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x193BA4u;
}
