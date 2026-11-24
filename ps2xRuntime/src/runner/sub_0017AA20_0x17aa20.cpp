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

// Function: sub_0017AA20
// Address: 0x17aa20 - 0x17abe0
void sub_0017AA20_0x17aa20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017AA20_0x17aa20");
#endif

    switch (ctx->pc) {
        case 0x17aaa0u: goto label_17aaa0;
        case 0x17aaccu: goto label_17aacc;
        case 0x17aad8u: goto label_17aad8;
        case 0x17ab00u: goto label_17ab00;
        case 0x17ab44u: goto label_17ab44;
        case 0x17ab84u: goto label_17ab84;
        default: break;
    }

    ctx->pc = 0x17aa20u;

    // 0x17aa20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17aa20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17aa24: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x17aa24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x17aa28: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17aa28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17aa2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17aa2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17aa30: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17aa30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17aa34: 0x8c842cd0  lw          $a0, 0x2CD0($a0)
    ctx->pc = 0x17aa34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11472)));
    // 0x17aa38: 0x1083004f  beq         $a0, $v1, . + 4 + (0x4F << 2)
    ctx->pc = 0x17AA38u;
    {
        const bool branch_taken_0x17aa38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x17AA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AA38u;
        // 0x17aa3c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17aa38) {
            ctx->pc = 0x17AB78u;
            goto label_17ab78;
        }
    }
    ctx->pc = 0x17AA40u;
    // 0x17aa40: 0x1082004b  beq         $a0, $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x17AA40u;
    {
        const bool branch_taken_0x17aa40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x17aa40) {
            ctx->pc = 0x17AB70u;
            goto label_17ab70;
        }
    }
    ctx->pc = 0x17AA48u;
    // 0x17aa48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17aa48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17aa4c: 0x1082002a  beq         $a0, $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x17AA4Cu;
    {
        const bool branch_taken_0x17aa4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x17aa4c) {
            ctx->pc = 0x17AAF8u;
            goto label_17aaf8;
        }
    }
    ctx->pc = 0x17AA54u;
    // 0x17aa54: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17AA54u;
    {
        const bool branch_taken_0x17aa54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x17aa54) {
            ctx->pc = 0x17AA68u;
            goto label_17aa68;
        }
    }
    ctx->pc = 0x17AA5Cu;
    // 0x17aa5c: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x17AA5Cu;
    {
        const bool branch_taken_0x17aa5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17aa5c) {
            ctx->pc = 0x17ABC8u;
            goto label_17abc8;
        }
    }
    ctx->pc = 0x17AA64u;
    // 0x17aa64: 0x0  nop
    ctx->pc = 0x17aa64u;
    // NOP
label_17aa68:
    // 0x17aa68: 0x8e032c9c  lw          $v1, 0x2C9C($s0)
    ctx->pc = 0x17aa68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11420)));
    // 0x17aa6c: 0x2c614001  sltiu       $at, $v1, 0x4001
    ctx->pc = 0x17aa6cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)16385) ? 1 : 0);
    // 0x17aa70: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x17AA70u;
    {
        const bool branch_taken_0x17aa70 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x17aa70) {
            ctx->pc = 0x17AA88u;
            goto label_17aa88;
        }
    }
    ctx->pc = 0x17AA78u;
    // 0x17aa78: 0xae032cdc  sw          $v1, 0x2CDC($s0)
    ctx->pc = 0x17aa78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11484), GPR_U32(ctx, 3));
    // 0x17aa7c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x17AA7Cu;
    {
        const bool branch_taken_0x17aa7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17AA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AA7Cu;
        // 0x17aa80: 0xae022cd8  sw          $v0, 0x2CD8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 11480), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17aa7c) {
            ctx->pc = 0x17AAA0u;
            goto label_17aaa0;
        }
    }
    ctx->pc = 0x17AA84u;
    // 0x17aa84: 0x0  nop
    ctx->pc = 0x17aa84u;
    // NOP
