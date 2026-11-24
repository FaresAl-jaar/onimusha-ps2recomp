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

// Function: sub_00244940
// Address: 0x244940 - 0x2449fc
void sub_00244940_0x244940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00244940_0x244940");
#endif

    switch (ctx->pc) {
        case 0x244940u: goto label_244940;
        case 0x244944u: goto label_244944;
        case 0x244948u: goto label_244948;
        case 0x24494cu: goto label_24494c;
        case 0x244950u: goto label_244950;
        case 0x244954u: goto label_244954;
        case 0x244958u: goto label_244958;
        case 0x24495cu: goto label_24495c;
        case 0x244960u: goto label_244960;
        case 0x244964u: goto label_244964;
        case 0x244968u: goto label_244968;
        case 0x24496cu: goto label_24496c;
        case 0x244970u: goto label_244970;
        case 0x244974u: goto label_244974;
        case 0x244978u: goto label_244978;
        case 0x24497cu: goto label_24497c;
        case 0x244980u: goto label_244980;
        case 0x244984u: goto label_244984;
        case 0x244988u: goto label_244988;
        case 0x24498cu: goto label_24498c;
        case 0x244990u: goto label_244990;
        case 0x244994u: goto label_244994;
        case 0x244998u: goto label_244998;
        case 0x24499cu: goto label_24499c;
        case 0x2449a0u: goto label_2449a0;
        case 0x2449a4u: goto label_2449a4;
        case 0x2449a8u: goto label_2449a8;
        case 0x2449acu: goto label_2449ac;
        case 0x2449b0u: goto label_2449b0;
        case 0x2449b4u: goto label_2449b4;
        case 0x2449b8u: goto label_2449b8;
        case 0x2449bcu: goto label_2449bc;
        case 0x2449c0u: goto label_2449c0;
        case 0x2449c4u: goto label_2449c4;
        case 0x2449c8u: goto label_2449c8;
        case 0x2449ccu: goto label_2449cc;
        case 0x2449d0u: goto label_2449d0;
        case 0x2449d4u: goto label_2449d4;
        case 0x2449d8u: goto label_2449d8;
        case 0x2449dcu: goto label_2449dc;
        case 0x2449e0u: goto label_2449e0;
        case 0x2449e4u: goto label_2449e4;
        case 0x2449e8u: goto label_2449e8;
        case 0x2449ecu: goto label_2449ec;
        case 0x2449f0u: goto label_2449f0;
        case 0x2449f4u: goto label_2449f4;
        case 0x2449f8u: goto label_2449f8;
        default: break;
    }

    ctx->pc = 0x244940u;

label_244940:
    // 0x244940: 0x27bdfd80  addiu       $sp, $sp, -0x280
    ctx->pc = 0x244940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966656));
label_244944:
    // 0x244944: 0xffb00260  sd          $s0, 0x260($sp)
    ctx->pc = 0x244944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 608), GPR_U64(ctx, 16));
label_244948:
    // 0x244948: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x244948u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_24494c:
    // 0x24494c: 0xffb10268  sd          $s1, 0x268($sp)
    ctx->pc = 0x24494cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 616), GPR_U64(ctx, 17));
label_244950:
    // 0x244950: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
label_244954:
    if (ctx->pc == 0x244954u) {
        ctx->pc = 0x244954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244950u;
        // 0x244954: 0xffbf0270  sd          $ra, 0x270($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 624), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244958u;
        goto label_244958;
    }
    ctx->pc = 0x244950u;
    {
        const bool branch_taken_0x244950 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x244954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244950u;
        // 0x244954: 0xffbf0270  sd          $ra, 0x270($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 624), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244950) {
            ctx->pc = 0x244968u;
            goto label_244968;
        }
    }
    ctx->pc = 0x244958u;
label_244958:
    // 0x244958: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x244958u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_24495c:
    // 0x24495c: 0x1000001f  b           . + 4 + (0x1F << 2)
label_244960:
    if (ctx->pc == 0x244960u) {
        ctx->pc = 0x244960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24495Cu;
        // 0x244960: 0x2484c140  addiu       $a0, $a0, -0x3EC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951232));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244964u;
        goto label_244964;
    }
    ctx->pc = 0x24495Cu;
    {
        const bool branch_taken_0x24495c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x244960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24495Cu;
        // 0x244960: 0x2484c140  addiu       $a0, $a0, -0x3EC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24495c) {
            ctx->pc = 0x2449DCu;
            goto label_2449dc;
        }
    }
    ctx->pc = 0x244964u;
