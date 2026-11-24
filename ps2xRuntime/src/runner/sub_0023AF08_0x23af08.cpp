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

// Function: sub_0023AF08
// Address: 0x23af08 - 0x23af84
void sub_0023AF08_0x23af08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023AF08_0x23af08");
#endif

    switch (ctx->pc) {
        case 0x23af78u: goto label_23af78;
        default: break;
    }

    ctx->pc = 0x23af08u;

    // 0x23af08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23af08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23af0c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x23af0cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23af10: 0x14e00007  bnez        $a3, . + 4 + (0x7 << 2)
    ctx->pc = 0x23AF10u;
    {
        const bool branch_taken_0x23af10 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x23AF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AF10u;
        // 0x23af14: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23af10) {
            ctx->pc = 0x23AF30u;
            goto label_23af30;
        }
    }
    ctx->pc = 0x23AF18u;
    // 0x23af18: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x23af18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x23af1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23af1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23af20: 0x2484b398  addiu       $a0, $a0, -0x4C68
    ctx->pc = 0x23af20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947736));
    // 0x23af24: 0x808baa4  j           func_22EA90
    ctx->pc = 0x23AF24u;
    ctx->pc = 0x23AF28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23AF24u;
    // 0x23af28: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EA90u;
    sub_0022EA90_0x22ea90(rdram, ctx, runtime); return;
    ctx->pc = 0x23AF2Cu;
    // 0x23af2c: 0x0  nop
    ctx->pc = 0x23af2cu;
    // NOP
label_23af30:
    // 0x23af30: 0x84e6003c  lh          $a2, 0x3C($a3)
    ctx->pc = 0x23af30u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 60)));
    // 0x23af34: 0x3c013f59  lui         $at, 0x3F59
    ctx->pc = 0x23af34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16217 << 16));
    // 0x23af38: 0x34219999  ori         $at, $at, 0x9999
    ctx->pc = 0x23af38u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39321);
    // 0x23af3c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x23af3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x23af40: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x23af40u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23af44: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x23af44u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x23af48: 0x632c0  sll         $a2, $a2, 11
    ctx->pc = 0x23af48u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 11));
    // 0x23af4c: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x23af4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x23af50: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x23af50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23af54: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x23af54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x23af58: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x23af58u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x23af5c: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x23af5cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x23af60: 0x22c00  sll         $a1, $v0, 16
    ctx->pc = 0x23af60u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x23af64: 0xa4e2003e  sh          $v0, 0x3E($a3)
    ctx->pc = 0x23af64u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 62), (uint16_t)GPR_U32(ctx, 2));
    // 0x23af68: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x23AF68u;
    {
        const bool branch_taken_0x23af68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23AF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AF68u;
        // 0x23af6c: 0x52943  sra         $a1, $a1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23af68) {
            ctx->pc = 0x23AF78u;
            goto label_23af78;
        }
    }
    ctx->pc = 0x23AF70u;
    // 0x23af70: 0xc08e0c6  jal         func_238318
    ctx->pc = 0x23AF70u;
    SET_GPR_U32(ctx, 31, 0x23AF78u);
    ctx->pc = 0x238318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238318u, 0x23AF70u, 0x23AF78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23AF78u;
label_23af78:
    // 0x23af78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23af78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23af7c: 0x3e00008  jr          $ra
    ctx->pc = 0x23AF7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23AF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AF7Cu;
        // 0x23af80: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23AF7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23AF84u;
}