label_17aa88:
    // 0x17aa88: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x17aa88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x17aa8c: 0xae022cdc  sw          $v0, 0x2CDC($s0)
    ctx->pc = 0x17aa8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11484), GPR_U32(ctx, 2));
    // 0x17aa90: 0x8e022c9c  lw          $v0, 0x2C9C($s0)
    ctx->pc = 0x17aa90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11420)));
    // 0x17aa94: 0x2442c000  addiu       $v0, $v0, -0x4000
    ctx->pc = 0x17aa94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950912));
    // 0x17aa98: 0xae022c9c  sw          $v0, 0x2C9C($s0)
    ctx->pc = 0x17aa98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11420), GPR_U32(ctx, 2));
    // 0x17aa9c: 0xae002cd8  sw          $zero, 0x2CD8($s0)
    ctx->pc = 0x17aa9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11480), GPR_U32(ctx, 0));
label_17aaa0:
    // 0x17aaa0: 0x8e022ca8  lw          $v0, 0x2CA8($s0)
    ctx->pc = 0x17aaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11432)));
    // 0x17aaa4: 0xae020900  sw          $v0, 0x900($s0)
    ctx->pc = 0x17aaa4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2304), GPR_U32(ctx, 2));
    // 0x17aaa8: 0x8e022ca0  lw          $v0, 0x2CA0($s0)
    ctx->pc = 0x17aaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11424)));
    // 0x17aaac: 0xae020904  sw          $v0, 0x904($s0)
    ctx->pc = 0x17aaacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2308), GPR_U32(ctx, 2));
    // 0x17aab0: 0x8e022cdc  lw          $v0, 0x2CDC($s0)
    ctx->pc = 0x17aab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11484)));
    // 0x17aab4: 0xae020908  sw          $v0, 0x908($s0)
    ctx->pc = 0x17aab4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2312), GPR_U32(ctx, 2));
    // 0x17aab8: 0xae00090c  sw          $zero, 0x90C($s0)
    ctx->pc = 0x17aab8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2316), GPR_U32(ctx, 0));
    // 0x17aabc: 0x8e042ca8  lw          $a0, 0x2CA8($s0)
    ctx->pc = 0x17aabcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11432)));
    // 0x17aac0: 0x8e022cdc  lw          $v0, 0x2CDC($s0)
    ctx->pc = 0x17aac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11484)));
    // 0x17aac4: 0xc043a36  jal         func_10E8D8
    ctx->pc = 0x17AAC4u;
    SET_GPR_U32(ctx, 31, 0x17AACCu);
    ctx->pc = 0x17AAC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17AAC4u;
    // 0x17aac8: 0x822821  addu        $a1, $a0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E8D8u, 0x17AAC4u, 0x17AACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17AACCu;
label_17aacc:
    // 0x17aacc: 0x26040900  addiu       $a0, $s0, 0x900
    ctx->pc = 0x17aaccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2304));
    // 0x17aad0: 0xc0438e8  jal         func_10E3A0
    ctx->pc = 0x17AAD0u;
    SET_GPR_U32(ctx, 31, 0x17AAD8u);
    ctx->pc = 0x17AAD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17AAD0u;
    // 0x17aad4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E3A0u, 0x17AAD0u, 0x17AAD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17AAD8u;
label_17aad8:
    // 0x17aad8: 0xae022cd4  sw          $v0, 0x2CD4($s0)
    ctx->pc = 0x17aad8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11476), GPR_U32(ctx, 2));
    // 0x17aadc: 0x8e022cd4  lw          $v0, 0x2CD4($s0)
    ctx->pc = 0x17aadcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11476)));
    // 0x17aae0: 0x1040ffef  beqz        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x17AAE0u;
    {
        const bool branch_taken_0x17aae0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17aae0) {
            ctx->pc = 0x17AAA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17aaa0;
        }
    }
    ctx->pc = 0x17AAE8u;
    // 0x17aae8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17aae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17aaec: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x17AAECu;
    {
        const bool branch_taken_0x17aaec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17AAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AAECu;
        // 0x17aaf0: 0xae022cd0  sw          $v0, 0x2CD0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 11472), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17aaec) {
            ctx->pc = 0x17ABC8u;
            goto label_17abc8;
        }
    }
    ctx->pc = 0x17AAF4u;
    // 0x17aaf4: 0x0  nop
    ctx->pc = 0x17aaf4u;
    // NOP
