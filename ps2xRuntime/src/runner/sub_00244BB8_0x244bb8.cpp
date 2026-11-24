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

// Function: sub_00244BB8
// Address: 0x244bb8 - 0x244c8c
void sub_00244BB8_0x244bb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00244BB8_0x244bb8");
#endif

    switch (ctx->pc) {
        case 0x244bb8u: goto label_244bb8;
        case 0x244bbcu: goto label_244bbc;
        case 0x244bc0u: goto label_244bc0;
        case 0x244bc4u: goto label_244bc4;
        case 0x244bc8u: goto label_244bc8;
        case 0x244bccu: goto label_244bcc;
        case 0x244bd0u: goto label_244bd0;
        case 0x244bd4u: goto label_244bd4;
        case 0x244bd8u: goto label_244bd8;
        case 0x244bdcu: goto label_244bdc;
        case 0x244be0u: goto label_244be0;
        case 0x244be4u: goto label_244be4;
        case 0x244be8u: goto label_244be8;
        case 0x244becu: goto label_244bec;
        case 0x244bf0u: goto label_244bf0;
        case 0x244bf4u: goto label_244bf4;
        case 0x244bf8u: goto label_244bf8;
        case 0x244bfcu: goto label_244bfc;
        case 0x244c00u: goto label_244c00;
        case 0x244c04u: goto label_244c04;
        case 0x244c08u: goto label_244c08;
        case 0x244c0cu: goto label_244c0c;
        case 0x244c10u: goto label_244c10;
        case 0x244c14u: goto label_244c14;
        case 0x244c18u: goto label_244c18;
        case 0x244c1cu: goto label_244c1c;
        case 0x244c20u: goto label_244c20;
        case 0x244c24u: goto label_244c24;
        case 0x244c28u: goto label_244c28;
        case 0x244c2cu: goto label_244c2c;
        case 0x244c30u: goto label_244c30;
        case 0x244c34u: goto label_244c34;
        case 0x244c38u: goto label_244c38;
        case 0x244c3cu: goto label_244c3c;
        case 0x244c40u: goto label_244c40;
        case 0x244c44u: goto label_244c44;
        case 0x244c48u: goto label_244c48;
        case 0x244c4cu: goto label_244c4c;
        case 0x244c50u: goto label_244c50;
        case 0x244c54u: goto label_244c54;
        case 0x244c58u: goto label_244c58;
        case 0x244c5cu: goto label_244c5c;
        case 0x244c60u: goto label_244c60;
        case 0x244c64u: goto label_244c64;
        case 0x244c68u: goto label_244c68;
        case 0x244c6cu: goto label_244c6c;
        case 0x244c70u: goto label_244c70;
        case 0x244c74u: goto label_244c74;
        case 0x244c78u: goto label_244c78;
        case 0x244c7cu: goto label_244c7c;
        case 0x244c80u: goto label_244c80;
        case 0x244c84u: goto label_244c84;
        case 0x244c88u: goto label_244c88;
        default: break;
    }

    ctx->pc = 0x244bb8u;

label_244bb8:
    // 0x244bb8: 0x27bdfd70  addiu       $sp, $sp, -0x290
    ctx->pc = 0x244bb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966640));
label_244bbc:
    // 0x244bbc: 0xffb00260  sd          $s0, 0x260($sp)
    ctx->pc = 0x244bbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 608), GPR_U64(ctx, 16));
label_244bc0:
    // 0x244bc0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x244bc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_244bc4:
    // 0x244bc4: 0xffb10268  sd          $s1, 0x268($sp)
    ctx->pc = 0x244bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 616), GPR_U64(ctx, 17));
label_244bc8:
    // 0x244bc8: 0x27b10130  addiu       $s1, $sp, 0x130
    ctx->pc = 0x244bc8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_244bcc:
    // 0x244bcc: 0xffb20270  sd          $s2, 0x270($sp)
    ctx->pc = 0x244bccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 624), GPR_U64(ctx, 18));
label_244bd0:
    // 0x244bd0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x244bd0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_244bd4:
    // 0x244bd4: 0xffb30278  sd          $s3, 0x278($sp)
    ctx->pc = 0x244bd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 632), GPR_U64(ctx, 19));
