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

// Function: sub_0022EB08
// Address: 0x22eb08 - 0x22eba0
void sub_0022EB08_0x22eb08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022EB08_0x22eb08");
#endif
    { static uint32_t n=0; uint32_t a0=GPR_U32(ctx,4), a1=GPR_U32(ctx,5); if (++n<=200) fprintf(stderr,"[probe err22eb08] %.80s | %.80s ra=0x%x\n", a0? (const char*)(rdram+(a0&0x1ffffffu)) : "", (a1>0x100000u&&a1<0x2000000u)? (const char*)(rdram+(a1&0x1ffffffu)) : "", GPR_U32(ctx,31)); }

    switch (ctx->pc) {
        case 0x22eb08u: goto label_22eb08;
        case 0x22eb0cu: goto label_22eb0c;
        case 0x22eb10u: goto label_22eb10;
        case 0x22eb14u: goto label_22eb14;
        case 0x22eb18u: goto label_22eb18;
        case 0x22eb1cu: goto label_22eb1c;
        case 0x22eb20u: goto label_22eb20;
        case 0x22eb24u: goto label_22eb24;
        case 0x22eb28u: goto label_22eb28;
        case 0x22eb2cu: goto label_22eb2c;
        case 0x22eb30u: goto label_22eb30;
        case 0x22eb34u: goto label_22eb34;
        case 0x22eb38u: goto label_22eb38;
        case 0x22eb3cu: goto label_22eb3c;
        case 0x22eb40u: goto label_22eb40;
        case 0x22eb44u: goto label_22eb44;
        case 0x22eb48u: goto label_22eb48;
        case 0x22eb4cu: goto label_22eb4c;
        case 0x22eb50u: goto label_22eb50;
        case 0x22eb54u: goto label_22eb54;
        case 0x22eb58u: goto label_22eb58;
        case 0x22eb5cu: goto label_22eb5c;
        case 0x22eb60u: goto label_22eb60;
        case 0x22eb64u: goto label_22eb64;
        case 0x22eb68u: goto label_22eb68;
        case 0x22eb6cu: goto label_22eb6c;
        case 0x22eb70u: goto label_22eb70;
        case 0x22eb74u: goto label_22eb74;
        case 0x22eb78u: goto label_22eb78;
        case 0x22eb7cu: goto label_22eb7c;
        case 0x22eb80u: goto label_22eb80;
        case 0x22eb84u: goto label_22eb84;
        case 0x22eb88u: goto label_22eb88;
        case 0x22eb8cu: goto label_22eb8c;
        case 0x22eb90u: goto label_22eb90;
        case 0x22eb94u: goto label_22eb94;
        case 0x22eb98u: goto label_22eb98;
        case 0x22eb9cu: goto label_22eb9c;
        default: break;
    }

    ctx->pc = 0x22eb08u;

label_22eb08:
    // 0x22eb08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x22eb08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_22eb0c:
    // 0x22eb0c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x22eb0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_22eb10:
    // 0x22eb10: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x22eb10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_22eb14:
    // 0x22eb14: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22eb14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_22eb18:
    // 0x22eb18: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_22eb1c:
    if (ctx->pc == 0x22EB1Cu) {
        ctx->pc = 0x22EB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EB18u;
        // 0x22eb1c: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EB20u;
        goto label_22eb20;
    }
    ctx->pc = 0x22EB18u;
    {
        const bool branch_taken_0x22eb18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x22EB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EB18u;
        // 0x22eb1c: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22eb18) {
            ctx->pc = 0x22EB28u;
            goto label_22eb28;
        }
    }
    ctx->pc = 0x22EB20u;
label_22eb20:
    // 0x22eb20: 0x16200009  bnez        $s1, . + 4 + (0x9 << 2)
label_22eb24:
    if (ctx->pc == 0x22EB24u) {
        ctx->pc = 0x22EB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EB20u;
        // 0x22eb24: 0x3c02004c  lui         $v0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EB28u;
        goto label_22eb28;
    }
    ctx->pc = 0x22EB20u;
    {
        const bool branch_taken_0x22eb20 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x22EB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EB20u;
        // 0x22eb24: 0x3c02004c  lui         $v0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22eb20) {
            ctx->pc = 0x22EB48u;
            goto label_22eb48;
        }
    }
    ctx->pc = 0x22EB28u;
label_22eb28:
    // 0x22eb28: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x22eb28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_22eb2c:
    // 0x22eb2c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22eb2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_22eb30:
    // 0x22eb30: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x22eb30u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_22eb34:
    // 0x22eb34: 0x2484a2a8  addiu       $a0, $a0, -0x5D58
    ctx->pc = 0x22eb34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943400));