label_17aaf8:
    // 0x17aaf8: 0xc0438e0  jal         func_10E380
    ctx->pc = 0x17AAF8u;
    SET_GPR_U32(ctx, 31, 0x17AB00u);
    ctx->pc = 0x17AAFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17AAF8u;
    // 0x17aafc: 0x8e042cd4  lw          $a0, 0x2CD4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11476)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E380u, 0x17AAF8u, 0x17AB00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17AB00u;
label_17ab00:
    // 0x17ab00: 0x4400003  bltz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17AB00u;
    {
        const bool branch_taken_0x17ab00 = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x17ab00) {
            ctx->pc = 0x17AB10u;
            goto label_17ab10;
        }
    }
    ctx->pc = 0x17AB08u;
    // 0x17ab08: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x17AB08u;
    {
        const bool branch_taken_0x17ab08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17AB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AB08u;
        // 0x17ab0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ab08) {
            ctx->pc = 0x17ABD0u;
            goto label_17abd0;
        }
    }
    ctx->pc = 0x17AB10u;
label_17ab10:
    // 0x17ab10: 0x8e022ca0  lw          $v0, 0x2CA0($s0)
    ctx->pc = 0x17ab10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11424)));
    // 0x17ab14: 0x3c010083  lui         $at, 0x83
    ctx->pc = 0x17ab14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)131 << 16));
    // 0x17ab18: 0x3c050083  lui         $a1, 0x83
    ctx->pc = 0x17ab18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)131 << 16));
    // 0x17ab1c: 0x3c040011  lui         $a0, 0x11
    ctx->pc = 0x17ab1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17 << 16));
    // 0x17ab20: 0x24a5cec0  addiu       $a1, $a1, -0x3140
    ctx->pc = 0x17ab20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954688));
    // 0x17ab24: 0xac22cec8  sw          $v0, -0x3138($at)
    ctx->pc = 0x17ab24u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x82CEC8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x82CEC8u, _value); } while (0);
    // 0x17ab28: 0x8e022ca4  lw          $v0, 0x2CA4($s0)
    ctx->pc = 0x17ab28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11428)));
    // 0x17ab2c: 0x3c010083  lui         $at, 0x83
    ctx->pc = 0x17ab2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)131 << 16));
    // 0x17ab30: 0xac22cecc  sw          $v0, -0x3134($at)
    ctx->pc = 0x17ab30u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x82CECCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x82CECCu, _value); } while (0);
    // 0x17ab34: 0x8e022cdc  lw          $v0, 0x2CDC($s0)
    ctx->pc = 0x17ab34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11484)));
    // 0x17ab38: 0x3c010083  lui         $at, 0x83
    ctx->pc = 0x17ab38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)131 << 16));
    // 0x17ab3c: 0xc054738  jal         func_151CE0
    ctx->pc = 0x17AB3Cu;
    SET_GPR_U32(ctx, 31, 0x17AB44u);
    ctx->pc = 0x17AB40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17AB3Cu;
    // 0x17ab40: 0xac22ced0  sw          $v0, -0x3130($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954704), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151CE0u, 0x17AB3Cu, 0x17AB44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17AB44u;
label_17ab44:
    // 0x17ab44: 0xae022cb0  sw          $v0, 0x2CB0($s0)
    ctx->pc = 0x17ab44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11440), GPR_U32(ctx, 2));
    { static uint32_t n=0; ++n; uint32_t r=GPR_U32(ctx,2); if (n<=12||(n%200)==0) fprintf(stderr,"[sndreply] n=%u ptr=0x%x w0=0x%x w1=0x%x w2=0x%x w3=0x%x\n",n,r,r?READ32(r):0,r?READ32(r+4):0,r?READ32(r+8):0,r?READ32(r+12):0); }
    // 0x17ab48: 0x8e022cb0  lw          $v0, 0x2CB0($s0)
    ctx->pc = 0x17ab48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11440)));
    // 0x17ab4c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x17ab4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17ab50: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17AB50u;
    {
        const bool branch_taken_0x17ab50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17ab50) {
            ctx->pc = 0x17AB60u;
            goto label_17ab60;
        }
    }
    ctx->pc = 0x17AB58u;
    // 0x17ab58: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x17AB58u;
    {
        const bool branch_taken_0x17ab58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17AB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AB58u;
        // 0x17ab5c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ab58) {
            ctx->pc = 0x17ABD0u;
            goto label_17abd0;
        }
    }
    ctx->pc = 0x17AB60u;