label_244bd8:
    // 0x244bd8: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x244bd8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_244bdc:
    // 0x244bdc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x244bdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_244be0:
    // 0x244be0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x244be0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_244be4:
    // 0x244be4: 0xffb40280  sd          $s4, 0x280($sp)
    ctx->pc = 0x244be4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 640), GPR_U64(ctx, 20));
label_244be8:
    // 0x244be8: 0xffbf0288  sd          $ra, 0x288($sp)
    ctx->pc = 0x244be8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 648), GPR_U64(ctx, 31));
label_244bec:
    // 0x244bec: 0xc090fbe  jal         func_243EF8
label_244bf0:
    if (ctx->pc == 0x244BF0u) {
        ctx->pc = 0x244BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244BECu;
        // 0x244bf0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244BF4u;
        goto label_244bf4;
    }
    ctx->pc = 0x244BECu;
    SET_GPR_U32(ctx, 31, 0x244BF4u);
    ctx->pc = 0x244BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244BECu;
    // 0x244bf0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243EF8u, 0x244BECu, 0x244BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244BF4u;
label_244bf4:
    // 0x244bf4: 0x83a20000  lb          $v0, 0x0($sp)
    ctx->pc = 0x244bf4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
label_244bf8:
    // 0x244bf8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x244bf8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_244bfc:
    // 0x244bfc: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_244c00:
    if (ctx->pc == 0x244C00u) {
        ctx->pc = 0x244C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244BFCu;
        // 0x244c00: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244C04u;
        goto label_244c04;
    }
    ctx->pc = 0x244BFCu;
    {
        const bool branch_taken_0x244bfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x244C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244BFCu;
        // 0x244c00: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244bfc) {
            ctx->pc = 0x244C30u;
            goto label_244c30;
        }
    }
    ctx->pc = 0x244C04u;
label_244c04:
    // 0x244c04: 0xc091010  jal         func_244040
label_244c08:
    if (ctx->pc == 0x244C08u) {
        ctx->pc = 0x244C0Cu;
        goto label_244c0c;
    }
    ctx->pc = 0x244C04u;
    SET_GPR_U32(ctx, 31, 0x244C0Cu);
    ctx->pc = 0x244040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244040u, 0x244C04u, 0x244C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244C0Cu;
label_244c0c:
    // 0x244c0c: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x244c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_244c10:
    // 0x244c10: 0x83a20000  lb          $v0, 0x0($sp)
    ctx->pc = 0x244c10u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
label_244c14:
    // 0x244c14: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_244c18:
    if (ctx->pc == 0x244C18u) {
        ctx->pc = 0x244C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244C14u;
        // 0x244c18: 0x2484c200  addiu       $a0, $a0, -0x3E00 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951424));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244C1Cu;
        goto label_244c1c;
    }
    ctx->pc = 0x244C14u;
    {
        const bool branch_taken_0x244c14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x244C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244C14u;
        // 0x244c18: 0x2484c200  addiu       $a0, $a0, -0x3E00 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951424));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244c14) {
            ctx->pc = 0x244C30u;
            goto label_244c30;
        }
    }
    ctx->pc = 0x244C1Cu;
label_244c1c:
    // 0x244c1c: 0xc090d8a  jal         func_243628
label_244c20:
    if (ctx->pc == 0x244C20u) {
        ctx->pc = 0x244C24u;
        goto label_244c24;
    }
    ctx->pc = 0x244C1Cu;
    SET_GPR_U32(ctx, 31, 0x244C24u);
    ctx->pc = 0x243628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243628u, 0x244C1Cu, 0x244C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244C24u;
label_244c24:
    // 0x244c24: 0x10000011  b           . + 4 + (0x11 << 2)
label_244c28:
    if (ctx->pc == 0x244C28u) {
        ctx->pc = 0x244C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244C24u;
        // 0x244c28: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244C2Cu;
        goto label_244c2c;
    }
    ctx->pc = 0x244C24u;
    {
        const bool branch_taken_0x244c24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x244C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244C24u;
        // 0x244c28: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244c24) {
            ctx->pc = 0x244C6Cu;
            goto label_244c6c;
        }
    }
    ctx->pc = 0x244C2Cu;
label_244c2c:
    // 0x244c2c: 0x0  nop
    ctx->pc = 0x244c2cu;
    // NOP
label_244c30:
    // 0x244c30: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x244c30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_244c34:
    // 0x244c34: 0xc091546  jal         func_245518