label_22eb38:
    // 0x22eb38: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x22eb38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_22eb3c:
    // 0x22eb3c: 0x8094bf4  j           func_252FD0
label_22eb40:
    if (ctx->pc == 0x22EB40u) {
        ctx->pc = 0x22EB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EB3Cu;
        // 0x22eb40: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EB44u;
        goto label_22eb44;
    }
    ctx->pc = 0x22EB3Cu;
    ctx->pc = 0x22EB40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22EB3Cu;
    // 0x22eb40: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x252FD0u;
    sub_00252FD0_0x252fd0(rdram, ctx, runtime); return;
    ctx->pc = 0x22EB44u;
label_22eb44:
    // 0x22eb44: 0x0  nop
    ctx->pc = 0x22eb44u;
    // NOP
label_22eb48:
    // 0x22eb48: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x22eb48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22eb4c:
    // 0x22eb4c: 0x2450c370  addiu       $s0, $v0, -0x3C90
    ctx->pc = 0x22eb4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951792));
label_22eb50:
    // 0x22eb50: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x22eb50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_22eb54:
    // 0x22eb54: 0xc04a040  jal         func_128100
label_22eb58:
    if (ctx->pc == 0x22EB58u) {
        ctx->pc = 0x22EB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EB54u;
        // 0x22eb58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EB5Cu;
        goto label_22eb5c;
    }
    ctx->pc = 0x22EB54u;
    SET_GPR_U32(ctx, 31, 0x22EB5Cu);
    ctx->pc = 0x22EB58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22EB54u;
    // 0x22eb58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128100u, 0x22EB54u, 0x22EB5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EB5Cu;
label_22eb5c:
    // 0x22eb5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22eb5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22eb60:
    // 0x22eb60: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x22eb60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22eb64:
    // 0x22eb64: 0xc049f66  jal         func_127D98
label_22eb68:
    if (ctx->pc == 0x22EB68u) {
        ctx->pc = 0x22EB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EB64u;
        // 0x22eb68: 0x240600ff  addiu       $a2, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EB6Cu;
        goto label_22eb6c;
    }
    ctx->pc = 0x22EB64u;
    SET_GPR_U32(ctx, 31, 0x22EB6Cu);
    ctx->pc = 0x22EB68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22EB64u;
    // 0x22eb68: 0x240600ff  addiu       $a2, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127D98u, 0x22EB64u, 0x22EB6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EB6Cu;
label_22eb6c:
    // 0x22eb6c: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x22eb6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
label_22eb70:
    // 0x22eb70: 0x8c63c368  lw          $v1, -0x3C98($v1)
    ctx->pc = 0x22eb70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294951784)));
label_22eb74:
    // 0x22eb74: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_22eb78:
    if (ctx->pc == 0x22EB78u) {
        ctx->pc = 0x22EB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EB74u;
        // 0x22eb78: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EB7Cu;
        goto label_22eb7c;
    }
    ctx->pc = 0x22EB74u;
    {
        const bool branch_taken_0x22eb74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22EB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EB74u;
        // 0x22eb78: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22eb74) {
            ctx->pc = 0x22EB88u;
            goto label_22eb88;
        }
    }
    ctx->pc = 0x22EB7Cu;
label_22eb7c:
    // 0x22eb7c: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x22eb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
label_22eb80:
    // 0x22eb80: 0x60f809  jalr        $v1
label_22eb84:
    if (ctx->pc == 0x22EB84u) {
        ctx->pc = 0x22EB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EB80u;
        // 0x22eb84: 0x8c44c36c  lw          $a0, -0x3C94($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294951788)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EB88u;
        goto label_22eb88;
    }
    ctx->pc = 0x22EB80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x22EB88u);
        ctx->pc = 0x22EB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EB80u;
        // 0x22eb84: 0x8c44c36c  lw          $a0, -0x3C94($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294951788)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22EB80u, 0x22EB88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22EB88u;
label_22eb88:
    // 0x22eb88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22eb88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22eb8c:
    // 0x22eb8c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22eb8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_22eb90:
    // 0x22eb90: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x22eb90u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_22eb94:
    // 0x22eb94: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x22eb94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_22eb98:
    // 0x22eb98: 0x8094bf4  j           func_252FD0
label_22eb9c:
    if (ctx->pc == 0x22EB9Cu) {
        ctx->pc = 0x22EB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EB98u;
        // 0x22eb9c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22EBA0u;
        goto label_fallthrough_0x22eb98;
    }
    ctx->pc = 0x22EB98u;
    ctx->pc = 0x22EB9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22EB98u;
    // 0x22eb9c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x252FD0u;
    sub_00252FD0_0x252fd0(rdram, ctx, runtime); return;
label_fallthrough_0x22eb98:
    ctx->pc = 0x22EBA0u;
}