label_17ab60:
    // 0x17ab60: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x17ab60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17ab64: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x17AB64u;
    {
        const bool branch_taken_0x17ab64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17AB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AB64u;
        // 0x17ab68: 0xae022cd0  sw          $v0, 0x2CD0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 11472), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ab64) {
            ctx->pc = 0x17ABC8u;
            goto label_17abc8;
        }
    }
    ctx->pc = 0x17AB6Cu;
    // 0x17ab6c: 0x0  nop
    ctx->pc = 0x17ab6cu;
    // NOP
label_17ab70:
    // 0x17ab70: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x17AB70u;
    {
        const bool branch_taken_0x17ab70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17AB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AB70u;
        // 0x17ab74: 0xae032cd0  sw          $v1, 0x2CD0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 11472), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ab70) {
            ctx->pc = 0x17ABC8u;
            goto label_17abc8;
        }
    }
    ctx->pc = 0x17AB78u;
label_17ab78:
    // 0x17ab78: 0x3c040011  lui         $a0, 0x11
    ctx->pc = 0x17ab78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17 << 16));
    // 0x17ab7c: 0xc054930  jal         func_1524C0
    ctx->pc = 0x17AB7Cu;
    SET_GPR_U32(ctx, 31, 0x17AB84u);
    ctx->pc = 0x17AB80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17AB7Cu;
    // 0x17ab80: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1524C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1524C0u, 0x17AB7Cu, 0x17AB84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17AB84u;
label_17ab84:
    // 0x17ab84: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17AB84u;
    {
        const bool branch_taken_0x17ab84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17ab84) {
            ctx->pc = 0x17AB98u;
            goto label_17ab98;
        }
    }
    ctx->pc = 0x17AB8Cu;
    // 0x17ab8c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x17AB8Cu;
    {
        const bool branch_taken_0x17ab8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17AB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AB8Cu;
        // 0x17ab90: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ab8c) {
            ctx->pc = 0x17ABD0u;
            goto label_17abd0;
        }
    }
    ctx->pc = 0x17AB94u;
    // 0x17ab94: 0x0  nop
    ctx->pc = 0x17ab94u;
    // NOP
label_17ab98:
    // 0x17ab98: 0x8e032ca8  lw          $v1, 0x2CA8($s0)
    ctx->pc = 0x17ab98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11432)));
    // 0x17ab9c: 0x8e022cdc  lw          $v0, 0x2CDC($s0)
    ctx->pc = 0x17ab9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11484)));
    // 0x17aba0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x17aba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x17aba4: 0xae022ca8  sw          $v0, 0x2CA8($s0)
    ctx->pc = 0x17aba4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11432), GPR_U32(ctx, 2));
    // 0x17aba8: 0x8e032ca4  lw          $v1, 0x2CA4($s0)
    ctx->pc = 0x17aba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11428)));
    // 0x17abac: 0x8e022cdc  lw          $v0, 0x2CDC($s0)
    ctx->pc = 0x17abacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11484)));
    // 0x17abb0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x17abb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x17abb4: 0xae022ca4  sw          $v0, 0x2CA4($s0)
    ctx->pc = 0x17abb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11428), GPR_U32(ctx, 2));
    // 0x17abb8: 0xae002cd0  sw          $zero, 0x2CD0($s0)
    ctx->pc = 0x17abb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11472), GPR_U32(ctx, 0));
    // 0x17abbc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x17ABBCu;
    {
        const bool branch_taken_0x17abbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17ABC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17ABBCu;
        // 0x17abc0: 0x8e022cd8  lw          $v0, 0x2CD8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11480)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17abbc) {
            ctx->pc = 0x17ABD0u;
            goto label_17abd0;
        }
    }
    ctx->pc = 0x17ABC4u;
    // 0x17abc4: 0x0  nop
    ctx->pc = 0x17abc4u;
    // NOP
label_17abc8:
    // 0x17abc8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x17abc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17abcc: 0x0  nop
    ctx->pc = 0x17abccu;
    // NOP
label_17abd0:
    // 0x17abd0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17abd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17abd4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17abd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17abd8: 0x3e00008  jr          $ra
    ctx->pc = 0x17ABD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17ABDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17ABD8u;
        // 0x17abdc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17ABD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17ABE0u;
}