label_244c38:
    if (ctx->pc == 0x244C38u) {
        ctx->pc = 0x244C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244C34u;
        // 0x244c38: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244C3Cu;
        goto label_244c3c;
    }
    ctx->pc = 0x244C34u;
    SET_GPR_U32(ctx, 31, 0x244C3Cu);
    ctx->pc = 0x244C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244C34u;
    // 0x244c38: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x245518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x245518u, 0x244C34u, 0x244C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244C3Cu;
label_244c3c:
    // 0x244c3c: 0xc090e62  jal         func_243988
label_244c40:
    if (ctx->pc == 0x244C40u) {
        ctx->pc = 0x244C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244C3Cu;
        // 0x244c40: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244C44u;
        goto label_244c44;
    }
    ctx->pc = 0x244C3Cu;
    SET_GPR_U32(ctx, 31, 0x244C44u);
    ctx->pc = 0x244C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244C3Cu;
    // 0x244c40: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243988u, 0x244C3Cu, 0x244C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244C44u;
label_244c44:
    // 0x244c44: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_244c48:
    if (ctx->pc == 0x244C48u) {
        ctx->pc = 0x244C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244C44u;
        // 0x244c48: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244C4Cu;
        goto label_244c4c;
    }
    ctx->pc = 0x244C44u;
    {
        const bool branch_taken_0x244c44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x244c44) {
            ctx->pc = 0x244C48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x244C44u;
            // 0x244c48: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x244C6Cu;
            goto label_244c6c;
        }
    }
    ctx->pc = 0x244C4Cu;
label_244c4c:
    // 0x244c4c: 0x8c420048  lw          $v0, 0x48($v0)
    ctx->pc = 0x244c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
label_244c50:
    // 0x244c50: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_244c54:
    if (ctx->pc == 0x244C54u) {
        ctx->pc = 0x244C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244C50u;
        // 0x244c54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244C58u;
        goto label_244c58;
    }
    ctx->pc = 0x244C50u;
    {
        const bool branch_taken_0x244c50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x244C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244C50u;
        // 0x244c54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244c50) {
            ctx->pc = 0x244C68u;
            goto label_244c68;
        }
    }
    ctx->pc = 0x244C58u;
label_244c58:
    // 0x244c58: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x244c58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_244c5c:
    // 0x244c5c: 0x40f809  jalr        $v0
label_244c60:
    if (ctx->pc == 0x244C60u) {
        ctx->pc = 0x244C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244C5Cu;
        // 0x244c60: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244C64u;
        goto label_244c64;
    }
    ctx->pc = 0x244C5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x244C64u);
        ctx->pc = 0x244C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244C5Cu;
        // 0x244c60: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x244C5Cu, 0x244C64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x244C64u;
label_244c64:
    // 0x244c64: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x244c64u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_244c68:
    // 0x244c68: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x244c68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_244c6c:
    // 0x244c6c: 0xdfb00260  ld          $s0, 0x260($sp)
    ctx->pc = 0x244c6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 608)));
label_244c70:
    // 0x244c70: 0xdfb10268  ld          $s1, 0x268($sp)
    ctx->pc = 0x244c70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 616)));
label_244c74:
    // 0x244c74: 0xdfb20270  ld          $s2, 0x270($sp)
    ctx->pc = 0x244c74u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 624)));
label_244c78:
    // 0x244c78: 0xdfb30278  ld          $s3, 0x278($sp)
    ctx->pc = 0x244c78u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 632)));
label_244c7c:
    // 0x244c7c: 0xdfb40280  ld          $s4, 0x280($sp)
    ctx->pc = 0x244c7cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 640)));
label_244c80:
    // 0x244c80: 0xdfbf0288  ld          $ra, 0x288($sp)
    ctx->pc = 0x244c80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 648)));
label_244c84:
    // 0x244c84: 0x3e00008  jr          $ra
label_244c88:
    if (ctx->pc == 0x244C88u) {
        ctx->pc = 0x244C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244C84u;
        // 0x244c88: 0x27bd0290  addiu       $sp, $sp, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244C8Cu;
        goto label_fallthrough_0x244c84;
    }
    ctx->pc = 0x244C84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x244C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244C84u;
        // 0x244c88: 0x27bd0290  addiu       $sp, $sp, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x244C84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x244c84:
    ctx->pc = 0x244C8Cu;
}