label_244964:
    // 0x244964: 0x0  nop
    ctx->pc = 0x244964u;
    // NOP
label_244968:
    // 0x244968: 0x27b10130  addiu       $s1, $sp, 0x130
    ctx->pc = 0x244968u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_24496c:
    // 0x24496c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x24496cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_244970:
    // 0x244970: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x244970u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_244974:
    // 0x244974: 0xc090fbe  jal         func_243EF8
label_244978:
    if (ctx->pc == 0x244978u) {
        ctx->pc = 0x244978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244974u;
        // 0x244978: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24497Cu;
        goto label_24497c;
    }
    ctx->pc = 0x244974u;
    SET_GPR_U32(ctx, 31, 0x24497Cu);
    ctx->pc = 0x244978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244974u;
    // 0x244978: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243EF8u, 0x244974u, 0x24497Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24497Cu;
label_24497c:
    // 0x24497c: 0x83a20130  lb          $v0, 0x130($sp)
    ctx->pc = 0x24497cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 304)));
label_244980:
    // 0x244980: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_244984:
    if (ctx->pc == 0x244984u) {
        ctx->pc = 0x244984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244980u;
        // 0x244984: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244988u;
        goto label_244988;
    }
    ctx->pc = 0x244980u;
    {
        const bool branch_taken_0x244980 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x244984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244980u;
        // 0x244984: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244980) {
            ctx->pc = 0x244998u;
            goto label_244998;
        }
    }
    ctx->pc = 0x244988u;
label_244988:
    // 0x244988: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x244988u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_24498c:
    // 0x24498c: 0x10000013  b           . + 4 + (0x13 << 2)
label_244990:
    if (ctx->pc == 0x244990u) {
        ctx->pc = 0x244990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24498Cu;
        // 0x244990: 0x2484c140  addiu       $a0, $a0, -0x3EC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951232));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244994u;
        goto label_244994;
    }
    ctx->pc = 0x24498Cu;
    {
        const bool branch_taken_0x24498c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x244990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24498Cu;
        // 0x244990: 0x2484c140  addiu       $a0, $a0, -0x3EC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24498c) {
            ctx->pc = 0x2449DCu;
            goto label_2449dc;
        }
    }
    ctx->pc = 0x244994u;
label_244994:
    // 0x244994: 0x0  nop
    ctx->pc = 0x244994u;
    // NOP
label_244998:
    // 0x244998: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x244998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_24499c:
    // 0x24499c: 0xc090f2c  jal         func_243CB0
label_2449a0:
    if (ctx->pc == 0x2449A0u) {
        ctx->pc = 0x2449A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24499Cu;
        // 0x2449a0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2449A4u;
        goto label_2449a4;
    }
    ctx->pc = 0x24499Cu;
    SET_GPR_U32(ctx, 31, 0x2449A4u);
    ctx->pc = 0x2449A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24499Cu;
    // 0x2449a0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243CB0u, 0x24499Cu, 0x2449A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2449A4u;
label_2449a4:
    // 0x2449a4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2449a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2449a8:
    // 0x2449a8: 0x56000005  bnel        $s0, $zero, . + 4 + (0x5 << 2)
label_2449ac:
    if (ctx->pc == 0x2449ACu) {
        ctx->pc = 0x2449ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2449A8u;
        // 0x2449ac: 0x8e02003c  lw          $v0, 0x3C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2449B0u;
        goto label_2449b0;
    }
    ctx->pc = 0x2449A8u;
    {
        const bool branch_taken_0x2449a8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2449a8) {
            ctx->pc = 0x2449ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2449A8u;
            // 0x2449ac: 0x8e02003c  lw          $v0, 0x3C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2449C0u;
            goto label_2449c0;
        }
    }
    ctx->pc = 0x2449B0u;
label_2449b0:
    // 0x2449b0: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x2449b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_2449b4:
    // 0x2449b4: 0xc090d8a  jal         func_243628
