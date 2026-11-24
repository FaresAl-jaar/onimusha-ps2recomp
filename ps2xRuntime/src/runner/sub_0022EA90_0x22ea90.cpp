#include <cstdio>
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

// Function: sub_0022EA90
// Address: 0x22ea90 - 0x22eb04
void sub_0022EA90_0x22ea90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022EA90_0x22ea90");
#endif
    { static uint32_t n=0; uint32_t a0=GPR_U32(ctx,4); if (++n<=200) fprintf(stderr,"[probe adxerr] %.100s ra=0x%x\n", (a0>0x100000u&&a0<0x2000000u)? (const char*)(rdram+(a0&0x1ffffffu)) : "?", GPR_U32(ctx,31)); }

    switch (ctx->pc) {
        case 0x22ea90u: goto label_22ea90;
        case 0x22ea94u: goto label_22ea94;
        case 0x22ea98u: goto label_22ea98;
        case 0x22ea9cu: goto label_22ea9c;
        case 0x22eaa0u: goto label_22eaa0;
        case 0x22eaa4u: goto label_22eaa4;
        case 0x22eaa8u: goto label_22eaa8;
        case 0x22eaacu: goto label_22eaac;
        case 0x22eab0u: goto label_22eab0;
        case 0x22eab4u: goto label_22eab4;
        case 0x22eab8u: goto label_22eab8;
        case 0x22eabcu: goto label_22eabc;
        case 0x22eac0u: goto label_22eac0;
        case 0x22eac4u: goto label_22eac4;
        case 0x22eac8u: goto label_22eac8;
        case 0x22eaccu: goto label_22eacc;
        case 0x22ead0u: goto label_22ead0;
        case 0x22ead4u: goto label_22ead4;
        case 0x22ead8u: goto label_22ead8;
        case 0x22eadcu: goto label_22eadc;
        case 0x22eae0u: goto label_22eae0;
        case 0x22eae4u: goto label_22eae4;
        case 0x22eae8u: goto label_22eae8;
        case 0x22eaecu: goto label_22eaec;
        case 0x22eaf0u: goto label_22eaf0;
        case 0x22eaf4u: goto label_22eaf4;
        case 0x22eaf8u: goto label_22eaf8;
        case 0x22eafcu: goto label_22eafc;
        case 0x22eb00u: goto label_22eb00;
        default: break;
    }

    ctx->pc = 0x22ea90u;

label_22ea90:
    // 0x22ea90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x22ea90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_22ea94:
    // 0x22ea94: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x22ea94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22ea98:
    // 0x22ea98: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22ea98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_22ea9c:
    // 0x22ea9c: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
label_22eaa0:
    if (ctx->pc == 0x22EAA0u) {
        ctx->pc = 0x22EAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EA9Cu;
        // 0x22eaa0: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EAA4u;
        goto label_22eaa4;
    }
    ctx->pc = 0x22EA9Cu;
    {
        const bool branch_taken_0x22ea9c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x22EAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EA9Cu;
        // 0x22eaa0: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ea9c) {
            ctx->pc = 0x22EAC0u;
            goto label_22eac0;
        }
    }
    ctx->pc = 0x22EAA4u;
label_22eaa4:
    // 0x22eaa4: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x22eaa4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_22eaa8:
    // 0x22eaa8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22eaa8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_22eaac:
    // 0x22eaac: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x22eaacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_22eab0:
    // 0x22eab0: 0x2484a2a8  addiu       $a0, $a0, -0x5D58
    ctx->pc = 0x22eab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943400));
label_22eab4:
    // 0x22eab4: 0x8094bf4  j           func_252FD0
label_22eab8:
    if (ctx->pc == 0x22EAB8u) {
        ctx->pc = 0x22EAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EAB4u;
        // 0x22eab8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EABCu;
        goto label_22eabc;
    }
    ctx->pc = 0x22EAB4u;
    ctx->pc = 0x22EAB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22EAB4u;
    // 0x22eab8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x252FD0u;
    sub_00252FD0_0x252fd0(rdram, ctx, runtime); return;
    ctx->pc = 0x22EABCu;
label_22eabc:
    // 0x22eabc: 0x0  nop
    ctx->pc = 0x22eabcu;
    // NOP
label_22eac0:
    // 0x22eac0: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x22eac0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
label_22eac4:
    // 0x22eac4: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x22eac4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_22eac8:
    // 0x22eac8: 0x2450c370  addiu       $s0, $v0, -0x3C90
    ctx->pc = 0x22eac8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951792));
label_22eacc:
    // 0x22eacc: 0xc04a040  jal         func_128100
label_22ead0:
    if (ctx->pc == 0x22EAD0u) {
        ctx->pc = 0x22EAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EACCu;
        // 0x22ead0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EAD4u;
        goto label_22ead4;
    }
    ctx->pc = 0x22EACCu;
    SET_GPR_U32(ctx, 31, 0x22EAD4u);
    ctx->pc = 0x22EAD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22EACCu;
    // 0x22ead0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128100u, 0x22EACCu, 0x22EAD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EAD4u;
label_22ead4:
    // 0x22ead4: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x22ead4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
label_22ead8:
    // 0x22ead8: 0x8c63c368  lw          $v1, -0x3C98($v1)
    ctx->pc = 0x22ead8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294951784)));
label_22eadc:
    // 0x22eadc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_22eae0:
    if (ctx->pc == 0x22EAE0u) {
        ctx->pc = 0x22EAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EADCu;
        // 0x22eae0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EAE4u;
        goto label_22eae4;
    }
    ctx->pc = 0x22EADCu;
    {
        const bool branch_taken_0x22eadc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22EAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EADCu;
        // 0x22eae0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22eadc) {
            ctx->pc = 0x22EAF0u;
            goto label_22eaf0;
        }
    }
    ctx->pc = 0x22EAE4u;
label_22eae4:
    // 0x22eae4: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x22eae4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
label_22eae8:
    // 0x22eae8: 0x60f809  jalr        $v1
label_22eaec:
    if (ctx->pc == 0x22EAECu) {
        ctx->pc = 0x22EAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EAE8u;
        // 0x22eaec: 0x8c44c36c  lw          $a0, -0x3C94($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294951788)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EAF0u;
        goto label_22eaf0;
    }
    ctx->pc = 0x22EAE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x22EAF0u);
        ctx->pc = 0x22EAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EAE8u;
        // 0x22eaec: 0x8c44c36c  lw          $a0, -0x3C94($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294951788)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22EAE8u, 0x22EAF0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22EAF0u;
label_22eaf0:
    // 0x22eaf0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22eaf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22eaf4:
    // 0x22eaf4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22eaf4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_22eaf8:
    // 0x22eaf8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x22eaf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_22eafc:
    // 0x22eafc: 0x8094bf4  j           func_252FD0
label_22eb00:
    if (ctx->pc == 0x22EB00u) {
        ctx->pc = 0x22EB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EAFCu;
        // 0x22eb00: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EB04u;
        goto label_fallthrough_0x22eafc;
    }
    ctx->pc = 0x22EAFCu;
    ctx->pc = 0x22EB00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22EAFCu;
    // 0x22eb00: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x252FD0u;
    sub_00252FD0_0x252fd0(rdram, ctx, runtime); return;
label_fallthrough_0x22eafc:
    ctx->pc = 0x22EB04u;
}