label_2449b8:
    if (ctx->pc == 0x2449B8u) {
        ctx->pc = 0x2449B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2449B4u;
        // 0x2449b8: 0x2484c190  addiu       $a0, $a0, -0x3E70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951312));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2449BCu;
        goto label_2449bc;
    }
    ctx->pc = 0x2449B4u;
    SET_GPR_U32(ctx, 31, 0x2449BCu);
    ctx->pc = 0x2449B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2449B4u;
    // 0x2449b8: 0x2484c190  addiu       $a0, $a0, -0x3E70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243628u, 0x2449B4u, 0x2449BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2449BCu;
label_2449bc:
    // 0x2449bc: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x2449bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_2449c0:
    // 0x2449c0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_2449c4:
    if (ctx->pc == 0x2449C4u) {
        ctx->pc = 0x2449C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2449C0u;
        // 0x2449c4: 0x3c040067  lui         $a0, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2449C8u;
        goto label_2449c8;
    }
    ctx->pc = 0x2449C0u;
    {
        const bool branch_taken_0x2449c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2449c0) {
            ctx->pc = 0x2449C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2449C0u;
            // 0x2449c4: 0x3c040067  lui         $a0, 0x67 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2449D8u;
            goto label_2449d8;
        }
    }
    ctx->pc = 0x2449C8u;
label_2449c8:
    // 0x2449c8: 0x40f809  jalr        $v0
label_2449cc:
    if (ctx->pc == 0x2449CCu) {
        ctx->pc = 0x2449CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2449C8u;
        // 0x2449cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2449D0u;
        goto label_2449d0;
    }
    ctx->pc = 0x2449C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2449D0u);
        ctx->pc = 0x2449CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2449C8u;
        // 0x2449cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2449C8u, 0x2449D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2449D0u;
label_2449d0:
    // 0x2449d0: 0x10000006  b           . + 4 + (0x6 << 2)
label_2449d4:
    if (ctx->pc == 0x2449D4u) {
        ctx->pc = 0x2449D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2449D0u;
        // 0x2449d4: 0xdfb00260  ld          $s0, 0x260($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 608)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2449D8u;
        goto label_2449d8;
    }
    ctx->pc = 0x2449D0u;
    {
        const bool branch_taken_0x2449d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2449D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2449D0u;
        // 0x2449d4: 0xdfb00260  ld          $s0, 0x260($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 608)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2449d0) {
            ctx->pc = 0x2449ECu;
            goto label_2449ec;
        }
    }
    ctx->pc = 0x2449D8u;
label_2449d8:
    // 0x2449d8: 0x2484c1b8  addiu       $a0, $a0, -0x3E48
    ctx->pc = 0x2449d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951352));
label_2449dc:
    // 0x2449dc: 0xc090d8a  jal         func_243628
label_2449e0:
    if (ctx->pc == 0x2449E0u) {
        ctx->pc = 0x2449E4u;
        goto label_2449e4;
    }
    ctx->pc = 0x2449DCu;
    SET_GPR_U32(ctx, 31, 0x2449E4u);
    ctx->pc = 0x243628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243628u, 0x2449DCu, 0x2449E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2449E4u;
label_2449e4:
    // 0x2449e4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2449e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2449e8:
    // 0x2449e8: 0xdfb00260  ld          $s0, 0x260($sp)
    ctx->pc = 0x2449e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 608)));
label_2449ec:
    // 0x2449ec: 0xdfb10268  ld          $s1, 0x268($sp)
    ctx->pc = 0x2449ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 616)));
label_2449f0:
    // 0x2449f0: 0xdfbf0270  ld          $ra, 0x270($sp)
    ctx->pc = 0x2449f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 624)));
label_2449f4:
    // 0x2449f4: 0x3e00008  jr          $ra
label_2449f8:
    if (ctx->pc == 0x2449F8u) {
        ctx->pc = 0x2449F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2449F4u;
        // 0x2449f8: 0x27bd0280  addiu       $sp, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2449FCu;
        goto label_fallthrough_0x2449f4;
    }
    ctx->pc = 0x2449F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2449F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2449F4u;
        // 0x2449f8: 0x27bd0280  addiu       $sp, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2449F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2449f4:
    ctx->pc = 0x2449FCu;
}
